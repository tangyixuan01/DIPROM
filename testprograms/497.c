#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint32_t ui_0 = 0x45616179;
static volatile int64_t li_1 = 0x2157FB09E941B325;
uint32_t ui_2 = 0x42A8709E;
static volatile uint8_t uc_3 = 0x7F;
static volatile int16_t s_4 = 0x071F;
uint16_t us_5 = 0x81AC;
static volatile int16_t s_6 = 0xF4B5;
static volatile uint32_t ui_7 = 0x0;
volatile uint64_t uli_8 = 0x7F81DA1493EABF9E;
volatile int8_t c_9 = 0xFA;
int aaa;
uint16_t func_1(uint16_t us_10, uint16_t us_11, uint64_t uli_12);
int32_t func_0();
uint16_t func_1(uint16_t us_10, uint16_t us_11, uint64_t uli_12)
{
  uint8_t *ptr_13 = &uc_3;
  uint64_t *ptr_14 = &uli_12;
  volatile int8_t c_15 = 0x0D;
  ptr_13 = ptr_14;
  ptr_14 = &li_1;
}

int32_t func_0()
{
  uint32_t *ptr_10 = &ui_0;
  static volatile int64_t li_11 = 0x3B879228B08DF2C1;
  ptr_10 = &ui_0;
  s_4 += (ui_0 &= ui_7) + func_1(0x5851643A, 0x55, ui_0);
}

int loop_func()
{
  func_0();
  _Bool uli_12;
  signed us_10;
  signed us_11;
  uint8_t *ptr_13 = &uc_3;
  uint64_t *ptr_14 = &uli_12;
  static volatile int8_t c_15 = 0x0D;
  ptr_13 = ptr_14;
  ptr_14 = &li_1;
  ptr_13 = ptr_14;
  ptr_14 = &li_1;
  uint32_t *ptr_10 = &ui_0;
  static volatile int64_t li_11 = 0x3B879228B08DF2C1;
  ptr_10 = &ui_0;
  s_4 += (ui_0 &= ui_7) + func_1(0x5851643A, 0x55, ui_0);
  L_166841269:
  uli_8;

  c_15 = ui_2;
  for (c_9 = 28; c_9 <= 48; c_9 += 1)
  {
    int64_t *ptr_10 = &li_1;
    uint16_t *ptr_11 = &us_5;
  }

  for (s_6 = -12; s_6 <= 60; s_6 += 1)
  {
    static volatile int16_t s_10 = 0x0;
    uint8_t uc_11 = 0x0;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

