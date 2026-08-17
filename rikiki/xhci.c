#include <stdint.h>
#include <string.h>
#include <stddef.h>

#define PCI_CONFIG_ADDRESS 0xCF8
#define PCI_CONFIG_DATA 0xCFC

#define XHCI_BAR 0x10
#define USB_REQUEST_GET_DESCRIPTOR 0x06
#define USB_DESCRIPTOR_TYPE_HID 0x21

#define TRB_TYPE_SETUP_STAGE 2
#define TRB_TYPE_DATA_STAGE 3
#define TRB_TYPE_STATUS_STAGE 4
#define TRB_TYPE_EVENT_DATA 5
#define TRB_CYCLE 1
#define TRB_ENT 1 << 1
#define TRB_IDT 1 << 6
#define TRB_IOC 1 << 5

#define TRB_RING_SIZE 256
#define TRB_ALIGNMENT 64

typedef struct {
    uint32_t caplength_hciversion;
    uint32_t hcsparams1;
    uint32_t hcsparams2;
    uint32_t hcsparams3;
    uint32_t hccparams1;
    uint32_t dboff;
    uint32_t rtsoff;
    uint32_t hccparams2;
} XHCICapRegs;

typedef struct {
    uint32_t usbcmd;
    uint32_t usbsts;
    uint32_t pagesize;
    uint32_t reserved1[2];
    uint32_t dnctrl;
    uint32_t crcr;
    uint32_t reserved2[4];
    uint32_t dcbaap;
    uint32_t config;
} XHCIOpRegs;

typedef struct {
    uint32_t portsc;
    uint32_t portpmsc;
    uint32_t portli;
    uint32_t porthlpmc;
} XHCIRootPort;

typedef struct {
    XHCICapRegs *cap_regs;
    XHCIOpRegs *op_regs;
    XHCIRootPort *ports;
    volatile uint32_t *doorbells;
} XHCIController;

typedef struct {
    uint64_t parameter;
    uint32_t status;
    uint32_t control;
} TRB;

typedef struct {
    uint8_t length;
    uint8_t descriptor_type;
    uint16_t usb_version;
    uint8_t device_class;
    uint8_t device_subclass;
    uint8_t device_protocol;
    uint8_t max_packet_size;
    uint16_t vendor_id;
    uint16_t product_id;
    uint16_t device_version;
    uint8_t manufacturer;
    uint8_t product;
    uint8_t serial_number;
    uint8_t num_configurations;
} USBDeviceDescriptor;

typedef struct {
    uint8_t bLength;
    uint8_t bDescriptorType;
    uint16_t bcdHID;
    uint8_t bCountryCode;
    uint8_t bNumDescriptors;
    uint8_t bReportDescriptorType;
    uint16_t wReportDescriptorLength;
} USBHIDDescriptor;

typedef struct {
    TRB *command_ring;
    TRB *transfer_ring;
    TRB *event_ring;
    uint64_t cmd_ring_dequeue;
    uint64_t trns_ring_dequeue;
    uint64_t event_ring_dequeue;
    uint64_t cmd_ring_enq;
    uint64_t trns_ring_enq;
    uint64_t event_ring_enq;
    uint32_t cycle_state;
} XHCIQueue;

void *allocate_aligned_memory(size_t alignment, size_t size) {
    uintptr_t ptr = (uintptr_t)malloc(size + alignment - 1);
    if (ptr == 0) return NULL;
    uintptr_t aligned_ptr = (ptr + alignment - 1) & ~(alignment - 1);
    return (void *)aligned_ptr;
}

uint32_t pci_read(uint32_t bus, uint32_t device, uint32_t function, uint32_t offset) {
    uint32_t address = (bus << 16) | (device << 11) | (function << 8) | (offset & 0xfc) | 0x80000000;
    outl(PCI_CONFIG_ADDRESS, address);
    return inl(PCI_CONFIG_DATA);
}

void xhci_init(XHCIController *xhci) {
    // Assumons bus 0, device 20, fonction 0 à titre d'exemple
    uint32_t bar = pci_read(0, 20, 0, XHCI_BAR);
    
    xhci->cap_regs = (XHCICapRegs *)(bar & ~0xF);
    xhci->op_regs = (XHCIOpRegs *)((uint8_t *)xhci->cap_regs + (xhci->cap_regs->caplength_hciversion & 0xFF));
    xhci->ports = (XHCIRootPort *)((uint8_t *)xhci->op_regs + 0x400); // Localisation des root ports
    xhci->doorbells = (volatile uint32_t *)((uint8_t *)xhci->cap_regs + (xhci->cap_regs->dboff & ~0x3));

    // Démarrer le contrôleur
    xhci->op_regs->usbcmd |= 1;  // Bit Run/Stop (RS) pour démarrer le contrôleur
}

void initialize_root_ports(XHCIController *xhci) {
    uint32_t port_count = (xhci->cap_regs->hcsparams1 >> 24) & 0xFF; // Nombre de root ports
    for (uint32_t i = 0; i < port_count; i++) {
        xhci->ports[i].portsc |= (1 << 1); // Bit de réinitialisation du port
        while (xhci->ports[i].portsc & (1 << 1)); // Attendre la fin de la réinitialisation
        xhci->ports[i].portsc |= (1 << 2); // Activer le port
    }
}

