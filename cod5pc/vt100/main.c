
#include "debug.h"

#include "usb_host_config.h"

#include "display.c"

__attribute__((aligned(4)))  uint8_t  Com_Buffer[ DEF_COM_BUF_LEN ];     
__attribute__((aligned(4)))  uint8_t  DevDesc_Buf[ 18 ];
struct   _ROOT_HUB_DEVICE RootHubDev[ DEF_TOTAL_ROOT_HUB ];
struct   __HOST_CTL HostCtl[ DEF_TOTAL_ROOT_HUB * DEF_ONE_USB_SUP_DEV_TOTAL ];

#include "u.c"

int main(void) {
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
	SystemCoreClockUpdate();
	Delay_Init();
	USART_Printf_Init(115200);

   	USBFS_RCC_Init( );
    	USBFS_Host_Init( ENABLE , PWR_VDD_SupplyVoltage());
    	memset( &RootHubDev[ DEF_USB_PORT_FS ].bStatus, 0, sizeof( struct _ROOT_HUB_DEVICE ) );
    	memset( &HostCtl[ DEF_USB_PORT_FS ].InterfaceNum, 0, sizeof( struct __HOST_CTL ) );

	setup();
	printf("SystemClk:%d\r\n", (int)SystemCoreClock);
	printf("ChipID:%08x\r\n", (int)DBGMCU_GetCHIPID());
	printf("This is printf example\r\n");

	while (1) {
		loop();
	}
}
