
uint8_t USBHostTransact( uint8_t endp_pid, uint8_t tog, uint32_t timeout )
{
    uint8_t  r, trans_rerty;
    uint16_t i;

    USBFSH->HOST_TX_CTRL = USBFSH->HOST_RX_CTRL = tog;
    trans_rerty = 0;
    do
    {
        USBFSH->HOST_EP_PID = endp_pid;       // Specify token PID and endpoint number
        USBFSH->INT_FG = USBFS_UIF_TRANSFER;  // Allow transmission
        for( i = DEF_WAIT_USB_TOUT_200US; ( i != 0 ) && ( ( USBFSH->INT_FG & USBFS_UIF_TRANSFER ) == 0 ); i-- )
        {
            Delay_Us( 1 );
        }
        USBFSH->HOST_EP_PID = 0x00;  // Stop USB transfer
        if( ( USBFSH->INT_FG & USBFS_UIF_TRANSFER ) == 0 )
        {
            return ERR_USB_UNKNOWN;
        }
        else
        {
            /* Complete transfer */
            if( USBFSH->INT_ST & USBFS_UIS_TOG_OK )
            {
                return ERR_SUCCESS;
            }
            r = USBFSH->INT_ST & USBFS_UIS_H_RES_MASK;  // USB device answer status
            if( r == USB_PID_STALL )
            {
                return ( r | ERR_USB_TRANSFER );
            }
            if( r == USB_PID_NAK )
            {
                if( timeout == 0 )
                {
                    return ( r | ERR_USB_TRANSFER );
                }
                if( timeout < 0xFFFF )
                {
                    timeout--;
                }
                --trans_rerty;
            }
            else switch ( endp_pid >> 4 )
            {
                case USB_PID_SETUP:
                case USB_PID_OUT:
                    if( r )
                    {
                        return ( r | ERR_USB_TRANSFER );
                    }
                    break;
                case USB_PID_IN:
                    if( ( r == USB_PID_DATA0 ) && ( r == USB_PID_DATA1 ) )
                    {
                        ;
                    }
                    else if( r )
                    {
                        return ( r | ERR_USB_TRANSFER );
                    }
                    break;
                default:
                    return ERR_USB_UNKNOWN;
            }
        }
        Delay_Us( 15 );
        if( USBFSH->INT_FG & USBFS_UIF_DETECT )
        {
            Delay_Us( 200 );
            if( USBFSH_CheckRootHubPortEnable( ) == 0 )
            {
                return ERR_USB_DISCON;  // USB device disconnect event
            }
        }
    }while( ++trans_rerty < 10 );

    return ERR_USB_TRANSFER; // Reply timeout
}

uint8_t HostCtrlTransfer( uint8_t *DataBuf, uint8_t *RetLen )
{
    uint8_t  ret;
    uint16_t retlen;
    retlen = (uint16_t)(*RetLen);
    ret = USBFSH_CtrlTransfer( RootHubDev[ DEF_USB_PORT_FS ].bEp0MaxPks, DataBuf, &retlen );
    return ret;
}

void CopySetupReqPkg( const char * pReqPkt )
{
    uint8_t i;
    for(i = 0; i != sizeof(USB_SETUP_REQ); i++)
    {
#if DEF_USB_PORT_FS_EN
        ((char *)pUSBFS_SetupRequest)[i] = *pReqPkt;
#elif DEF_USB_PORT_HS_EN
        ((char *)pUSBHS_SetupRequest)[i] = *pReqPkt;
#endif
        pReqPkt++;
    }
}

uint8_t CtrlGetDeviceDescrTB( void )
{
    uint8_t ret;
    ret = USBFSH_GetDeviceDescr( &RootHubDev[ DEF_USB_PORT_FS ].bEp0MaxPks, TxBuffer );
    return ret;
}

uint8_t CtrlGetConfigDescrTB( void )
{
    uint16_t len;
    uint8_t  ret;
    ret = USBFSH_GetConfigDescr( RootHubDev[ DEF_USB_PORT_FS ].bEp0MaxPks, TxBuffer, 256, &len );
    return ret;
}

uint8_t CtrlSetUsbConfig( uint8_t cfg )
{
    uint8_t ret;
    ret = USBFSH_SetUsbConfig( RootHubDev[ DEF_USB_PORT_FS ].bEp0MaxPks, cfg );
    return ret;
}

uint8_t CtrlSetUsbAddress( uint8_t addr )
{
    uint8_t ret;
    ret = USBFSH_SetUsbAddress( RootHubDev[ DEF_USB_PORT_FS ].bEp0MaxPks, addr );
    return ret;
}

