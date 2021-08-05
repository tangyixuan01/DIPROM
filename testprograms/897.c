#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint16_t us_0 = 0x0;
static volatile uint64_t uli_1 = 0x0;
volatile int32_t i_2 = 0x9101181A;
int64_t li_3 = 0x3B2491DAE9A985A3;
static volatile int64_t li_4 = 0x0;
static volatile uint32_t ui_5 = 0x0;
static volatile int16_t s_6 = 0xCB7D;
static uint16_t us_7 = 0x896B;
static int32_t i_8 = 0xFD9C7751;
static int8_t c_9 = 0x6A;
static volatile uint8_t uc_10 = 0xBE;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  uint32_t *ptr_11 = &ui_5;
  int64_t li_12 = 0x863D73AEEB3993FD;
  uli_1 *= (0x0 < i_2) + (0x9E94 == uc_10);
  ptr_11 = &uli_1;
  ptr_11 = &i_2;
  ptr_11 = &ui_5;
  for (*ptr_11 = 30; (*ptr_11) <= 34; *ptr_11 += 1)
  {
    static int16_t s_13 = 0x0;
  }

}

int loop_func()
{
  func_0();
  uint32_t *ptr_11 = &ui_5;
  static int64_t li_12 = 0x863D73AEEB3993FD;
  uli_1 *= (0x0 < i_2) + (0x9E94 == uc_10);
  ptr_11 = &uli_1;
  ptr_11 = &i_2;
  ptr_11 = &ui_5;
  for (*ptr_11 = 30; (*ptr_11) <= 34; *ptr_11 += 1)
  {
    volatile int16_t s_13 = 0x0;
  }

  return 0xBEAAC692;
  lbl7BFC2278:
  uli_1 = (uc_10 *= 0x16 >= 0x0);

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

