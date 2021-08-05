#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint16_t us_0 = 0x0;
static volatile int64_t li_1 = 0x0;
volatile uint16_t us_2 = 0xEC2D;
int32_t i_3 = 0x0;
volatile int64_t li_4 = 0x2E536CE8C5F68BE6;
volatile uint32_t ui_5 = 0x939C978B;
volatile int32_t i_6 = 0x0;
volatile uint16_t us_7 = 0xED03;
static int8_t c_8 = 0xFE;
volatile int64_t li_9 = 0x3D1B80259B92729F;
static uint32_t ui_10 = 0x48025056;
static uint64_t uli_11 = 0x4508323B251B0AE7;
static int32_t i_12 = 0x795B15E6;
static volatile uint32_t ui_13 = 0x0;
static int32_t i_14 = 0x812995BC;
static volatile int8_t c_15 = 0x0;
static volatile int16_t s_16 = 0x82B6;
static volatile int16_t s_17 = 0xE103;
uint64_t func_1(uint64_t uli_18, int8_t c_19);
int64_t func_2(int64_t li_18, int64_t li_19, uint16_t us_20, uint16_t us_21);
uint64_t func_0();
uint64_t func_1(uint64_t uli_18, int8_t c_19)
{
  uint32_t *ptr_20 = &ui_13;
  volatile int32_t i_21 = 0x0;
  static uint16_t us_22 = 0x0;
  ptr_20 = &i_3;
}

int64_t func_2(int64_t li_18, int64_t li_19, uint16_t us_20, uint16_t us_21)
{
  volatile int8_t c_22 = 0x0;
  uint8_t uc_23 = 0x00;
  int64_t *ptr_24 = &li_4;
  static volatile int16_t s_25 = 0xF5F0;
  li_4 = 0x9D;
  ptr_24 = &li_4;
}

uint64_t func_0()
{
  int64_t *ptr_18 = &li_4;
  uint16_t *ptr_19 = &us_0;
  c_8 -= func_1(ui_10 = (i_12 *= ui_10), func_2(0x507A, c_8, i_6, ui_5) >= (us_7 >= 0xD4)) << (((li_9 && 0x0) >= (i_6 || ui_13)) * ((uli_11 ^= *ptr_18) < (0xBDA0273E && (*ptr_18))));
  uli_11 -= *ptr_19;
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
  int c_19;
  _Bool li_18;
  signed li_19;
  signed uli_18;
  long us_20;
  int us_21;
  uint32_t *ptr_20 = &ui_13;
  static volatile int32_t i_21 = 0x0;
  static volatile uint16_t us_22 = 0x0;
  ptr_20 = &i_3;
  ptr_20 = &i_3;
  static volatile int8_t c_22 = 0x0;
  volatile uint8_t uc_23 = 0x00;
  int64_t *ptr_24 = &li_4;
  int16_t s_25 = 0xF5F0;
  li_4 = 0x9D;
  ptr_24 = &li_4;
  li_4 = 0x9D;
  ptr_24 = &li_4;
  int64_t *ptr_18 = &li_4;
  uint16_t *ptr_19 = &us_0;
  c_8 -= func_1(ui_10 = (i_12 *= ui_10), func_2(0x507A, c_8, i_6, ui_5) >= (us_7 >= 0xD4)) << (((li_9 && 0x0) >= (i_6 || ui_13)) * ((uli_11 ^= *ptr_18) < (0xBDA0273E && (*ptr_18))));
  uli_11 -= *ptr_19;
  ui_5 += (c_8 /= i_6 <= c_15);
  if ((s_17 = (ui_5 /= us_7) || (i_3 | i_6)) + (((ui_13 << li_1) > (s_17 >= i_3)) & 0x0))
  {
    static volatile int16_t s_18 = 0x5286;
  }
  else
  {
    int32_t *ptr_18 = &i_14;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

