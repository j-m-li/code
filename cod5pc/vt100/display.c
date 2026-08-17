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

#include "arduino.h"
#include "font.h"
void check_data_in();
#ifdef NOKIA
#include "Nokia5110.c"
#define TERM_COLS 10 
#define TERM_ROWS 3
#else
#include "GDEY075T7.c"
#define TERM_COLS 50
#define TERM_ROWS 15
#endif
#include <ctype.h>
#include <string.h>

unsigned char terminal[TERM_ROWS][TERM_COLS];
unsigned char terminal2[TERM_ROWS][TERM_COLS];
int damage_left = 0;
int damage_right = TERM_COLS - 1;
int damage_top = 0;
int damage_bottom = TERM_ROWS - 1;
void setup() {
	int i;
#ifdef NOKIA
	NOKIA_init_display();
#else
	pinMode(BUSY_Pin, INPUT);
	pinMode(RES_Pin, OUTPUT);
	pinMode(DC_Pin, OUTPUT);
	pinMode(CS_Pin, OUTPUT);
	pinMode(SCK_Pin, OUTPUT);
	pinMode(SDI_Pin, OUTPUT);
	SPI_1Lines_HalfDuplex_Init();
	delay(2000);
#endif

	for (i = 0; i < TERM_COLS * TERM_ROWS; i++) {
		terminal[i / TERM_COLS][i % TERM_COLS] =
		    0x20; //(i % 0x5E) + 0x20;
		terminal2[i / TERM_COLS][i % TERM_COLS] =
		    0x20; //(i % 0x5E) + 0x20;
	}
}

extern volatile unsigned int RxCnt1;
extern unsigned char RxBuffer1[DEBUG_RX_BUFFER];
unsigned char data[DEBUG_RX_BUFFER];
int cur_col = 0;
int cur_row = 0;

void scroll(int dy) {
	int x, y;
	unsigned char *d;
	unsigned char *s;
	if (dy < 0) {
		for (y = TERM_ROWS - 1; y + dy <= 0; y--) {
			d = terminal[y];
			s = terminal[y + dy];
			for (x = 0; x < TERM_COLS; x++) {
				d[x] = s[x];
			}
		}
		for (; y >= 0; y--) {
			d = terminal[y];
			for (x = 0; x < TERM_COLS; x++) {
				d[x] = 0x20;
			}
		}
	} else if (dy == 0) {
		return;
	} else {
		for (y = 0; (y + dy) < TERM_ROWS; y++) {
			d = terminal[y];
			s = terminal[y + dy];
			for (x = 0; x < TERM_COLS; x++) {
				d[x] = s[x];
			}
		}
		for (; y < TERM_ROWS; y++) {
			d = terminal[y];
			for (x = 0; x < TERM_COLS; x++) {
				d[x] = 0x20;
			}
		}
	}
	damage_left = 0;
	damage_right = TERM_COLS - 1;
	damage_top = 0;
	damage_bottom = TERM_ROWS - 1;
}
/* Escape sequence state */
enum { STATE_NORMAL, STATE_ESC, STATE_CSI, STATE_OSC };
static int state = STATE_NORMAL;

/* CSI parameter buffer */
#define CSI_BUF_SIZE 16
static int csi_params[CSI_BUF_SIZE];
int csi_nparams;

/* Helper: clear terminal */
static void clear_terminal(void) {
	int y, x;
	for (y = 0; y < TERM_ROWS; ++y) {
		for (x = 0; x < TERM_COLS; ++x) {
			terminal[y][x] = ' ';
		}
	}

	damage_left = 0;
	damage_right = TERM_COLS - 1;
	damage_top = 0;
	damage_bottom = TERM_ROWS - 1;
}

/* putat(x, y, c): Write character 'c' at (x, y) */
void putat(int x, int y, char c) {
	if (x < 0 || x >= TERM_COLS || y < 0 || y >= TERM_ROWS)
		return;
	terminal[y][x] = c;
}

/* Helper: move cursor */
static void move_cursor(int x, int y) {
	if (x < 0)
		x = 0;
	if (x >= TERM_COLS)
		x = TERM_COLS - 1;
	if (y < 0)
		y = 0;
	if (y >= TERM_ROWS)
		y = TERM_ROWS - 1;
	cur_col = x;
	cur_row = y;
}

/* Helper: scroll up */
static void scroll_up(void) { scroll(1); }

