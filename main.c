

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))
#endif

typedef unsigned char uint8_t;

#define P1DDR	(*(volatile unsigned char*)	(0xffffb0)) /* Port 1 Data Direction Register */
#define P2DDR	(*(volatile unsigned char*)	(0xffffb1)) /* Port 2 Data Direction Register */
#define P1DR	(*(volatile unsigned char*)	(0xffffb2)) /* Port 1 Data Register */
#define P2DR	(*(volatile unsigned char*)	(0xffffb3)) /* Port 2 Data Register */
#define P3DDR	(*(volatile unsigned char*)	(0xffffb4)) /* Port 3 Data Direction Register */
#define P4DDR	(*(volatile unsigned char*)	(0xffffb5)) /* Port 4 Data Direction Register */
#define P3DR	(*(volatile unsigned char*)	(0xffffb6)) /* Port 3 Data Register */
#define P4DR	(*(volatile unsigned char*)	(0xffffb7)) /* Port 4 Data Register */
#define P5DDR	(*(volatile unsigned char*)	(0xffffb8)) /* Port 5 Data Direction Register */
#define P6DDR	(*(volatile unsigned char*)	(0xffffb9)) /* Port 6 Data Direction Register */
#define P5DR	(*(volatile unsigned char*)	(0xffffba)) /* Port 5 Data Register */
#define P6DR	(*(volatile unsigned char*)	(0xffffbb)) /* Port 6 Data Register */
#define PBODR	(*(volatile unsigned char*)	(0xffffbc)) /* Port B Output Direction Register */
#define P8DDR	(*(volatile unsigned char*)	(0xffffbd)) /* Port 8 Data Direction Register (write) */
#define PBPIN	(*(volatile unsigned char*)	(0xffffbd)) /* Port B ????????????? (read) */
#define PBDDR	(*(volatile unsigned char*)	(0xffffbe)) /* Port B Data Direction Register (write) */
#define P7PIN	(*(volatile unsigned char*)	(0xffffbe)) /* Port 7 ????????????? (read) */
#define P8DR	(*(volatile unsigned char*)	(0xffffbf)) /* Port 8 Data Register */
#define P9DDR	(*(volatile unsigned char*)	(0xffffc0)) /* Port 9 Data Direction Register */
#define P9DR	(*(volatile unsigned char*)	(0xffffc1)) /* Port 9 Data Register */
#define PDDDR (*(volatile unsigned char*)  (0xffff4f)) /* Port D Data Direction Register */
#define PDODR (*(volatile unsigned char*)  (0xffff4d)) /* Port D Data Register */

#define SMR_1 (*(volatile unsigned char*)  (0xffff88)) /* Serial 1 Mode */
#define BRR_1 (*(volatile unsigned char*)  (0xffff89)) /* Serial 1 Bit Rate */
#define SCR_1 (*(volatile unsigned char*)  (0xffff8a)) /* Serial 1 Serial Control */
#define TDR_1 (*(volatile unsigned char*)  (0xffff8b)) /* Serial 1 Transmit Data */
#define SSR_1 (*(volatile unsigned char*)  (0xffff8c)) /* Serial 1 Serial Status */
#define RDR_1 (*(volatile unsigned char*)  (0xffff8d)) /* Serial 1 Receive Data */
#define SCMR_1 (*(volatile unsigned char*)  (0xffff8e)) /* Serial 1 Smart Card Mode */

/* SCI SCL register bit definitions */
#define SCR_TIE   (1 << 7)
#define SCR_RIE   (1 << 6)
#define SCR_TE    (1 << 5)
#define SCR_RE    (1 << 4)
#define SCR_MPIE  (1 << 3)
#define SCR_TEIE  (1 << 2)
#define SCR_CKE1  (1 << 1)
#define SCR_CKE0  (1 << 0)

