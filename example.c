/*
 * Example XHCI Driver Usage
 * Public Domain - 2026
 *
 * This example demonstrates how to use the XHCI driver to initialize
 * the controller and enumerate a USB device.
 */

#include "xhci.h"
#include "xhci_mem.h"
#include "xhci_util.h"

/*
 * Example: Initialize XHCI controller
 */
int example_init_xhci(uint32_t controller_base)
{
    xhci_controller_t controller;
    int result;

    xhci_printf("Initializing XHCI Controller at 0x%08x\n", controller_base);

    /* Initialize the controller */
    result = xhci_init(&controller, controller_base);
    if (result != 0) {
        xhci_printf("Failed to initialize XHCI controller\n");
        return -1;
    }

    xhci_printf("XHCI controller initialized successfully\n");
    xhci_print_status(&controller);

    return 0;
}

/*
 * Example: Reset and start controller
 */
int example_start_xhci(xhci_controller_t *controller)
{
    int result;

    if (controller == NULL) {
        return -1;
    }

    xhci_printf("Resetting XHCI controller...\n");
    result = xhci_reset(controller);
    if (result != 0) {
        xhci_printf("Failed to reset controller\n");
        return -1;
    }

    xhci_printf("Starting XHCI controller...\n");
    result = xhci_start(controller);
    if (result != 0) {
        xhci_printf("Failed to start controller\n");
        return -1;
    }

    xhci_printf("XHCI controller started successfully\n");
    xhci_print_status(controller);

    return 0;
}

/*
 * Example: Check USB ports for connected devices
 */
int example_check_ports(xhci_controller_t *controller)
{
    uint32_t port_id;
    int port_status;
    int connected;

    if (controller == NULL) {
        return -1;
    }

    xhci_printf("Checking USB ports...\n");

    for (port_id = 1; port_id <= controller->max_ports; port_id++) {
        port_status = xhci_get_port_status(controller, port_id);
        if (port_status < 0) {
            xhci_printf("Error reading port %d\n", port_id);
            continue;
        }

        connected = (port_status & XHCI_PORT_CCS) ? 1 : 0;
        xhci_printf("Port %d: %s\n",
                    port_id,
                    connected ? "Device Connected" : "Empty");

        if (connected) {
            xhci_printf("  Port Status: 0x%08x\n", port_status);
            xhci_printf("  Device Speed: %d\n",
                        (port_status & XHCI_PORT_SPEED_MASK) >> 10);
        }
    }

    return 0;
}

/*
 * Example: Enable a USB device slot and configure it
 */
int example_enable_device(xhci_controller_t *controller)
{
    int slot_id;
    int result;
    usb_device_descriptor_t dev_desc;

    if (controller == NULL) {
        return -1;
    }

    xhci_printf("Enabling device slot...\n");

    /* Enable a device slot */
    slot_id = xhci_enable_slot(controller);
    if (slot_id < 0) {
        xhci_printf("Failed to enable device slot\n");
        return -1;
    }

    xhci_printf("Device slot enabled: slot_id=%d\n", slot_id);

    /* Address the device */
    xhci_printf("Addressing device...\n");
    result = xhci_address_device(controller, slot_id);
    if (result != 0) {
        xhci_printf("Failed to address device\n");
        xhci_disable_slot(controller, slot_id);
        return -1;
    }

    xhci_printf("Device addressed successfully\n");

    /* Try to get device descriptor */
    xhci_printf("Getting device descriptor...\n");
    result = xhci_get_device_descriptor(controller, slot_id, &dev_desc);
    if (result == 0) {
        xhci_printf("Device Descriptor:\n");
        xhci_printf("  USB Version: 0x%04x\n", dev_desc.bcdUSB);
        xhci_printf("  Device Class: 0x%02x\n", dev_desc.bDeviceClass);
        xhci_printf("  Device Subclass: 0x%02x\n", dev_desc.bDeviceSubClass);
        xhci_printf("  Vendor ID: 0x%04x\n", dev_desc.idVendor);
        xhci_printf("  Product ID: 0x%04x\n", dev_desc.idProduct);
        xhci_printf("  Number of Configurations: %d\n", dev_desc.bNumConfigurations);
    } else {
        xhci_printf("Failed to get device descriptor\n");
    }

    /* Set device configuration */
    xhci_printf("Setting device configuration...\n");
    result = xhci_set_device_configuration(controller, slot_id, 1);
    if (result != 0) {
        xhci_printf("Failed to set device configuration\n");
    } else {
        xhci_printf("Device configured successfully\n");
    }

    return slot_id;
}

/*
 * Example: Main routine
 */
int example_main(void)
{
    xhci_controller_t controller;
    uint32_t controller_base;
    int result;

    /*
     * NOTE: This base address is platform-dependent
     * It should be obtained from:
     * - BIOS/UEFI tables (ACPI)
     * - PCI configuration space
     * - Device tree (on embedded systems)
     *
     * For this example, we use a placeholder
     */
    controller_base = 0xF0000000;  /* Example address */

    xhci_printf("=== XHCI USB Driver Example ===\n\n");

    /* Initialize controller */
    result = xhci_init(&controller, controller_base);
    if (result != 0) {
        xhci_printf("Failed to initialize controller\n");
        return -1;
    }

    /* Reset and start */
    result = example_start_xhci(&controller);
    if (result != 0) {
        xhci_printf("Failed to start controller\n");
        return -1;
    }

    /* Check ports */
    example_check_ports(&controller);

    /* Try to enable a device */
    example_enable_device(&controller);

    xhci_printf("\n=== Example Complete ===\n");

    return 0;
}