/* Helper: parse CSI parameters */
static void reset_csi_params(void) {
	int i;
	for (i = 0; i < CSI_BUF_SIZE; i++) {
		csi_params[i] = 0;
	}
	csi_nparams = 0;
}
static void add_csi_param(int v) {
	if (csi_nparams < CSI_BUF_SIZE)
		csi_params[csi_nparams++] = v;
}

static void check() {
	if (cur_row < damage_top) {
		damage_top = cur_row;
	}
	if (cur_row > damage_bottom) {
		damage_bottom = cur_row;
	}
	if (cur_col < damage_left) {
		if (cur_col < 0) {
			damage_left = 0;
		} else {
			damage_left = cur_col;
		}
	}
	if (cur_col > damage_right) {
		damage_right = cur_col;
	}
}

void sgr() {
	int i;
	for (i = 0; i < csi_nparams || i == 0; i++) {
		switch (csi_params[i]) {
		case 0: // reset
			break;
		}
	}
}

/* Main: process escape sequences and characters */
void add_char(unsigned char ch) {
	static int tmp_param = 0;
	static int save_x = 0;
	static int save_y = 0;

	check();
	switch (state) {
	case STATE_NORMAL:
		if (ch == 0x1B) {
			state = STATE_ESC;
		} else if (ch == '\r') {
			cur_col = 0;
		} else if (ch == '\n') {
			cur_row++;
			if (cur_row >= TERM_ROWS) {
				scroll_up();
				cur_row = TERM_ROWS - 1;
			}
			cur_col = 0;
		} else if (ch == '\b') {
			if (cur_col > 0)
				cur_col--;
		} else if (ch == '\x7F') {
			if (cur_col > 0) {
				int x;
				cur_col--;
				for (x = cur_col; x < (TERM_COLS - 1); ++x) {
					terminal[cur_row][x] =
					    terminal[cur_row][x + 1];
				}
				terminal[cur_row][TERM_COLS - 1] = ' ';
				damage_right = TERM_COLS - 1;
			}
		} else if (ch == '\t') {
			int x = (cur_col + 8) & ~7;
			while (cur_col < TERM_COLS && cur_col < x) {
				putat(cur_col, cur_row, ' ');
				cur_col++;
			}
			if (cur_col >= TERM_COLS)
				cur_col = TERM_COLS - 1;
		} else if (isprint((unsigned char)ch)) {
			putat(cur_col, cur_row, ch);
			cur_col++;
			if (cur_col >= TERM_COLS) {
				cur_col = 0;
				cur_row++;
				if (cur_row >= TERM_ROWS) {
					scroll_up();
					cur_row = TERM_ROWS - 1;
				}
			}
		}
		break;
	case STATE_ESC:
		if (ch == '[') {
			state = STATE_CSI;
			reset_csi_params();
		} else if (ch == 0x1B) {
			/* ESC */
			state = STATE_NORMAL;
		} else if (ch == ']') {
			state = STATE_OSC;
		} else if (ch == 'c') {
			/* RIS Reset */
			clear_terminal();
			move_cursor(0, 0);
			state = STATE_NORMAL;
		} else if (ch == 'D') {
			/* IND: Move down */
			cur_row++;
			if (cur_row >= TERM_ROWS) {
				scroll_up();
				cur_row = TERM_ROWS - 1;
			}
			state = STATE_NORMAL;
		} else if (ch == 'M') {
			/* RI: Reverse index */
			if (cur_row == 0) {
				scroll(-1);
			} else {
				cur_row--;
			}
			state = STATE_NORMAL;
		} else if (ch == 'E') {
			/* NEL: Next line */
			cur_col = 0;
			cur_row++;
			if (cur_row >= TERM_ROWS) {
				scroll_up();
				cur_row = TERM_ROWS - 1;
			}
			state = STATE_NORMAL;
		} else {
			/* Ignore other ESC codes for brevity */
			state = STATE_NORMAL;
		}
		break;
	case STATE_CSI:
		if (isdigit((unsigned char)ch)) {
			tmp_param = tmp_param * 10 + (ch - '0');
		} else if (ch == ';') {
			add_csi_param(tmp_param ? tmp_param : 0);
			tmp_param = 0;
		} else if (ch >= 0x40 && ch <= 0x7E) {
			add_csi_param(tmp_param ? tmp_param : 0);
			/* CSI final byte: process sequence */
			switch (ch) {
			case 'A': /* CUU: Cursor Up */
				cur_row -= csi_params[0] ? csi_params[0] : 1;
				if (cur_row < 0)
					cur_row = 0;
				break;
			case 'B': /* CUD: Cursor Down */
				cur_row += csi_params[0] ? csi_params[0] : 1;
				if (cur_row >= TERM_ROWS)
					cur_row = TERM_ROWS - 1;
				break;
			case 'C': /* CUF: Cursor Forward */
				cur_col += csi_params[0] ? csi_params[0] : 1;
				if (cur_col >= TERM_COLS)
					cur_col = TERM_COLS - 1;
				break;
			case 'D': /* CUB: Cursor Backward */
				cur_col -= csi_params[0] ? csi_params[0] : 1;
				if (cur_col < 0)
					cur_col = 0;
				break;
			case 'H': /* CUP: Cursor Position */
			case 'f': /* HVP: Horizontal/Vertical Position */
				move_cursor(
				    (csi_nparams > 1 ? csi_params[1] : 1) - 1,
				    (csi_nparams > 0 ? csi_params[0] : 1) - 1);
				break;
			case 'J': /* ED: Erase in Display */
				if (csi_params[0] == 2 || csi_params[0] == 0) {
					clear_terminal();
				}
				break;
			case 'K': /* EL: Erase in Line */
				if (csi_params[0] == 0) {
					for (int x = cur_col; x < TERM_COLS;
					     ++x)
						terminal[cur_row][x] = ' ';
				} else if (csi_params[0] == 1) {
					for (int x = 0; x <= cur_col; ++x)
						terminal[cur_row][x] = ' ';
				} else if (csi_params[0] == 2) {
					for (int x = 0; x < TERM_COLS; ++x)
						terminal[cur_row][x] = ' ';
				}
				break;
			case 'm': /* SGR: Graphics Rendition */
				sgr();
				break;
			case 'n':
				switch (csi_params[0]) {
				case 6:
					printf("\x1b[%d;%dR", cur_row, cur_col);
					break;
				}
				break;
			case 's': /* Save cursor */
				save_x = cur_col;
				save_y = cur_row;
				break;
			case 'u': /* Restore cursor */
				cur_col = save_x;
				cur_row = save_y;
				break;
			case '~':
				switch (csi_params[0]) {
				case 1: /* home */
				case 2: /* insert */
					break;
				case 3:
					/* foward delete*/
					break;
				case 4: /* end */
				case 5: /* page up */
				case 6: /* page down  */
					if (csi_params[1] == 5) {
						/* ctrl pressed */
					}
				}
				break;
			/* Add more VT100 sequences as needed */
			default:
				break;
			}
			tmp_param = 0;
			state = STATE_NORMAL;
		}
		break;
	case STATE_OSC:
		/* OSC: ignored for VT100 */
		if (ch == '\a' || ch == 0x1B) {
			state = STATE_NORMAL;
		}
		break;
	}
	check();
}

