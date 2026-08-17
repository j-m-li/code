//
// https://www.good-display.com/product/396.html
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
void driver_delay_us(unsigned int xus);
void driver_delay_xms(unsigned long xms);
void SPI_Delay(unsigned char xrate);
void SPI_Write(unsigned char value);
void EPD_W21_WriteDATA(unsigned char command);
void EPD_W21_WriteCMD(unsigned char command);
// EPD
void EPD_W21_Init(void);
void EPD_init(void);
void PIC_display1(void);
void EPD_sleep(void);
void EPD_refresh(void);
void lcd_chkstatus(void);
void PIC_display_Clean(void);
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
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_High;
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Hard;
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2;
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_InitStructure.SPI_CRCPolynomial = 7;
	SPI_Init(SPI1, &SPI_InitStructure);

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

///////////////////EXTERNAL
/// FUNCTION////////////////////////////////////////////////////////////////////////
/////////////////////delay//////////////////////////////////////
void driver_delay_us(unsigned int xus) // 1us
{
	Delay_Us(xus);
}
void driver_delay_xms(unsigned long xms) // 1ms
{
	Delay_Ms(xms);
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

void EPD_W21_WriteCMD(unsigned char command) {
	SPI_Delay(1);
	EPD_W21_CS_0;
	EPD_W21_DC_0; // command write
	SPI_Write(command);
	EPD_W21_CS_1;
}
void EPD_W21_WriteDATA(unsigned char command) {
	SPI_Delay(1);
	EPD_W21_CS_0;
	EPD_W21_DC_1; // command write
	SPI_Write(command);
	EPD_W21_CS_1;
}

/////////////////EPD settings Functions/////////////////////
void EPD_W21_Init(void) {
	EPD_W21_RST_0; // Module reset
	delay(100);    // At least 10ms
	EPD_W21_RST_1;
	delay(100);
}
void EPD_init(void) {
	unsigned char HRES_byte1 = 0x03; // 800
	unsigned char HRES_byte2 = 0x20;
	unsigned char VRES_byte1 = 0x01; // 480
	unsigned char VRES_byte2 = 0xE0;

	EPD_W21_Init();		// Electronic paper IC reset
	EPD_W21_WriteCMD(0x01); // POWER SETTING
	EPD_W21_WriteDATA(0x07);
	EPD_W21_WriteDATA(0x07); // VGH=20V,VGL=-20V
	EPD_W21_WriteDATA(0x3f); // VDH=15V
	EPD_W21_WriteDATA(0x3f); // VDL=-15V

	EPD_W21_WriteCMD(0x04); // Power on
	lcd_chkstatus(); // waiting for the electronic paper IC to release the
			 // idle signal

	EPD_W21_WriteCMD(0X00);	 // PANNEL SETTING
	EPD_W21_WriteDATA(0x1F); // KW-3f   KWR-2F BWROTP 0f BWOTP 1f

	EPD_W21_WriteCMD(0x61);	       // tres
	EPD_W21_WriteDATA(HRES_byte1); // source 800
	EPD_W21_WriteDATA(HRES_byte2);
	EPD_W21_WriteDATA(VRES_byte1); // gate 480
	EPD_W21_WriteDATA(VRES_byte2);

	EPD_W21_WriteCMD(0X15);
	EPD_W21_WriteDATA(0x00);

	EPD_W21_WriteCMD(0X50); // VCOM AND DATA INTERVAL SETTING
	EPD_W21_WriteDATA(0x10);
	EPD_W21_WriteDATA(0x07);

	EPD_W21_WriteCMD(0X60); // TCON SETTING
	EPD_W21_WriteDATA(0x22);
}

// Partial update  initialization
void EPD_Init_Part(void) {
	EPD_W21_RST_0; // Module reset
	delay_xms(10); // At least 10ms delay
	EPD_W21_RST_1;
	delay_xms(10); // At least 10ms delay

	EPD_W21_WriteCMD(0X00);	 // PANNEL SETTING
	EPD_W21_WriteDATA(0x1F); // KW-3f   KWR-2F	BWROTP 0f	BWOTP 1f

	EPD_W21_WriteCMD(0x04); // POWER ON
	delay_xms(10);
	lcd_chkstatus(); // waiting for the electronic paper IC to release the
			 // idle signal
	EPD_W21_WriteCMD(0xE0);
	EPD_W21_WriteDATA(0x02);
	EPD_W21_WriteCMD(0xE5);
	EPD_W21_WriteDATA(0x6E);
}

void EPD_refresh(void) {
	EPD_W21_WriteCMD(0x12); // DISPLAY REFRESH
	driver_delay_xms(
	    100); //!!!The delay here is necessary, 200uS at least!!!
	lcd_chkstatus();
}
void EPD_sleep(void) {
	EPD_W21_WriteCMD(0X50); // VCOM AND DATA INTERVAL SETTING
	EPD_W21_WriteDATA(0xf7);

	EPD_W21_WriteCMD(0X02); // power off
	lcd_chkstatus();
	EPD_W21_WriteCMD(0X07); // deep sleep
	EPD_W21_WriteDATA(0xA5);
}

void PIC_display1(void) {
//	unsigned int i;
#if 0
	unsigned char clr[8] = {0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff};
	unsigned char zero[8] =  {0,0,0,0,0,0,0,0};
	EPD_W21_WriteCMD(0x10);        //Transfer old data
				       //
	EPD_W21_CS_0;                   
	EPD_W21_DC_1; 
	for(i=0;i<(48000 >> 3);i++) 
		send(clr, 8);	    
	EPD_W21_CS_1;                   
	EPD_W21_WriteCMD(0x13);        //Transfer new data
	EPD_W21_CS_0;                   
	EPD_W21_DC_1; 
	send(gImage_1, 20000);
	for(i=0;i< ((48000-20000) >> 3);i++)      
		send(zero, 8);	    
	EPD_W21_CS_1;
#endif
	EPD_W21_WriteCMD(0x10); // Transfer old data
				//	for(i=0;i<48000;i++)
				//		EPD_W21_WriteDATA(0xff);

	//	EPD_W21_WriteCMD(0x13);        //Transfer new data
	//	for(i=0;i<20000;i++)
	//		EPD_W21_WriteDATA(pgm_read_byte(&gImage_1[i]));
	//   for(i=0;i<48000-20000;i++)
	//  	EPD_W21_WriteDATA(0x00);
}

void PIC_display_Clean(void) {
	unsigned int i;
#if 0
    unsigned char zero[8] =  {0,0,0,0,0,0,0,0};
   EPD_W21_WriteCMD(0x10);        //Transfer old data
    EPD_W21_CS_0;                   
    EPD_W21_DC_1; 
    for(i=0;i<(48000>>3);i++)       
  {
	  send(zero,8);
  }
    EPD_W21_CS_1;                   
  
    EPD_W21_WriteCMD(0x13);        //Transfer new data    
    EPD_W21_CS_0;                   
    EPD_W21_DC_1; 
    for(i=0;i<(48000>>3);i++)       
  {
	  send(zero,8);
  }
    EPD_W21_CS_1;
#endif
	EPD_W21_WriteCMD(0x10); // Transfer old data
	for (i = 0; i < 48000; i++) {
		EPD_W21_WriteDATA(0x00);
	}

	EPD_W21_WriteCMD(0x13); // Transfer new data
	for (i = 0; i < 48000; i++) {
		EPD_W21_WriteDATA(0x00);
	}
}
void lcd_chkstatus(void) {
	unsigned char busy;
	do {
		EPD_W21_WriteCMD(0x71);
		busy = isEPD_W21_BUSY;
		check_data_in();
		busy = !(busy & 0x01);
	} while (busy);
	driver_delay_xms(200);
}