/* SCI SMR register bit definitions */
#define SMR_C_nA    (1 << 7) /* communication mode. 0 -> async, 1 -> clocked sync */
#define SMR_CHR     (1 << 6) /* character lenght 0 -> 8bits, 1 -> 7bits */
#define SMR_PE      (1 << 5) /* parity enable */
#define SMR_O_nE    (1 << 4) /* parity mode 0 -> even, 1 -> odd */
#define SMR_STOP    (1 << 3) /* parirty stop bit lenght 0 -> 1 stop bits, 1 -> 2 stop bits*/
#define SMR_MP      (1 << 2) /* multiprocess mode enable */
#define SMR_CKS1    (1 << 1) /* see baudrate calculation */
#define SMR_CKS0    (1 << 0) /* see baudrate calculation */

/* SCI SSR register bit definitions */
#define SSR_TDRE    (1 << 7) /* transmit data register empty */
#define SSR_RDRF    (1 << 6) /* receive data register full */
#define SSR_ORER    (1 << 5) /* Overrun Error */
#define SSR_FER     (1 << 4) /* Framing Error */
#define SSR_PER     (1 << 3) /* Parity Error */
#define SSR_TEND    (1 << 2) /* Transmit End */
#define SSR_MPB     (1 << 1) /* Multiprocessor Bit */
#define SSR_MPBT    (1 << 0) /* Multiprocessor Bit Transfer */

#define SBYCR       (*(volatile unsigned char*)	(0xffff84)) /* Standby control register */
#define LPWRCR      (*(volatile unsigned char*)	(0xffff85)) /* Low power control register */
#define MSTPCRH     (*(volatile unsigned char*)	(0xffff86)) /* Module stop control register H */
#define MSTPCRL     (*(volatile unsigned char*)	(0xffff87)) /* Module stop control register L */

/* module stop control register */
#define MSTPCRH_MSTP15 (1 << 7) /* reserved */
#define MSTPCRH_MSTP14 (1 << 6) /* Data transfer controller (DTC) */
#define MSTPCRH_MSTP13 (1 << 5) /* 16-bit free-running timer (FRT) */
#define MSTPCRH_MSTP12 (1 << 4) /* 8-bit timers (TMR_0, TMR1) */
#define MSTPCRH_MSTP11 (1 << 3) /* 8-bit PWM timer (PWM), 14-bit PWM timer(PWMX) */
#define MSTPCRH_MSTP10 (1 << 2) /* D/A converter */
#define MSTPCRH_MSTP9  (1 << 1) /* A/D converter */
#define MSTPCRH_MSTP8  (1 << 0) /* 8-bit timers (TMR_X, TMR_Y), timer connection*/
#define MSTPCRL_MSTP7  (1 << 7) /* Serial communication interface_0 (SCI_0) */
#define MSTPCRL_MSTP6  (1 << 6) /* Serial communication interface_1 (SCI_1) */
#define MSTPCRL_MSTP5  (1 << 5) /* Serial communication interface_2 (SCI_2) */
#define MSTPCRL_MSTP4  (1 << 4) /* I2C bus interface_0 (IIC_0) */
#define MSTPCRL_MSTP3  (1 << 3) /* I2C bus interface_1 (IIC_1) */
#define MSTPCRL_MSTP2  (1 << 2) /* Host interface (XBS),
                                   keyboard buffer controller,
                                   keyboard matrix interrupt mask register (KMIMR)
                                   keyboard matrix interrupt mask register A (KMIMRA)
                                   port 6 pull-up MOS control register (KMPCR) */
#define MSTPCRL_MSTP1  (1 << 1) /* no operations will change */
#define MSTPCRL_MSTP0  (1 << 0) /* Host interface (LPC)
                                   wake-up even interupt mask register B (WUEMRB) */