void check_data_in() {
	unsigned int i;
	unsigned int s;
	if (RxCnt1 > 0) {
		__disable_irq();
		s = RxCnt1;
		for (i = 0; i < s; i++) {
			data[i] = RxBuffer1[i];
		}
		RxCnt1 = 0;
		__enable_irq();
		data[s] = 0;
		for (i = 0; i < s; i++) {
			add_char(data[i]);
		}
	}
}

#ifndef NOKIA
// Partial update display
void EPD_init_part(unsigned int x_start, unsigned int y_start,
		   unsigned int x_end, unsigned int y_end) {
	// unsigned int i;
	//	unsigned int x_end,y_end;

	//	y_end=y_start+PART_LINE-1;
	//	x_end=x_start+PART_COLUMN-1;

	EPD_W21_WriteCMD(0x50);
	EPD_W21_WriteDATA(0xA9);
	EPD_W21_WriteDATA(0x07);

	EPD_W21_WriteCMD(
	    0x91); // This command makes the display enter partial mode
	EPD_W21_WriteCMD(0x90); // resolution setting
	EPD_W21_WriteDATA(x_start / 256);
	EPD_W21_WriteDATA(x_start % 256); // x-start

	EPD_W21_WriteDATA(x_end / 256);
	// EPD_W21_WriteDATA (x_end%256-1);  //x-end
	EPD_W21_WriteDATA(x_end % 256); // x-end

	EPD_W21_WriteDATA(y_start / 256); //
	EPD_W21_WriteDATA(y_start % 256); // y-start

	EPD_W21_WriteDATA(y_end / 256);
	// EPD_W21_WriteDATA (y_end%256-1);  //y-end
	EPD_W21_WriteDATA(y_end % 256); // y-end
	EPD_W21_WriteDATA(0x01);
}

