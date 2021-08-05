#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint16_t us_0 = 0x8A0C;
static volatile uint8_t uc_1 = 0xD4;
static volatile uint32_t ui_2 = 0xA395DB1B;
static int64_t li_3 = 0x019DE3B6D6451412;
uint64_t uli_4 = 0x65208B5577158161;
static volatile int64_t li_5 = 0x49B10F6147336A88;
static volatile int16_t s_6 = 0x0;
volatile uint16_t us_7 = 0x6A77;
int8_t c_8 = 0x86;
uint8_t uc_9 = 0x0;
static volatile uint16_t us_10 = 0x0;
static int8_t c_11 = 0x70;
int aaa;
int64_t func_0();
int64_t func_0()
{
  uint8_t *ptr_12 = &uc_9;
  uint8_t *ptr_13 = &uc_9;
  static volatile uint8_t uc_14 = 0x0;
  *ptr_12 /= (us_10 >> (*ptr_13)) ? (ui_2 && 0x0) : (ui_2 += uli_4);
  ptr_12 = ptr_13;
}

int loop_func()
{
  func_0();
  uint8_t *ptr_12 = &uc_9;
  uint8_t *ptr_13 = &uc_9;
  static volatile uint8_t uc_14 = 0x0;
  *ptr_12 /= (us_10 >> (*ptr_13)) ? (ui_2 && 0x0) : (ui_2 += uli_4);
  ptr_12 = ptr_13;
  return 0;
  us_10 &= ((li_3) ? (c_8) : (0x0)) ? (c_8) : (c_11 != ui_2);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

