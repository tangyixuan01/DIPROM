#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x0;
uint16_t us_1 = 0x8837;
static volatile int8_t c_2 = 0x68;
static volatile int8_t c_3 = 0xED;
static volatile int16_t s_4 = 0x9DB1;
int64_t li_5 = 0xBC8DBD741A993C1B;
static int64_t li_6 = 0x46824A7D72F5DA15;
int8_t c_7 = 0x0;
static volatile int16_t s_8 = 0x13AB;
static uint32_t ui_9 = 0x7E865CCD;
static volatile uint64_t uli_10 = 0x0;
static int8_t c_11 = 0xEF;
uint8_t func_0();
uint8_t func_0()
{
  int64_t li_12 = 0x0;
  uint8_t *ptr_13 = &uc_0;
  for (c_11 = -9; c_11 <= 64; c_11 += 1)
  {
    int64_t *ptr_14 = &li_12;
    static int64_t li_15 = 0x5BED2AC58BA94A8A;
    ptr_14 = &li_6;
    for (li_5 = 11; li_5 <= 82; li_5 += 1)
    {
      int16_t s_16 = 0x0;
      volatile int64_t li_17 = 0xF0FB57700BA86CDF;
    }

  }

  for (ui_9 = 1; ui_9 <= 43; ui_9 += 1)
  {
    static volatile uint64_t uli_14 = 0x6584A7492A09A154;
    uli_10 -= ((li_12 |= (li_5 *= us_1)) & ((c_3 || s_8) << (c_3 || li_5))) < li_12;
  }

}

int array[100] = {0};
int loop_func()
{
  struct S
  {
    int a;
    int b;
    int c;
    int d;
    int e;
  };
  struct S ss;
  unsigned long long generic_var;
  va_list arg;
  int aaa;
  static int64_t li_12 = 0x0;
  uint8_t *ptr_13 = &uc_0;
  for (c_11 = -9; c_11 <= 64; c_11 += 1)
  {
    int64_t *ptr_14 = &li_12;
    static int64_t li_15 = 0x5BED2AC58BA94A8A;
    ptr_14 = &li_6;
    for (li_5 = 11; li_5 <= 82; li_5 += 1)
    {
      int16_t s_16 = 0x0;
      int64_t li_17 = 0xF0FB57700BA86CDF;
    }

  }

  for (ui_9 = 1; ui_9 <= 43; ui_9 += 1)
  {
    uint64_t uli_14 = 0x6584A7492A09A154;
    uli_10 -= ((li_12 |= (li_5 *= us_1)) & ((c_3 || s_8) << (c_3 || li_5))) < li_12;
  }

  return 0;
  c_7 |= (s_8 /= 0xF56EDD9F) >= (uli_10 += (us_1 += func_1(c_2, 0xEB79760F, c_2)));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

