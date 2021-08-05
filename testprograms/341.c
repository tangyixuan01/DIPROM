#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x0;
static volatile uint32_t ui_1 = 0x0;
volatile uint8_t uc_2 = 0x25;
static uint32_t ui_3 = 0x7EA7889B;
volatile int32_t i_4 = 0xCB030B08;
static volatile int32_t i_5 = 0xBD508ECA;
static uint16_t us_6 = 0xCA77;
static volatile int16_t s_7 = 0xFBB3;
uint8_t uc_8 = 0x0;
static volatile uint64_t uli_9 = 0x0;
int16_t s_10 = 0x5B71;
static volatile uint8_t uc_11 = 0xEE;
int aaa;
int8_t func_0();
int8_t func_0()
{
  uint8_t *ptr_12 = &uc_11;
  uc_8 ^= (uli_9 % 0xFF25B26A) != ((0xCC) ? (s_10) : (i_5));
}

int loop_func()
{
  func_0();
  uint8_t *ptr_12 = &uc_11;
  uc_8 ^= (uli_9 % 0xFF25B26A) != ((0xCC) ? (s_10) : (i_5));
  L_3821676393:
  0xC0;

  aaa = s_7;
  if ((0x79B3 / i_5) + (uc_2 < 0xE1))
  {
    uint32_t *ptr_12 = &ui_1;
  }
  else
  {
    volatile uint32_t ui_12 = 0x0;
    static volatile uint8_t uc_13 = 0x0;
    int32_t *ptr_14 = &i_5;
  }

  s_10 %= (us_6 += uc_0 % uc_8);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