/* module stop control register function names */
#define MSTPCRH_MSTP15  (1 << 7) /* reserved */
#define MSTPCRH_DTC     (1 << 6) /* Data transfer controller (DTC) */
#define MSTPCRH_FRT     (1 << 5) /* 16-bit free-running timer (FRT) */
#define MSTPCRH_TMR01   (1 << 4) /* 8-bit timers (TMR_0, TMR1) */
#define MSTPCRH_PWM     (1 << 3) /* 8-bit PWM timer (PWM), 14-bit PWM timer(PWMX) */
#define MSTPCRH_DAC     (1 << 2) /* D/A converter */
#define MSTPCRH_ADC     (1 << 1) /* A/D converter */
#define MSTPCRH_TMRXY   (1 << 0) /* 8-bit timers (TMR_X, TMR_Y), timer connection*/
#define MSTPCRL_SCI0    (1 << 7) /* Serial communication interface_0 (SCI_0) */
#define MSTPCRL_SCI1    (1 << 6) /* Serial communication interface_1 (SCI_1) */
#define MSTPCRL_SCI2    (1 << 5) /* Serial communication interface_2 (SCI_2) */
#define MSTPCRL_IIC0    (1 << 4) /* I2C bus interface_0 (IIC_0) */
#define MSTPCRL_IIC1    (1 << 3) /* I2C bus interface_1 (IIC_1) */
#define MSTPCRL_XBS_KBD (1 << 2) /* Host interface (XBS),
                                   keyboard buffer controller,
                                   keyboard matrix interrupt mask register (KMIMR)
                                   keyboard matrix interrupt mask register A (KMIMRA)
                                   port 6 pull-up MOS control register (KMPCR) */
#define MSTPCRL_NOP     (1 << 1) /* no operations will change */
#define MSTPCRL_LPC     (1 << 0) /* Host interface (LPC)
                                   wake-up even interupt mask register B (WUEMRB) */


void sleep1s() {
  for (unsigned int j=0; j<65535; j++)
      ;
  for (unsigned int j=0; j<65535; j++)
      ;
}

void sleep(int seconds) {
  while(seconds-- > 0)
    sleep1s();
}

/* 1useconds => real 9useconds */
void usleep(int useconds) {
  while(useconds-- > 0)
    ;
}

void led_caps(short state) {
  if (state)
    P2DR &= ~(1 << 7);
  else
    P2DR |= (1 << 7);
}

void led_num(short state) {
  if (state)
    P2DR &= ~(1 << 5);
  else
    P2DR |= (1 << 5);
}

enum e_baudrate {
  B4800 = 0,
  B9600,
  B19200,
  B31250,
  B38400,
};

struct baudrate {
  enum e_baudrate baudrate;
  uint8_t n;
  uint8_t brr;
};

static const struct baudrate baudrate_10mhz[] = {
  {.baudrate = B4800, .n = 0, .brr = 64}, /* Error 0.16 % */
  {.baudrate = B9600, .n = 0, .brr = 32}, /* Error -1.36 % */
  {.baudrate = B19200, .n = 0, .brr = 15}, /* Error 1.73 % */
  {.baudrate = B31250, .n = 0, .brr = 9}, /* Error 0.00 % */
  {.baudrate = B38400, .n = 0, .brr = 8}, /* Error 1.73 % */
};

static int set_baudrate(enum e_baudrate baudrate) {
  for(short i=0; i < ARRAY_SIZE(baudrate_10mhz); i++) {
    if (baudrate_10mhz[i].baudrate != baudrate)
      continue;

    SMR_1 &= ~SMR_CKS0 & ~SMR_CKS1;
    SMR_1 |= (baudrate_10mhz[i].n & 0x3);

    BRR_1 = baudrate_10mhz[i].brr;

    return 0;
  }
  return 1;
}

int setup_serial(enum e_baudrate baudrate, short enable_interupts) {

  /* See H8S/2140B Group Hardware Manual
   * Page 380, Rev. 3.00, Mar 21, 2006 REJ09B0300-0300
   */

  /* clear Tx/Rx enable bits */
  SCR_1 &= ~SCR_TE & ~SCR_RE;

  /* CKE0/1 = 0b00
   * set clock mode to internal clock + release SCK pin */
  SCR_1 &= ~SCR_CKE0 & ~SCR_CKE1;

  /* no parity
   * 8 data bits
   * 1 stop bit
   * async communication
   *
   * speed bits are set by set_baudrate()
   */
  SMR_1 = 0;

  /* set to normal operation */
  SCMR_1 = 0;

  if (set_baudrate(baudrate)) {
    return 1;
  }

  /* wait at least 1 bit interval until setting TE/RE T1E/R1E bits */
  usleep(1000);

  SCR_1 |= SCR_TE | SCR_RE;

  if (enable_interupts)
    SCR_1 |= SCR_TIE | SCR_RIE | SCR_TEIE;

  return 0;
}

