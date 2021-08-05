#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
int16_t s_0 = 0xAE1F;
static volatile int8_t c_1 = 0xEA;
static volatile uint8_t uc_2 = 0x2D;
static volatile int8_t c_3 = 0xAA;
static uint32_t ui_4 = 0x0;
static int16_t s_5 = 0x0;
volatile uint8_t uc_6 = 0x0;
static volatile int64_t li_7 = 0x66949B13A22AA144;
volatile uint32_t ui_8 = 0x0;
static volatile uint8_t uc_9 = 0x9B;
volatile uint64_t uli_10 = 0x0;
static volatile uint16_t us_11 = 0x0;
static volatile uint32_t ui_12 = 0x0;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  static int16_t s_13 = 0x8F29;
  volatile uint16_t us_14 = 0x0;
  uint8_t *ptr_15 = &uc_9;
}

int loop_func()
{
  func_0();
  volatile int16_t s_13 = 0x8F29;
  static uint16_t us_14 = 0x0;
  uint8_t *ptr_15 = &uc_9;
  L_3995971381:
  0x10147701;

  s_13 = uc_2;
  s_5 |= (s_0 = s_5 & c_3);
  s_13 = s_0;
  uc_2 = (li_7 &= uli_10) + (uc_9 < uc_9);
  for (uli_10 = 29; uli_10 <= 44; uli_10 += 1)
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

