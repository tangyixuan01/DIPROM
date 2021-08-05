#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint16_t us_0 = 0x5ECE;
int32_t i_1 = 0x0;
static int8_t c_2 = 0x41;
int32_t i_3 = 0x0;
static volatile int8_t c_4 = 0xF6;
int16_t s_5 = 0x0;
int32_t i_6 = 0x5432CDE9;
int32_t i_7 = 0x327F0358;
int64_t li_8 = 0x0;
static volatile int16_t s_9 = 0x0;
static volatile int64_t li_10 = 0xDD07642B86E53CEF;
static volatile uint32_t ui_11 = 0x0;
uint8_t uc_12 = 0x12;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  int16_t *ptr_13 = &s_9;
  ptr_13 = &li_10;
  uc_12 /= (uc_12 -= us_0 < c_4);
}

int loop_func()
{
  func_0();
  int16_t *ptr_13 = &s_9;
  ptr_13 = &li_10;
  uc_12 /= (uc_12 -= us_0 < c_4);
  {
    aaa = 0xCF;
    ui_11 -= (i_7 &= s_5 + li_10);
  }
  us_0 |= (i_7 ^= (i_1 += s_5));
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

