#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int8_t c_0 = 0x4F;
static uint8_t uc_1 = 0x0;
uint64_t uli_2 = 0x0;
static int32_t i_3 = 0x7D410827;
uint32_t ui_4 = 0x264DF7C7;
static uint8_t uc_5 = 0x0;
volatile int64_t li_6 = 0x0;
static volatile uint8_t uc_7 = 0x0;
static volatile int8_t c_8 = 0x0;
static volatile uint32_t ui_9 = 0x0;
static volatile uint16_t us_10 = 0xAB7F;
int aaa;
int8_t func_1();
int16_t func_0();
int8_t func_1()
{
  int8_t *ptr_11 = &c_8;
  c_0 *= (0xFF1A - c_0) ? (ui_9 *= li_6) : (0xD21CB55E && uc_7);
}

int16_t func_0()
{
  static volatile uint8_t uc_11 = 0x0F;
  uint32_t *ptr_12 = &ui_9;
  int16_t s_13 = 0x7A01;
  volatile uint16_t us_14 = 0x371A;
  uc_7 ^= func_1();
  for (c_8 = 12; c_8 <= 56; c_8 += 1)
  {
    uint32_t *ptr_15 = &ui_9;
    ptr_12 = &i_3;
  }

}

int loop_func()
{
  func_0();
  int8_t *ptr_11 = &c_8;
  c_0 *= (0xFF1A - c_0) ? (ui_9 *= li_6) : (0xD21CB55E && uc_7);
  c_0 *= (0xFF1A - c_0) ? (ui_9 *= li_6) : (0xD21CB55E && uc_7);
  static uint8_t uc_11 = 0x0F;
  uint32_t *ptr_12 = &ui_9;
  static volatile int16_t s_13 = 0x7A01;
  static volatile uint16_t us_14 = 0x371A;
  uc_7 ^= func_1();
  for (c_8 = 12; c_8 <= 56; c_8 += 1)
  {
    uint32_t *ptr_15 = &ui_9;
    ptr_12 = &i_3;
  }

  return 0;
  uc_5 = (0x0 > ui_4) ? (ui_4) : (ui_9 ^= uli_2);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

