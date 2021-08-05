#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x05;
volatile int32_t i_1 = 0xFE5D2656;
volatile int32_t i_2 = 0x4D0FC760;
static volatile int64_t li_3 = 0x6D0561466015E621;
int32_t i_4 = 0x785B55B2;
static uint32_t ui_5 = 0x0;
static volatile int16_t s_6 = 0x9809;
static volatile uint32_t ui_7 = 0xA2D02E51;
static volatile int32_t i_8 = 0x20E9844E;
volatile uint8_t uc_9 = 0x06;
volatile uint8_t uc_10 = 0x9A;
int16_t func_1(int32_t i_11, int8_t c_12, int32_t i_13, int32_t i_14);
uint16_t func_2(uint8_t uc_11, int32_t i_12, uint16_t us_13, int32_t i_14);
int32_t func_0();
int16_t func_1(int32_t i_11, int8_t c_12, int32_t i_13, int32_t i_14)
{
  static volatile int32_t i_15 = 0x0;
  static volatile int8_t c_16 = 0x0;
}

uint16_t func_2(uint8_t uc_11, int32_t i_12, uint16_t us_13, int32_t i_14)
{
  int16_t *ptr_15 = &s_6;
}

int32_t func_0()
{
  int32_t *ptr_11 = &i_2;
  int32_t *ptr_12 = &i_2;
  ptr_11 = ptr_11;
  i_8 = (*ptr_11 ^= (func_1(0x0, i_2, uc_0, 0x8C14) || func_2(0xF5F0, i_8, *ptr_12, 0xA7B6)) >> (((*ptr_12) || ui_7) * (i_2 ^= i_4)));
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
  _Bool c_12;
  short i_11;
  long i_12;
  _Bool i_13;
  long i_14;
  short uc_11;
  short us_13;
  static volatile int32_t i_15 = 0x0;
  volatile int8_t c_16 = 0x0;
  int16_t *ptr_15 = &s_6;
  int32_t *ptr_11 = &i_2;
  int32_t *ptr_12 = &i_2;
  ptr_11 = ptr_11;
  i_8 = (*ptr_11 ^= (func_1(0x0, i_2, uc_0, 0x8C14) || func_2(0xF5F0, i_8, *ptr_12, 0xA7B6)) >> (((*ptr_12) || ui_7) * (i_2 ^= i_4)));
  L_2110482328:
  uc_10 < i_2;

  i_15 = (0x481DD7C1 || (i_4 ^= 0x0)) - (uc_9 -= 0xE46C5AF5 << 0x10);
  if (((s_6 ^= 0xC783 || i_4) - (ui_5 ^= s_6 != uc_0)) <= ((s_6 *= (s_6 *= 0xD2D996CD)) * ((uc_10 >= i_2) < (li_3 > 0x26))))
  {
    static volatile int64_t li_11 = 0x0;
    int32_t *ptr_12 = &i_8;
    uint8_t *ptr_13 = &uc_0;
  }

  for (ui_5 = 25; ui_5 <= 43; ui_5 += 1)
  {
    uint16_t us_11 = 0x0;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

