#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int64_t li_0 = 0x0;
static int8_t c_1 = 0xFE;
static int32_t i_2 = 0x0;
uint32_t ui_3 = 0xEA511E5F;
static int8_t c_4 = 0x12;
static volatile uint16_t us_5 = 0x0;
uint16_t us_6 = 0x2440;
static volatile int16_t s_7 = 0x0;
static int8_t c_8 = 0x20;
static volatile int8_t c_9 = 0x0E;
static volatile int32_t i_10 = 0x81F9F588;
static volatile uint64_t uli_11 = 0xAABE9D2DD4FE61E7;
static volatile int8_t c_12 = 0x54;
volatile int32_t i_13 = 0x5C741FC0;
volatile uint8_t uc_14 = 0xA4;
static volatile uint32_t ui_15 = 0x0;
uint8_t uc_16 = 0x1F;
volatile uint16_t us_17 = 0xD12B;
int aaa;
uint64_t func_0();
uint64_t func_0()
{
  uint16_t *ptr_18 = &us_5;
  ptr_18 = ptr_18;
  ptr_18 = &s_7;
  ui_3 ^= (c_8 -= ui_15 | c_4);
}

int loop_func()
{
  func_0();
  uint16_t *ptr_18 = &us_5;
  ptr_18 = ptr_18;
  ptr_18 = &s_7;
  ui_3 ^= (c_8 -= ui_15 | c_4);
  if (uli_11)
  {
    return li_0;
    0x8B334207;
  }

  aaa = 0x85EA;
  if ((0xE26D != us_17) || (uli_11 < c_12))
  {
    uint8_t *ptr_18 = &uc_16;
    static volatile uint16_t us_19 = 0x0;
  }

  i_2 &= (li_0 && uc_16) >= (i_2 && 0x34);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