uint8_t CtrlClearEndpStall( uint8_t endp )
{
    uint8_t ret;
    ret = USBFSH_ClearEndpStall( RootHubDev[ DEF_USB_PORT_FS ].bEp0MaxPks, endp );
    return ret;
}


/*********************************************************************
 * @fn      Udisk_USBH_EnumRootDevice
 *
 * @brief   Generally enumerate a device connected to host port.
 *
 * @para    index: USB host port
 *
 * @return  Enumeration result
 */
uint8_t Udisk_USBH_EnumRootDevice( uint8_t usb_port )
{
    uint8_t  s;
    uint8_t  enum_cnt;
    uint8_t  cfg_val;
    uint16_t i;
    uint16_t len;

    DUG_PRINTF( "Enum:\r\n" );

    enum_cnt = 0;
ENUM_START:
    /* Delay and wait for the device to stabilize */
    Delay_Ms( 100 );
    enum_cnt++;
    Delay_Ms( 8 << enum_cnt );

    /* Reset the USB device and wait for the USB device to reconnect */
    USBFSH_ResetRootHubPort( 0 );
    for( i = 0, s = 0; i < DEF_RE_ATTACH_TIMEOUT; i++ )
    {
        if( USBFSH_EnableRootHubPort( &RootHubDev[ usb_port ].bSpeed ) == ERR_SUCCESS )
        {
            i = 0;
            s++;
            if( s > 6 )
            {
                break;
            }
        }
        Delay_Ms( 1 );
    }
    if( i )
    {
        /* Determine whether the maximum number of retries has been reached, and retry if not reached */
        if( enum_cnt <= 5 )
        {
            goto ENUM_START;
        }
        return ERR_USB_DISCON;
    }

    /* Select USB speed */
    USBFSH_SetSelfSpeed( RootHubDev[ usb_port].bSpeed );

    /* Get USB device device descriptor */
    DUG_PRINTF("Get DevDesc: ");
    s = USBFSH_GetDeviceDescr( &RootHubDev[ usb_port ].bEp0MaxPks, DevDesc_Buf );
    if( s == ERR_SUCCESS )
    {
        /* Print USB device device descriptor */
#if DEF_DEBUG_PRINTF
        for( i = 0; i < 18; i++ )
        {
            DUG_PRINTF( "%02x ", DevDesc_Buf[ i ] );
        }
        DUG_PRINTF("\n");
#endif
    }
    else
    {
        /* Determine whether the maximum number of retries has been reached, and retry if not reached */
        DUG_PRINTF( "Err(%02x)\n", s );
        if( enum_cnt <= 5 )
        {
            goto ENUM_START;
        }
        return DEF_DEV_DESCR_GETFAIL;
    }

    /* Set the USB device address */
    DUG_PRINTF("Set DevAddr: ");
    RootHubDev[ usb_port ].bAddress = (uint8_t)( DEF_USB_PORT_FS + USB_DEVICE_ADDR );
    s = USBFSH_SetUsbAddress( RootHubDev[ usb_port ].bEp0MaxPks, RootHubDev[ usb_port ].bAddress );
    if( s == ERR_SUCCESS )
    {
        DUG_PRINTF( "OK\n" );
    }
    else
    {
        /* Determine whether the maximum number of retries has been reached, and retry if not reached */
        DUG_PRINTF( "Err(%02x)\n", s );
        if( enum_cnt <= 5 )
        {
            goto ENUM_START;
        }
        return DEF_DEV_ADDR_SETFAIL;
    }
    Delay_Ms( 5 );

    /* Get the USB device configuration descriptor */
    DUG_PRINTF("Get CfgDesc: ");
    s = USBFSH_GetConfigDescr( RootHubDev[ usb_port ].bEp0MaxPks, Com_Buffer, DEF_COM_BUF_LEN, &len );
    if( s == ERR_SUCCESS )
    {
        cfg_val = ( (PUSB_CFG_DESCR)Com_Buffer )->bConfigurationValue;

        /* Print USB device configuration descriptor  */
#if DEF_DEBUG_PRINTF
        for( i = 0; i < len; i++ )
        {
            DUG_PRINTF( "%02x ", Com_Buffer[ i ] );
        }
        DUG_PRINTF("\n");
#endif
    }
    else
    {
        /* Determine whether the maximum number of retries has been reached, and retry if not reached */
        DUG_PRINTF( "Err(%02x)\n", s );
        if( enum_cnt <= 5 )
        {
            goto ENUM_START;
        }
        return DEF_CFG_DESCR_GETFAIL;
    }

    /* Set USB device configuration value */
    DUG_PRINTF("Set Cfg: ");
    s = USBFSH_SetUsbConfig( RootHubDev[ usb_port ].bEp0MaxPks, cfg_val );
    if( s == ERR_SUCCESS )
    {
        DUG_PRINTF( "OK\n" );
    }
    else
    {
        /* Determine whether the maximum number of retries has been reached, and retry if not reached */
        DUG_PRINTF( "Err(%02x)\n", s );
        if( enum_cnt <= 5 )
        {
            goto ENUM_START;
        }
        return ERR_USB_UNSUPPORT;
    }

    return ERR_SUCCESS;
}

