#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint64_t uli_0 = 0x35F284015FE81FF0;
int32_t i_1 = 0x0;
static volatile int16_t s_2 = 0x29A9;
static volatile uint64_t uli_3 = 0x0397CCDBF5FF64E4;
static int32_t i_4 = 0x3CFF6A58;
uint16_t us_5 = 0x0;
static volatile uint8_t uc_6 = 0xF2;
static volatile uint32_t ui_7 = 0x9156C4BB;
static volatile uint16_t us_8 = 0x016C;
volatile int8_t c_9 = 0x0;
static volatile int8_t c_10 = 0x9E;
int aaa;
int8_t func_1(uint64_t uli_11, int64_t li_12, int16_t s_13, int8_t c_14);
int32_t func_0();
int8_t func_1(uint64_t uli_11, int64_t li_12, int16_t s_13, int8_t c_14)
{
  int8_t *ptr_15 = &c_14;
  uint64_t uli_16 = 0x0;
  int8_t *ptr_17 = &c_10;
}

int32_t func_0()
{
  uint64_t *ptr_11 = &uli_3;
  static volatile uint64_t uli_12 = 0xE27E3DA373301CE8;
  uint32_t *ptr_13 = &ui_7;
  ptr_13 = &i_4;
  s_2 += (*ptr_11 |= func_1(c_10, 0x19677521, *ptr_11, 0x2C93));
}

int loop_func()
{
  func_0();
  long c_14;
  long li_12;
  _Bool s_13;
  long uli_11;
  int8_t *ptr_15 = &c_14;
  static uint64_t uli_16 = 0x0;
  int8_t *ptr_17 = &c_10;
  uint64_t *ptr_11 = &uli_3;
  static uint64_t uli_12 = 0xE27E3DA373301CE8;
  uint32_t *ptr_13 = &ui_7;
  ptr_13 = &i_4;
  s_2 += (*ptr_11 |= func_1(c_10, 0x19677521, *ptr_11, 0x2C93));
  uli_16 = 0x721B0297;
  c_9 -= (uli_0 ^= us_8) || (ui_7 <= 0x0);
  if ((uli_3 && uc_6) <= (ui_7 != c_9))
  {
    int8_t *ptr_11 = &c_9;
    static uint16_t us_12 = 0xB040;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