void xhci_setup_queue(XHCIQueue *queue) {
    // Allocation alignée des rings de commande, transfert et événements
    queue->command_ring = (TRB *)allocate_aligned_memory(TRB_ALIGNMENT, TRB_RING_SIZE * sizeof(TRB));
    queue->transfer_ring = (TRB *)allocate_aligned_memory(TRB_ALIGNMENT, TRB_RING_SIZE * sizeof(TRB));
    queue->event_ring = (TRB *)allocate_aligned_memory(TRB_ALIGNMENT, TRB_RING_SIZE * sizeof(TRB));

    // Initialisation des rings
    memset(queue->command_ring, 0, TRB_RING_SIZE * sizeof(TRB));
    memset(queue->transfer_ring, 0, TRB_RING_SIZE * sizeof(TRB));
    memset(queue->event_ring, 0, TRB_RING_SIZE * sizeof(TRB));

    // Setup des pointeurs de ring
    queue->cmd_ring_dequeue = (uint64_t)queue->command_ring;
    queue->trns_ring_dequeue = (uint64_t)queue->transfer_ring;
    queue->event_ring_dequeue = (uint64_t)queue->event_ring;
    queue->cmd_ring_enq = (uint64_t)queue->command_ring;
    queue->trns_ring_enq = (uint64_t)queue->transfer_ring;
    queue->event_ring_enq = (uint64_t)queue->event_ring;
    queue->cycle_state = TRB_CYCLE;
}

int wait_for_completion(XHCIController *xhci, XHCIQueue *queue) {
    while (xhci->op_regs->usbsts & (1 << 0)) {
        // Attendre la fin des transactions
    }

    // Vérifier l'anneau d'événement pour la complétion
    TRB *event_trb = (TRB *)queue->event_ring_dequeue;
    if ((event_trb->control & TRB_CYCLE) == queue->cycle_state) {
        // Traitement de la complétion
        queue->event_ring_dequeue += sizeof(TRB);
        if (queue->event_ring_dequeue >= (uint64_t)queue->event_ring + TRB_RING_SIZE * sizeof(TRB)) {
            queue->event_ring_dequeue = (uint64_t)queue->event_ring;
            queue->cycle_state ^= 1; // Inverser le cycle bit
        }
    }
    return 0;
}

int send_control_transfer(XHCIController *xhci, XHCIQueue *queue, uint8_t *setup_packet, uint8_t *data_buffer, uint32_t data_length) {
    // Préparer les TRB de setup, données et statut
    TRB *cmd_ring = (TRB *)queue->cmd_ring_enq;
    TRB *trns_ring = (TRB *)queue->trns_ring_enq;

    // TRB de setup
    cmd_ring[0].parameter = (uint64_t)setup_packet;
    cmd_ring[0].status = sizeof(setup_packet);
    cmd_ring[0].control = TRB_TYPE_SETUP_STAGE | TRB_IDT | queue->cycle_state;  // Type + IDT (Immediate Data Transfer) + Cycle Bit

      // TRB de données
    trns_ring[0].parameter = (uint64_t)data_buffer;
    trns_ring[0].status = data_length;
    trns_ring[0].control = TRB_TYPE_DATA_STAGE | TRB_IOC | queue->cycle_state | (1 << 16);  // Type + IOC (Interrupt On Completion) + Direction (In)

    // TRB de statut
    trns_ring[1].parameter = 0;
    trns_ring[1].status = 0;
    trns_ring[1].control = TRB_TYPE_STATUS_STAGE | TRB_IOC | queue->cycle_state | (1 << 16);  // Type + IOC (Interrupt On Completion)

    // Mettre à jour les pointeurs d'enqueue
    queue->cmd_ring_enq += sizeof(TRB);
    queue->trns_ring_enq += 2 * sizeof(TRB); // Deux TRBs pour la phase de données et de statut

    // Soumettre les TRB
    xhci->op_regs->crcr = (uint64_t)queue->cmd_ring_enq | TRB_CYCLE;  // Soumettre avec le Cycle Bit

    // Attendre la fin du transfert
    wait_for_completion(xhci, queue);

    return 0;
}

int read_hid_descriptor(XHCIController *xhci, XHCIQueue *queue, uint32_t port_num, USBHIDDescriptor *descriptor) {
    uint32_t status = xhci->ports[port_num].portsc;

    if (!(status & (1 << 0))) {  // Vérifier si un périphérique est connecté
        printf("No device connected to port %d\n", port_num);
        return -1;
    }

    // Envoyer une demande de descripteur HID
    uint8_t setup_packet[8] = {
        0x80, // Request type (direction: Device-to-Host)
        USB_REQUEST_GET_DESCRIPTOR, // Request
        USB_DESCRIPTOR_TYPE_HID, // Descriptor Type (HID)
        0x00, // Descriptor Index
        0x00, 0x00, // Language ID
        sizeof(USBHIDDescriptor), 0x00  // Length
    };
    uint8_t data_buffer[sizeof(USBHIDDescriptor)];

    if (send_control_transfer(xhci, queue, setup_packet, data_buffer, sizeof(data_buffer)) < 0) {
        printf("Failed to read HID descriptor\n");
        return -1;
    }

    // Remplir la structure du descripteur HID
    memcpy(descriptor, data_buffer, sizeof(USBHIDDescriptor));

    printf("HID Descriptor: Length=%d, Type=0x%02x, HID Version=0x%04x\n",
           descriptor->bLength, descriptor->bDescriptorType, descriptor->bcdHID);

    return 0;
}

int main() {
    XHCIController xhci;
    XHCIQueue queue;

    xhci_init(&xhci);
    xhci_setup_queue(&queue);
    initialize_root_ports(&xhci);

    USBHIDDescriptor descriptor;
    read_hid_descriptor(&xhci, &queue, 0, &descriptor);

    return 0;
}