void uart_putc(const char c) {
  led_num(1);
  /* wait until transmit register is empty */
  while (!(SSR_1 & SSR_TDRE))
    ;
  led_num(0);

  TDR_1 = c;

  /* clear register empty bit */
  SSR_1 &= ~SSR_TDRE;
}

/* will be replaced by chrome ec code */
int strlen(const char *c) {
  return 0;
}

void uart_puts(const char *str, int len) {
  //int len = strlen(str);
  for (short i=0; i<len; i++) {
    uart_putc('c');
  }
}

void power_board() {
  /* !mainoff */
  P2DR |= (1 << 4);

  /* -KBRC */
  /* FAN On */
  /* -batlow */
  P4DR |= (1 << 0) | (1 << 4) | (1 << 3);

  /* -pwrsw_h8s */
  P9DR |= (1 << 5);
  sleep(2);
  P9DR &= ~(1 << 5);
  sleep(2);
  P9DR |= (1 << 5);
}

/* send a simple hello to the board
 * 1 / (sleep_us*2) = frequency.
 */

/* data direction must be set to output seperate*/
#define XP_CLK 0
#define XP_DATA 1
#define XP_LE 2
#define XP_OE 3
#define XP_PORT_DATA P2DR

/* bit bang the XP (extra protocol? :)
 *
 * The protocol use a data and a clock line. It's unidirectional.
 * Transmit one bit per clock cycle.
 * After all bytes are send, shortly pulse the LE pin to high.
 * OE is Low as long we are talking to the chip
 */
void send_pmh(int sleep_us, char *message, int len) {
  /* OE must be low all the time */
  XP_PORT_DATA &= ~(1 << XP_OE);

  /* message loop - transmit byte by byte */
  for (short i=0; i < len; i++) {

    /* byte loop - transmit bit by bit */
    for (short j=7; j >= 0; j--) {
      XP_PORT_DATA &= ~(1 << XP_CLK); /* clk low */

      if (message[i] & (1 << j)) {
        XP_PORT_DATA |= (1 << XP_DATA);
      } else {
        XP_PORT_DATA &= ~(1 << XP_DATA);
      }
      usleep(sleep_us);

      XP_PORT_DATA |= (1 << XP_CLK); /* clk high */
      usleep(sleep_us);
    }
  }

  /* latch enable is an end of transmission latch. Only pulsed shortly */
  usleep(1);
  XP_PORT_DATA &= ~(1 << XP_LE);
  usleep(1);
  XP_PORT_DATA |= (1 << XP_LE);
}

int main() {
  P2DDR = 0xff; /* all ports are outputs */
  P4DDR = ((1 << 0) | (1 << 3) | 1 << 4);
  P9DDR = (1 << 5);

  P8DDR = (1 << 4); /* TXD1 output */

  XP_PORT_DATA &= ~(1 << XP_OE);

  /* enable serial interace 1 */
  MSTPCRL &= ~MSTPCRL_SCI1;
  led_caps(0);
  led_num(0);
  
  while (baudrate_10mhz[2].baudrate != B19200) {
    led_num(0);
    led_caps(0);
    sleep(1);
    led_num(1);
    led_caps(1);
    sleep(3);
  }

  int ret = setup_serial(B9600, 1);
  while(ret) {
    led_num(1);
  }

  led_num(0);
  led_caps(0);

  for(int i=0; i<5; i++) {
    led_num(1);
    sleep(1);
    led_num(0);
    sleep(1);
  }

  while(1) {
    P8DR |= (1 << 4);
    usleep(1);
    P8DR &= ~(1 << 4);
    usleep(1);
    uart_putc('#');
  }
  /*{
    uart_puts("yip", 3);
    led_caps(1);
    send_pmh(2, "\x02\x0f\x90", 3);
    sleep(1);

    led_caps(0);
    send_pmh(2, "\x02\x0f\x90", 3);
    sleep(1);

  }*/
}