#if 0
/*********************************************************************
 * @fn      UDisk_USBH_PreDeal
 *
 * @brief   usb host preemption operations,
  *         including detecting device insertion and enumerating device information
 *
 * @return  none
 */
uint8_t UDisk_USBH_PreDeal( void )
{
    uint8_t usb_port;
    uint8_t index;
    uint8_t ret;
    usb_port = DEF_USB_PORT_FS;
    ret = USBFSH_CheckRootHubPortStatus( RootHubDev[ usb_port ].bStatus );
    if( ret == ROOT_DEV_CONNECTED )
    {
        DUG_PRINTF("USB Dev In.\n");
        USBFSH_CheckRootHubPortStatus( RootHubDev[ usb_port ].bStatus );
        RootHubDev[ usb_port ].bStatus = ROOT_DEV_CONNECTED; // Set connection status_
        RootHubDev[ usb_port ].DeviceIndex = usb_port * DEF_ONE_USB_SUP_DEV_TOTAL;

        /* Enumerate root device */
        ret = Udisk_USBH_EnumRootDevice( usb_port );
        if( ret == ERR_SUCCESS )
        {
            DUG_PRINTF( "USB Port %02x Device Enumeration Succeed\r\n", usb_port );
            RootHubDev[ usb_port ].bStatus = ROOT_DEV_SUCCESS;
            return ERR_SUCCESS;
        }
        else
        {
            DUG_PRINTF( "USB Port %02x Device Enumeration ERR %02x.\r\n", usb_port, ret );
            RootHubDev[ usb_port ].bStatus = ROOT_DEV_FAILED;
            return ERR_USB_UNAVAILABLE;
        }
    }
    else if( ret == ROOT_DEV_DISCONNECT )
    {
        DUG_PRINTF("USB Port %02x Device Out.\r\n", usb_port );
        /* Clear parameters */
        index = RootHubDev[ usb_port ].DeviceIndex;
        memset( &RootHubDev[ usb_port ].bStatus, 0, sizeof( struct _ROOT_HUB_DEVICE ) );
        memset( &HostCtl[ index ].InterfaceNum, 0, sizeof( struct __HOST_CTL ) );
        UDisk_Opeation_Flag = 1;
        CHRV3DiskStatus = DISK_UNKNOWN;
        return ERR_USB_DISCON;
    }
    return ERR_USB_UNKNOWN;
}

/*********************************************************************
 * @fn      UDisk_USBH_DiskReady
 *
 * @brief   Check if UDisk is Ready and update status in 'CHRV3DiskStatus'
 *
 * @return  none
 */
uint8_t UDisk_USBH_DiskReady( void )
{
    uint8_t  ret, i;

    /* Detect USB Device & Enumeration processing */
    ret = UDisk_USBH_PreDeal( );
    if( ret == ERR_SUCCESS )
    {
        /* Wait for uDisk Ready */
        CHRV3DiskStatus = DISK_USB_ADDR;
        for ( i = 0; i != 10; i ++ )
        {
              DUG_PRINTF( "Wait Disk Ready...\r\n" );
              ret = CHRV3DiskReady( );
              if ( ret == ERR_SUCCESS )
              {
                  /* Disk Ready */
                  DUG_PRINTF( "Disk Ready Code:%02x.\r\n", ret );
                  DUG_PRINTF( "CHRV3DiskStatus:%02x\n", CHRV3DiskStatus);
                  UDisk_Opeation_Flag = 1;
                  return DISK_READY;
              }
              else
              {
                  DUG_PRINTF("Not Ready Code :%02x.\r\n", ret);
                  DUG_PRINTF("CHRV3DiskStatus:%02x.\n", CHRV3DiskStatus);
              }
              Delay_Ms( 50 );
          }
    }
    return CHRV3DiskStatus;
}

#endif