void loop() {
	int x, y;
	int d;
	int v;
	static int cx = -1;
	static int cy = -1;
	int full = 0;
	static int j = 0;
	check_data_in();
	if (damage_bottom < 0 || damage_right < 0) {
		return;
	}
	if (j == 600 || j == 0) {
		j = 1;
		damage_left = 0;
		damage_right = TERM_COLS - 1;
		damage_top = 0;
		damage_bottom = TERM_ROWS - 1;
		EPD_init();
		full = 1;
	} else {
		EPD_Init_Part();
		EPD_init_part(damage_left * 16, damage_top * 32,
			      damage_right * 16 + 15, damage_bottom * 32 + 31);
	}
	printf("%d %d %d %d\n", damage_left, damage_top, damage_right,
	       damage_bottom);
	EPD_W21_WriteCMD(0x10); // Transfer old data
	for (y = damage_top * 32; y <= ((damage_bottom * 32) + 31); y++) {
		for (x = damage_left * 2; x <= ((damage_right * 2) + 1); x++) {
			d = font[(terminal2[y >> 5][x >> 1] - 0x20) * 16 +
				 ((y >> 1) & 0xF)];
			if ((y >> 5) == cy && (x >> 1) == cx) {
				d = ~d;
			}
			if (!(x & 1)) {
				d = d >> 4;
			}
			d = (d & 1) | ((d << 1) & 2) | ((d << 1) & 4) |
			    ((d << 2) & 8) | ((d << 2) & 16) | ((d << 3) & 32) |
			    ((d << 3) & 64) | ((d << 4) & 128);
			if (j == 0) {
				d = 0xff;
			}
			if (!full) {
				d = ~d;
			}
			EPD_W21_WriteDATA(d);
		}
	}
	/*
	for (i = 0; i < 100 * 30; i++) {
		terminal[i / 100][i%100] = ((i+j) % 0x5E) + 0x20;
	}*/

	j++;
	EPD_W21_WriteCMD(0x13); // Transfer new data
	for (y = damage_top * 32; y <= ((damage_bottom * 32) + 31); y++) {
		for (x = damage_left * 2; x <= ((damage_right * 2) + 1); x++) {
			v = terminal[y >> 5][x >> 1];
			d = font[(v - 0x20) * 16 + ((y >> 1) & 0xF)];
			terminal2[y >> 5][x >> 1] = v;
			cx = cur_col;
			cy = cur_row;
			if ((y >> 5) == cy && (x >> 1) == cx) {
				d = ~d;
			}
			if (!(x & 1)) {
				d = d >> 4;
			}
			d = (d & 1) | ((d << 1) & 2) | ((d << 1) & 4) |
			    ((d << 2) & 8) | ((d << 2) & 16) | ((d << 3) & 32) |
			    ((d << 3) & 64) | ((d << 4) & 128);
			if (!full) {
				d = ~d;
			}
			EPD_W21_WriteDATA(d);
		}
	}

	damage_left = TERM_COLS;
	damage_right = -1;
	damage_top = TERM_ROWS;
	damage_bottom = -1;
	check_data_in();
	EPD_refresh();
	EPD_sleep();
	return;
}
#endif
#ifdef NOKIA
void loop()
{	int x, y;
	int d;
	int v;
	int cx, cy;

	check_data_in();
	printf("%d %d %d %d\n", damage_left, damage_top, damage_right,
	       damage_bottom);
	if (damage_bottom < 0 || damage_right < 0) {
		return;
	}
	printf("%d %d %d %d\n", damage_left, damage_top, damage_right,
	       damage_bottom);

	for (y = damage_top * 16; y <= ((damage_bottom * 16) + 15); y++) {
		for (x = damage_left * 8; x <= ((damage_right * 8) + 7); x++) {
			v = terminal[y >> 4][x >> 3];
			d = font[(v - 0x20) * 16 + ((y) & 0xF)];
			terminal2[y >> 5][x >> 1] = v;
			cx = cur_col;
			cy = cur_row;
			if ((y >> 4) == cy && (x >> 3) == cx) {
				d = ~d;
			}
			if (d & (1 << (7-(x&7)))) {
				NOKIA_put_pixel(x,y,1);
			} else {
				NOKIA_put_pixel(x,y,0);
			}
		}
	}

	NOKIA_update_display();
	damage_left = TERM_COLS;
	damage_right = -1;
	damage_top = TERM_ROWS;
	damage_bottom = -1;
	check_data_in();
}

#endif
