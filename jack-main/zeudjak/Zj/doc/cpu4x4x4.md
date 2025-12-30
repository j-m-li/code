COD5 CPU 4x4x4
==============

The Public Domain nibble processor
----------------------------------

### The cube registers

```
          --------------------+
         / 63 / 62 / 61 / 60 /| 
        /-------------------/ |
       / 47 / 46 / 45 / 44 /| |
      /-------------------/ | |
     / 31 / 30 / 29 / 28 /| |/|
    /-------------------/ | / |
   / 15 / 14 / 13 / 12 /| |/|/|
  +-------------------+ | / / |
  |    |    |    |    | |/|/|/|
  | 15 | 14 | 13 | 12 | / / / /
  ---------------------/|/|/|/
  | 11 | 10 | 09 | 08 | / / /
  ---------------------/|/|/
  | 07 | 06 | 05 | 04 | / /      +----+
  ---------------------/|/      /----/|
  | 03 | 02 | 01 | 00 | /       | CF |/
  +-------------------+         +----+

                                                         |------- RB0|  1 Byte register
   |------ ... .. RW2|------------------- RW1|------------------- RW0|  4 Word registers
   | RN15| ... |  RN8|  RN7|  RN6|  RN5|  RN4|  RN3|  RN2|  RN1|  RN0|  16 Nibble registers
 CF|                                                                     1 Flag
 64|   60| ... |   32|   28|   24|   20|   16|   12|   08|   04|   00|  65 bits
```

### Memory map

```
64 bit memory address (byte addressed, little endian)
     0xFFFF FFFF FFFF FFFF
                          | 16 Exabyte of memory that can be accessed by banked RAM
     0x0000 0001 0000 0000
                 FFFF FFFF
		          | 32kByte banked RAM window
     0x0000 0000 8000 0000
                 7FFF FFFF
                          | 32kByte unbanked RAM
     0x0000 0000 0000 0080
                      007F
		          | special functions                     
     0x0000 0000 0000 0030
                      002F
                          | 64 bit data memory bank
     0x0000 0000 0000 0028
                      0027
                          | 64 bit Program Counter (JR/JAL validate the 48 bit high 
			  | order of the address)
     0x0000 0000 0000 0020
                      001F
                          | 32 byte boot program		 
     0x0000 0000 0000 0000
```


### Instruction set

```
7654 32 01 			
 OP Code	Mnemonic	; Description
===========================================================================================
0000 00 00	SBC CF		; Skip next instruction if Bit Carry flag is Clear
     00 01	SBS CF		; Skip next instruction if Bit Carry flag is Set
     00 10	CLR CF		; Clear Carry Flag
     00 11	SET CF		; Set Carry Flag

     01 00	SEZ RN0		; Skip next instruction if RN0 Equal 0
     01 01	SNZ RN0		; Skip next instruction if RN0 is Not equal to 0
     01 10	NOP		; No OPeration

     01 11	EXT		; EXTension instruction prefix
				; Next byte's 3 LSB bits are the amount of following bytes (0 to 7)
				: XXXX XNNN	EXTRA_OPCODE
				; When the minimal CPU implementation reachs an EXT instruction
				; it skips the EXTRA_OPCODE and the following bytes.
				; Example of a 4 bytes extension instruction :
				; 00000111 XXXXX010 YYYYYYYY ZZZZZZZZ
				; Example of a 2 byte extension instruction :
				; 00000111 ZZZZZ000

     10 NN	SEQ RN0,RNx	; Skip next instruction if RN0 EQual RN[1-4]
     11 NN	SNE RN0,RNx	; Skip next instruction if RN0 Not Equal RN[1-4]

0001 00 NN	SLE RN0,RNx	; Skip next instruction if RN0 is Less than or Equal to RN[1-4]
     01 NN	SGT RN0,RNx	; Skip next instruction if RN0 is Greater Than RN[1-4]
     10 NN	SGE RN0,RNx	; Skip next instruction if RN0 is Greater or Equal to RN[1-4]
     11 NN	SLT RN0,RNx	; Skip next instruction if RN0 is Less Than RN[1-4]

0010 00 NN	SHR RNx		; bit SHift Right RN[0-3]
     01 NN	SHL RNx		; bit SHift Left RN[0-3]
     10 NN	INV RNx		; INVert RN[0-3] bits (bitwise NOT)
     11 NN	INC RNx		; INCrement RN[0-3] value by 1 (don't update carry flag)

0011 00 WW	LD RB0,[RWx]	; LoaD into RB0 the byte from memory address pointed by RW[0-3]
     01 WW	ST RB0,[RWx]	; STore RB0 byte to memory pointed by RW[0-3]

     10 WW	JR RWx		; Jump to program address contained in Register RW[0-3]

     11 WW	JAL RWx		; Jump And Link to program address contained in register RW[0-3]
				; and assign the lower 16 bits of the program 
				; counter value +1 to RW3

0100 XX YY	ADD RN0,RNx,RNy	; assign arithmetic ADDition of RN[0-3] + RN[0-3] to RN0
				; set carry flag on overflow, otherwise clear it

0101 XX YY	SUB RN0,RNx,RNy ; assign arithmetic SUBtraction of RNx[0-3] - RNy[0-3] to RN0 
				; set carry flag if RNy value is greater 
				; than RNx value (negative result)
				; otherwise clear it

0110 XX YY	AND RN0,RNx,RNy ; assign bitwise AND result of RNx[0-3] & RNy[0-3] to RN0

0111 XX YY	OR RN0,RNx,RNy 	; assign bitwise OR result of RNx[0-3] | RNy[0-3] to RN0

1000 XX YY	XOR RN0,RNx,RNy ; assign bitwise XOR result of RNx[0-3] ^ RNy[0-3] to RN0

1001 IIII	LDI RN0,0-15	; LoaD 4 bit Immediate value to RN0

1010 0000	SWP RN0,RN1	; SWaP RN0 and RN1 content

1010 NNNN	MOV RN0,RNx 	; MOVe RNx[1-15] value to RN0

1011 0000	SYS RN0		; SYStem call

1011 NNNN	MOV RNx,RN0	; MOVe RN0 value to RNx[1-15]

11rr rrrr	JMP rel		; JuMP to relative program address

```

### Data interface

```
300 bit/second using mono in audio and left audio out for data. 
The right audio signal is used to trigger the transmit signal of the 27MHz Citizen Band transceiver.
```
