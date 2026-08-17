//
//

// IO settings
int BUSY_Pin = 12; // PB6
int RES_Pin = 13;  // PB7
int DC_Pin = 14;   // PB8
int CS_Pin = 2;	   // (PA4 CS)
int SCK_Pin = 5;   // PA5 SCK
int SDI_Pin = 7;   // PA7 MOSI
// int SDO_Pin = 6; // PA6 MISO

#define delay_xms driver_delay_xms

#define EPD_W21_MOSI_0 digitalWrite(SDI_Pin, LOW)
#define EPD_W21_MOSI_1 digitalWrite(SDI_Pin, HIGH)

#define EPD_W21_CLK_0 digitalWrite(SCK_Pin, LOW)
#define EPD_W21_CLK_1 digitalWrite(SCK_Pin, HIGH)

#define EPD_W21_CS_0 digitalWrite(CS_Pin, LOW)
#define EPD_W21_CS_1 digitalWrite(CS_Pin, HIGH)

#define EPD_W21_DC_0 digitalWrite(DC_Pin, LOW)
#define EPD_W21_DC_1 digitalWrite(DC_Pin, HIGH)
#define EPD_W21_RST_0 digitalWrite(RES_Pin, LOW)
#define EPD_W21_RST_1 digitalWrite(RES_Pin, HIGH)
#define isEPD_W21_BUSY digitalRead(BUSY_Pin)

////////FUNCTION//////
void SPI_Delay(unsigned char xrate);
void SPI_Write(unsigned char value);
unsigned char HRES, VRES_byte1, VRES_byte2;

const unsigned char *TxData = {0};
int Txval = 0;
int TxSize = 0;

void SPI_1Lines_HalfDuplex_Init(void) {
	GPIO_InitTypeDef GPIO_InitStructure = {0};
	SPI_InitTypeDef SPI_InitStructure = {0};

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_SPI1,
			       ENABLE);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	SPI_SSOutputCmd(SPI1, ENABLE);

	SPI_InitStructure.SPI_Direction = SPI_Direction_1Line_Tx;
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_16b;
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_High;
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Hard;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2;
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_InitStructure.SPI_CRCPolynomial = 7;
	SPI_Init(SPI1, &SPI_InitStructure);
	SPI_I2S_DMACmd(SPI1, SPI_I2S_DMAReq_Tx, ENABLE);

	SPI_Cmd(SPI1, ENABLE);
}

#if 0
void setup() {
	pinMode(BUSY_Pin, INPUT); 
	pinMode(RES_Pin, OUTPUT);  
	pinMode(DC_Pin, OUTPUT);    
	pinMode(CS_Pin, OUTPUT);    
	pinMode(SCK_Pin, OUTPUT);    
	pinMode(SDI_Pin, OUTPUT);
#if 1
	SPI_1Lines_HalfDuplex_Init();
	printf("HOST Mode\r\n");
	Delay_Ms(2000);
//	SPI_I2S_ITConfig( SPI1, SPI_I2S_IT_TXE , ENABLE );
//	Delay_Ms(2000);
#endif
}
#endif

// Tips//
/*When the electronic paper is refreshed in full screen, the picture flicker is
  a normal phenomenon, and the main function is to clear the display afterimage
  in the previous picture. When the local refresh is performed, the screen does
  not flash.*/
/*When you need to transplant the driver, you only need to change the
 * corresponding IO. The BUSY pin is the input mode and the others are the
 * output mode. */

#if 0
void loop() {
	//PICTURE1
	EPD_init(); //EPD init
	printf("INIT\n");
	PIC_display1();
	EPD_refresh();//EPD_refresh   
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
//	delay(5000);

	//PICTURE Clean
	EPD_init(); //EPD init
	PIC_display_Clean();
	EPD_refresh();//EPD_refresh   
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
//	delay(10000);
}
#endif

static DMA_InitTypeDef DMA_InitStructure = {0};
void DMA_Tx_Init(DMA_Channel_TypeDef *DMA_CHx, u32 ppadr, u32 memadr, u16 bufsize)
{

    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE);

    DMA_DeInit(DMA_CHx);

    DMA_InitStructure.DMA_PeripheralBaseAddr = ppadr;
    DMA_InitStructure.DMA_MemoryBaseAddr = memadr;
    DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralDST;
    DMA_InitStructure.DMA_BufferSize = bufsize;
    DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
    DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
    DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
    DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
    DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
    DMA_InitStructure.DMA_Priority = DMA_Priority_VeryHigh;
    DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;
    DMA_Init(DMA_CHx, &DMA_InitStructure);
}

void DMA_Tx_Next(DMA_Channel_TypeDef *DMA_CHx, u32 ppadr, u32 memadr, u16 bufsize)
{
    DMA_InitStructure.DMA_PeripheralBaseAddr = ppadr;
    DMA_InitStructure.DMA_MemoryBaseAddr = memadr;
    DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralDST;
    DMA_InitStructure.DMA_BufferSize = bufsize;
    DMA_Init(DMA_CHx, &DMA_InitStructure);
}

//////////////////////SPI///////////////////////////////////
void SPI_Delay(unsigned char xrate) {
	unsigned char i;
	while (xrate) {
		for (i = 0; i < 2; i++)
			;
		xrate--;
	}
}

void SPI_Write(unsigned char value) {
#if 1
	SPI_I2S_SendData(SPI1, value);
#endif
#if 0	
	unsigned char i;  
	SPI_Delay(1);
	for(i=0; i<8; i++)   
	{
		EPD_W21_CLK_0;
		SPI_Delay(1);
		if(value & 0x80)
			EPD_W21_MOSI_1;
		else
			EPD_W21_MOSI_0;   
		value = (value << 1); 
		SPI_Delay(1);
		driver_delay_us(1);
		EPD_W21_CLK_1; 
		SPI_Delay(1);
	}
#endif
}
