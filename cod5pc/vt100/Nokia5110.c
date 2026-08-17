
/*
  Nokia5110.c - Nokia 5110 / PCD8544 driver using Arduino API
  Public domain.

  Buffering: 84 x 48 pixels -> 504 bytes. put_pixel updates the affected byte immediately.
*/


#define NOKIA5110_SCLK_PIN  5 /* PA5 SCLK (clock) */
#define NOKIA5110_MOSI_PIN  7 /* PA7 MOSI (data) */
#define NOKIA5110_DC_PIN   14 /* PB8 D/C (data/command) */
#define NOKIA5110_CE_PIN    2 /* PA4 CE / CS (chip enable / chip select) */
#define NOKIA5110_RST_PIN  13 /* PB7 RST (reset) */

/* Public API */
void NOKIA_init_display(void);
void NOKIA_clear_display(void);
void NOKIA_put_pixel(unsigned char x, unsigned char y, int color);

/* Geometry */
#define NOKIA5110_WIDTH 84
#define NOKIA5110_HEIGHT 48
#define NOKIA5110_BANKS (NOKIA5110_HEIGHT / 8)
#define NOKIA5110_RAM_SIZE (NOKIA5110_WIDTH * NOKIA5110_BANKS)

/* Internal buffer */
static unsigned char nokia_buffer[NOKIA5110_RAM_SIZE];

/* Helper wrappers using Arduino digitalWrite/pinMode */
static void pin_setup_outputs(void)
{
  pinMode(NOKIA5110_SCLK_PIN, OUTPUT);
  pinMode(NOKIA5110_MOSI_PIN, OUTPUT);
  pinMode(NOKIA5110_DC_PIN,   OUTPUT);
  pinMode(NOKIA5110_CE_PIN,   OUTPUT);
  pinMode(NOKIA5110_RST_PIN,  OUTPUT);
}

/* Pin-level controls */
static void sclk_high(void)  { digitalWrite(NOKIA5110_SCLK_PIN, HIGH); }
static void sclk_low(void)   { digitalWrite(NOKIA5110_SCLK_PIN, LOW); }
static void mosi_high(void)  { digitalWrite(NOKIA5110_MOSI_PIN, HIGH); }
static void mosi_low(void)   { digitalWrite(NOKIA5110_MOSI_PIN, LOW); }
static void dc_high(void)    { digitalWrite(NOKIA5110_DC_PIN, HIGH); }
static void dc_low(void)     { digitalWrite(NOKIA5110_DC_PIN, LOW); }
static void ce_high(void)    { digitalWrite(NOKIA5110_CE_PIN, HIGH); }
static void ce_low(void)     { digitalWrite(NOKIA5110_CE_PIN, LOW); }
static void rst_high(void)   { digitalWrite(NOKIA5110_RST_PIN, HIGH); }
static void rst_low(void)    { digitalWrite(NOKIA5110_RST_PIN, LOW); }

/* Simple MSB-first bit-banged shiftOut (data valid on rising edge) */
static void shift_out_msbf(unsigned char val)
{
  for (int i = 0; i < 8; ++i) {
    if (val & 0x80u) mosi_high();
    else mosi_low();
    val <<= 1;
    sclk_high();
    /* short timing pause; adjust if needed */
    delayMicroseconds(1);
    sclk_low();
    delayMicroseconds(1);
  }
}

/* send one command byte */
static void send_command(unsigned char c)
{
  dc_low();
  ce_low();
  shift_out_msbf(c);
  ce_high();
}

/* send one data byte */
static void send_data(unsigned char d)
{
  dc_high();
  ce_low();
  shift_out_msbf(d);
  ce_high();
}

/* hardware reset */
static void reset_display_hw(void)
{
  rst_low();
  delay(10);
  rst_high();
  delay(10);
}

#if 0
/* update one byte at X (0..83) and bank (0..5) from buffer to display */
static void update_byte(unsigned char x, unsigned char bank)
{
  if (x >= NOKIA5110_WIDTH || bank >= NOKIA5110_BANKS) return;
  int index = bank * NOKIA5110_WIDTH + (int)x;
  unsigned char b = nokia_buffer[index];
  send_command((unsigned char)(0x80u | x));     /* set X address */
  send_command((unsigned char)(0x40u | bank));  /* set Y address (bank) */
  send_data(b);
}
#endif

/* Public API implementations */

void NOKIA_init_display(void)
{
  pin_setup_outputs();

  ce_high();
  dc_low();
  sclk_low();
  mosi_low();
  rst_high();

  reset_display_hw();

  /* Initialization sequence for PCD8544 */
  send_command(0x21u); /* Extended instruction set */
  send_command(0xB1u); /* Set Vop (contrast) - adjust if needed */
  send_command(0x04u); /* Set temperature coefficient */
  send_command(0x14u); /* Set bias system */
  send_command(0x20u); /* Basic instruction set, horizontal addressing */
  send_command(0x0Cu); /* Display control: normal mode */

  /* clear buffer and screen */
  NOKIA_clear_display();
}

void NOKIA_clear_display(void)
{
  int i;
  for (i = 0; i < NOKIA5110_RAM_SIZE; i++) {
    nokia_buffer[i] = 0;
  }

  /* set address to (0,0) */
  send_command(0x80u); /* X = 0 */
  send_command(0x40u); /* Y = 0 */

  for (int i = 0; i < NOKIA5110_RAM_SIZE; ++i) {
    send_data(0x00u);
  }

  /* return address to (0,0) */
  send_command(0x80u);
  send_command(0x40u);
}

void NOKIA_update_display(void)
{
  /* set address to (0,0) */
  send_command(0x80u); /* X = 0 */
  send_command(0x40u); /* Y = 0 */

  for (int i = 0; i < NOKIA5110_RAM_SIZE; ++i) {
    send_data(nokia_buffer[i]);
  }

  /* return address to (0,0) */
  send_command(0x80u);
  send_command(0x40u);

}

void NOKIA_put_pixel(unsigned char x, unsigned char y, int color)
{
  if (x >= NOKIA5110_WIDTH || y >= NOKIA5110_HEIGHT) return;

  unsigned char bank = (unsigned char)(y >> 3);
  unsigned char bit = (unsigned char)(1u << (y & 7u));
  int index = bank * NOKIA5110_WIDTH + (int)x;

  if (color) nokia_buffer[index] |= bit;
  else nokia_buffer[index] &= (unsigned char)~bit;

}

