#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint8_t uc_0 = 0x0;
int8_t c_1 = 0x5B;
static volatile int64_t li_2 = 0x0;
static volatile uint32_t ui_3 = 0x09AA59F0;
static volatile uint16_t us_4 = 0x781F;
static volatile uint16_t us_5 = 0x0;
uint8_t uc_6 = 0x0;
static int32_t i_7 = 0x8E0036B9;
volatile int8_t c_8 = 0x80;
static volatile int16_t s_9 = 0x0;
static volatile int16_t s_10 = 0xB97E;
int32_t i_11 = 0x7DD20EE4;
int aaa;
uint16_t func_0();
uint16_t func_0()
{
  static volatile uint32_t ui_12 = 0x4FB2B998;
}

int loop_func()
{
  func_0();
  static volatile uint32_t ui_12 = 0x4FB2B998;
  ui_12 = 0x0;
  return s_9;
  for (i_7 = 2; i_7 <= 40; i_7 += 1)
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

