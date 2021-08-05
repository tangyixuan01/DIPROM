#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int32_t i_0 = 0xA408B31B;
static volatile int64_t li_1 = 0x997E22BCBED7ED25;
uint32_t ui_2 = 0x51DF5D71;
static volatile uint8_t uc_3 = 0xCF;
static volatile int8_t c_4 = 0x0;
static int8_t c_5 = 0x4B;
volatile uint8_t uc_6 = 0x7D;
volatile uint32_t ui_7 = 0x0;
static volatile int32_t i_8 = 0x0;
volatile uint8_t uc_9 = 0x0;
static uint8_t uc_10 = 0x0;
int64_t li_11 = 0xF3551C62421C8ABC;
uint32_t ui_12 = 0xBC990E51;
volatile int32_t i_13 = 0x0;
static volatile int8_t c_14 = 0xCF;
volatile int64_t li_15 = 0x4FDA11D3D5D8224D;
int aaa;
int64_t func_1(int32_t i_16, uint16_t us_17, uint64_t uli_18, uint8_t uc_19);
uint8_t func_0();
int64_t func_1(int32_t i_16, uint16_t us_17, uint64_t uli_18, uint8_t uc_19)
{
  uint8_t *ptr_20 = &uc_6;
  ptr_20 = &li_11;
}

uint8_t func_0()
{
  uint16_t us_16 = 0xBE90;
  int32_t *ptr_17 = &i_13;
  static volatile uint32_t ui_18 = 0x0B469028;
  uint16_t us_19 = 0xC176;
  ptr_17 = &ui_12;
  li_11 &= (c_4 += func_1(li_1, li_15, ui_2, uc_6));
  li_15 = (li_15 && 0x24B3952C) ? (0x21B9 || c_14) : ((0x36B0) ? (li_15) : (0xE4D3));
}

int loop_func()
{
  func_0();
  short i_16;
  signed uc_19;
  short uli_18;
  _Bool us_17;
  uint8_t *ptr_20 = &uc_6;
  ptr_20 = &li_11;
  ptr_20 = &li_11;
  static uint16_t us_16 = 0xBE90;
  int32_t *ptr_17 = &i_13;
  static volatile uint32_t ui_18 = 0x0B469028;
  static volatile uint16_t us_19 = 0xC176;
  ptr_17 = &ui_12;
  li_11 &= (c_4 += func_1(li_1, li_15, ui_2, uc_6));
  li_15 = (li_15 && 0x24B3952C) ? (0x21B9 || c_14) : ((0x36B0) ? (li_15) : (0xE4D3));
  return i_8;
  i_13 -= (c_5 %= i_13 != 0x132A);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

