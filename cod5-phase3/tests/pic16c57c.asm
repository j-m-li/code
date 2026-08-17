
/*
 * 24 bytes of data RAM
 * 512 12-bit words for program
 * 40MHz, 100ns instruction cycle time
 */

#define W 0
#define F 0x20 
#define BIT0 0x0 
#define BIT1 0x20 
#define BIT2 0x40 
#define BIT3 0x60 
#define BIT4 0x80 
#define BIT5 0xA0
#define BIT6 0xC0 
#define BIT7 0xE0

/* OPTION */
#define PS0 BIT0
#define PS1 BIT1
#define PS2 BIT2
#define PSA BIT3
#define T0SE BIT4
#define T0CS BIT5

#define INDF 0x00

#define TMR0 0x01

#define PCL 0x02

#define STATUS 0x03
#define PA2 BIT7
#define PA1 BIT6
#define PA0 BIT5
#define TO_ BIT4
#define PD_ BIT3
#define Z BIT2
#define DC BIT1
#define C BIT0
#define PAGE0 0
#define PAGE1 PA0
#define PAGE2 PA1
#define PAGE3 (PA1 | PA0)

#define FSR 0x04
#define BANK0 0
#define BANK1 0x20
#define BANK2 0x40
#define BANK3 0x60

#define PORTA 0x05
#define RA0 BIT0
#define RA1 BIT1
#define RA2 BIT2
#define RA3 BIT3

#define PORTB 0x06
#define RB0 BIT0
#define RB1 BIT1
#define RB2 BIT2
#define RB3 BIT3
#define RB4 BIT4
#define RB5 BIT5
#define RB6 BIT6
#define RB7 BIT7

#define PORTC 0x07
#define RC0 BIT0
#define RC1 BIT1
#define RC2 BIT2
#define RC3 BIT3
#define RC4 BIT4
#define RC5 BIT5
#define RC6 BIT6
#define RC7 BIT7

#define CONFIG 0xFFF
#define FOSC0 0x01
#define FOSC1 0x02
#define WDT_ON 0xFFF
#define WDT_OFF 0xFFB
#define CP_ON 0xFF7
#define CP_OFF 0xFFF
#define FOSC_LP 0xFFC
#define FOSC_XT (0xFFC | FOSC0) 
#define FOSC_HS (0xFFC | FOSC1) 
#define FOSC_RC (0xFFC | FOSC0 | FOSC1) 

/*
.data
#define string_len (a_string_end - a_string)
a_string:
.byte 'h','e','l','l','o',0x0A,0
a_string_end:
*/

.bss
// .org 0x08
a_variable: .skip 1 // reserve one byte
second_variable: .skip 4  // reserve four bytes

.text
.org CONFIG 
.word (WDT_ON & FOSC_RC & CP_OFF)

#define var_global_1 0x08 // 0x28 0x48 0x68 
#define var_global_8 0x0F // 0x2F 0x4F 0x6F
#define var_bank_0_9 0x10
#define var_bank_0_24 0x1F
#define var_bank_1_25 0x30
#define var_bank_1_40 0x3F
#define var_bank_2_41 0x50
#define var_bank_2_56 0x5F
#define var_bank_3_57 0x70
#define var_bank_3_72 0x7F

.org 0x7FF	// processor reset vector
_reset:
	goto _start

.global _start
.org 0x000
_start:
	clrf FSR	// ensure FSR register bits 5,6 are reset
                                  
#define k 0
#define f 0x10
#define d W
#define b BIT0

	BANKSEL f // RAM
	PAGESEL k // ROM

instr_set:
	addwf f,d	//;1 ; 0001 11df ffff C,DC,Z
	andwf f,d	//;1 ; 0001 01df ffff Z
	clrf f		//;1 ; 0000 011f ffff Z
	clrw		//;1 ; 0000 0100 0000 Z
	comf f,d	//;1 ; 0010 01df ffff Z
	decf f,d	//;1 ; 0000 11df ffff Z
	decfsz f,d	//;1+; 0010 11df ffff
	incf f,d	//;1 ; 0010 10df ffff Z
	incfsz f,d	//;1+; 0011 11df ffff
	iorwf f,d	//;1 ; 0001 00df ffff Z
	movf f,d	//;1 ; 0010 00df ffff Z
	movwf f		//;1 ; 0000 001f ffff
	nop		//;1 ; 0000 0000 0000
	rlf f,d		//;1 ; 0011 01df ffff C
	rrf f,d		//;1 ; 0011 00df ffff C
	subwf f,d	//;1 ; 0000 10df ffff C,DC,Z
	swapf f,d	//;1 ; 0011 10df ffff
	xorwf f,d	//;1 ; 0001 10df ffff Z
	bcf f,b		//;1 ; 0100 bbbf ffff
	bsf f,b		//;1 ; 0101 bbbf ffff
	btfsc f,b	//;1+; 0110 bbbf ffff
	btfss f,b	//;1+; 0111 bbbf ffff
	andlw k		//;1 ; 1110 kkkk kkkk Z
	call k		//;2 ; 1001 kkkk kkkk
	clrwdt k	//;1 ; 0000 0000 0100 TO,PD
	goto k		//;2 ; 101k kkkk kkkk
	iorlw k 	//;1 ; 1101 kkkk kkkk Z
	movlw k		//;1 ; 1100 kkkk kkkk
	option k 	//;1 ; 0000 0000 0010
	retlw k		//;2 ; 1000 kkkk kkkk
	sleep		//;1 ; 0000 0000 0011 TO,PD
	tris f		//;1 ; 0000 0000 0fff
	xorlw k		//;1 ; 1111 kkkk kkkk Z
end:

