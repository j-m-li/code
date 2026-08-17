/*

		 MMXXV PUBLIC DOMAIN by JML

    The authors and contributors disclaim copyright, patents
	   and all related rights to this software.

 Anyone is free to copy, modify, publish, use, compile, sell, or
 distribute this software, either in source code form or as a
 compiled binary, for any purpose, commercial or non-commercial,
 and by any means.

 The authors waive all rights to patents, both currently owned
 by the authors or acquired in the future, that are necessarily
 infringed by this software, relating to make, have made, repair,
 use, sell, import, transfer, distribute or configure hardware
 or software in finished or intermediate form, whether by run,
 manufacture, assembly, testing, compiling, processing, loading
 or applying this software or otherwise.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT OF ANY PATENT, COPYRIGHT, TRADE SECRET OR OTHER
 PROPRIETARY RIGHT.  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR
 ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

/*
 https://github.com/openwch/arduino_core_ch32/tree/main/variants/CH32X035/CH32X035G8U
*/

#define INPUT 1
#define OUTPUT 2
#define LOW 0
#define HIGH 1

/* CH32X035G8U6 QFN28 */
/* CH32X035C8T6 LQFP48 */
const int digitalPin[] = {
    0x00,	     // D0 PA0 ADC
    0x01,	     // D1 PA1
    0x02,	     // D2 PA2 TX2
    0x03,	     // D3 PA3 RX2
    0x04,	     // D4 PA4 CS
    0x05,	     // D5 PA5 SCK
    0x06,	     // D6 PA6 MISO
    0x07,	     // D7 PA7 MOSI
    (1 << 5) + 0x00, // D8 PB0 TX4
    (1 << 5) + 0x01, // D9 PB1 RX4
    (1 << 5) + 0x03, // D10 PB3 TX3
    (1 << 5) + 0x04, // D11 PB4 RX3
    (1 << 5) + 0x06, // D12 PB6
    (1 << 5) + 0x07, // D13 PB7
    (1 << 5) + 0x08, // D14 PB8
    (1 << 5) + 0x09, // D15 PB9 TIM1_CH1_1
    (1 << 5) + 0x0A, // D16 PB10 TX1
    (1 << 5) + 0x0B, // D17 PB11 RX1
    (1 << 5) + 0x0C, // D18 PB12
    (2 << 5) + 0x00, // D19 PC0
    (2 << 5) + 0x03, // D20 PC3 (NC in LQFP48)
    (2 << 5) + 0x0E, // D21 PC14
    (2 << 5) + 0x0F, // D22 PC15
    (2 << 5) + 0x10, // D23 PC16
    (2 << 5) + 0x11, // D24 PC17 (shorted with PC10)
    (2 << 5) + 0x12, // D25 PC18
    (2 << 5) + 0x13, // D26 PC19
		     /* LQFP48 only */
    0xF,	     // PA15
    0x10,	     // PA16
    0x11,	     // PA17
    0x12,	     // PA18
    0x13,	     // PA19
    0x14,	     // PA20
    0x15,	     // PA21
    0x16,	     // PA22
    0x17,	     // PA23
    (2 << 5) + 0x6,  // PC6
    (2 << 5) + 0x7,  // PC7
    (1 << 5) + 0x2,  // PB2
    (1 << 5) + 0x5,  // PB5 (connected to PB1 in QFN28)
    (1 << 5) + 0xD,  // PB13
    0x8,	     // PA8
    0x9,	     // PA9
    0xA,	     // PA10 SCL
    0xB,	     // PA11 SDA
    0xC,	     // PA12
    0xD,	     // PA13
    0xE		     // PA14
};

// Analog (Ax) pin number array
const unsigned int analogInputPin[] = {
    0,	// A0  PA0
    1,	// A1  PA1
    2,	// A2  PA2
    3,	// A3  PA3
    4,	// A4  PA4
    5,	// A5  PA5
    6,	// A6  PA6
    7,	// A7  PA7
    8,	// A8  PB0
    9,	// A9  PB1
    19, // A10 PC0
    20, // A13  PC3
};

#ifndef PIN_SPI_SS
#define PIN_SPI_SS 4 /* PA4 */
#endif
#ifndef PIN_SPI_MOSI
#define PIN_SPI_MOSI 7 /* PA7 */
#endif
#ifndef PIN_SPI_MISO
#define PIN_SPI_MISO 6 /* PA6 */
#endif
#ifndef PIN_SPI_SCK
#define PIN_SPI_SCK 5 /* PA5 */
#endif

#ifndef PIN_SERIAL_RX
#define PIN_SERIAL_RX 17 /* PB11 */
#endif
#ifndef PIN_SERIAL_TX
#define PIN_SERIAL_TX 16 /* PB10 */
#endif

void pinMode(int pin, int mode) {
	static int init = 0;
	GPIO_InitTypeDef GPIO_InitStructure = {0};
	if (mode == INPUT) {
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	} else if (mode == OUTPUT) {
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	}
	GPIO_InitStructure.GPIO_Pin = 1 << (digitalPin[pin] & 0x1F);
	switch ((digitalPin[pin] >> 5) & 0x3) {
	case 0:
		if ((init & 1) == 0) {
			RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
			init |= 1;
		}
		GPIO_Init(GPIOA, &GPIO_InitStructure);
		break;
	case 1:
		if ((init & 2) == 0) {
			RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
			init |= 2;
		}
		GPIO_Init(GPIOB, &GPIO_InitStructure);
		break;
	case 2:
		if ((init & 4) == 0) {
			RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
			init |= 4;
		}
		GPIO_Init(GPIOC, &GPIO_InitStructure);
		break;
	}
}

void digitalWrite(int pin, int state) {
	int gpio_pin;
	int gpio_state;

	gpio_pin = 1 << (digitalPin[pin] & 0x1F);
	if (state == LOW) {
		gpio_state = Bit_RESET;
	} else if (state == HIGH) {
		gpio_state = Bit_SET;
	} else {
		gpio_state = 0;
	}
	switch ((digitalPin[pin] >> 5) & 0x3) {
	case 0:
		GPIO_WriteBit(GPIOA, gpio_pin, gpio_state);
		break;
	case 1:
		GPIO_WriteBit(GPIOB, gpio_pin, gpio_state);
		break;
	case 2:
		GPIO_WriteBit(GPIOC, gpio_pin, gpio_state);
		break;
	}
}

int digitalRead(int pin) {
	int v = 0;
	int gpio_pin;

	gpio_pin = 1 << (digitalPin[pin] & 0x1F);
	switch ((digitalPin[pin] >> 5) & 0x3) {
	case 0:
		v = GPIO_ReadInputData(GPIOA);
		break;
	case 1:
		v = GPIO_ReadInputData(GPIOB);
		break;
	case 2:
		v = GPIO_ReadInputData(GPIOC);
		break;
	}
	return ((v & gpio_pin) != 0);
}

int pgm_read_byte(const void *ptr) { return *((const unsigned char *)ptr); }

void delay(unsigned int time) { Delay_Ms(time); }
