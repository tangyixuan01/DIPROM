#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint16_t us_0 = 0x0;
volatile uint8_t uc_1 = 0xBF;
volatile int32_t i_2 = 0xFAC78EA9;
volatile int16_t s_3 = 0xAD18;
static volatile uint32_t ui_4 = 0x0;
static uint16_t us_5 = 0x1DB4;
int32_t i_6 = 0x0;
static int16_t s_7 = 0xE5CB;
static volatile int8_t c_8 = 0x0;
volatile uint32_t ui_9 = 0x3D2D7D81;
static int16_t s_10 = 0x9F44;
static volatile int32_t i_11 = 0x27A6E43C;
volatile int16_t s_12 = 0x72CC;
volatile int64_t li_13 = 0xA9C16420ECF20B82;
static volatile uint16_t us_14 = 0x817C;
volatile uint32_t ui_15 = 0xC538197B;
int8_t func_2(int16_t s_16, uint16_t us_17, int64_t li_18);
uint16_t func_1();
uint16_t func_0();
int8_t func_2(int16_t s_16, uint16_t us_17, int64_t li_18)
{
  int8_t *ptr_19 = &c_8;
  volatile int32_t i_20 = 0xDAB36709;
  uint32_t *ptr_21 = &ui_15;
  uint16_t *ptr_22 = &us_17;
  ptr_19 = &s_7;
  ptr_19 = &i_11;
}

uint16_t func_1()
{
  volatile int8_t c_16 = 0xCC;
  ui_9 %= (li_13 = (s_10 ^= func_2(c_8, 0xE271, 0x28332033)) || (us_14 |= 0x4F));
}

uint16_t func_0()
{
  int16_t *ptr_16 = &s_10;
  volatile int32_t i_17 = 0xE9E6B8D6;
  static volatile uint8_t uc_18 = 0x39;
  func_1();
  ptr_16 = &i_2;
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
  _Bool li_18;
  signed s_16;
  short us_17;
  int8_t *ptr_19 = &c_8;
  static volatile int32_t i_20 = 0xDAB36709;
  uint32_t *ptr_21 = &ui_15;
  uint16_t *ptr_22 = &us_17;
  ptr_19 = &s_7;
  ptr_19 = &i_11;
  ptr_19 = &s_7;
  ptr_19 = &i_11;
  static volatile int8_t c_16 = 0xCC;
  ui_9 %= (li_13 = (s_10 ^= func_2(c_8, 0xE271, 0x28332033)) || (us_14 |= 0x4F));
  int16_t *ptr_16 = &s_10;
  int32_t i_17 = 0xE9E6B8D6;
  static volatile uint8_t uc_18 = 0x39;
  func_1();
  ptr_16 = &i_2;
  (ui_15 ^= 0x3C & i_2) ^ ((us_5 < 0x9B) << (us_5 > 0x0));
  ((i_11 %= 0x8C4D1B4B) / ui_9) < (uc_1 -= s_7 >> ui_4);
  int var_3085514591 = 7;
  for (; var_3085514591 > 2; var_3085514591 -= 4)
  {
    uc_18 = ui_9;
    i_6 |= ((i_2 *= (ui_15 %= 0x624F)) - (ui_9 /= us_14 & s_10)) != (((i_11 = 0xA6A8) && (0xE4C1 * ui_9)) && ((us_0 /= i_6) <= (li_13 %= s_10)));
    uc_18 = ((ui_15 %= li_13) && (0x0 || c_8)) | ((c_8 += us_14) == (ui_15 == i_11));
    i_2 ^= (((i_6 | 0x0) & (c_8 *= 0x0)) >= ((s_3 - i_2) + (ui_4 |= s_3))) < ((0x0 > (s_3 < 0xA8)) > (s_12 >= (li_13 << 0x7DABE448)));
  }

  int var_398805607 = 2;
  do
  {
    c_16 = s_3 ^ ((0x1A6A <= ui_15) & (i_11 || ui_4));
    return c_8;
    {
      c_16 = (uc_1 *= 0x8DEE == 0x0) > (ui_9 %= s_3 || ui_9);
      uc_1 *= (us_5 = (us_5 = (us_5 = 0x1C77A6A3 << uc_1)));
    }
  }
  while (var_398805607--);
  s_12 -= (s_7 /= (s_12 += (c_8 ^= 0x0))) || (uc_1 *= (ui_9 &= s_12) != (li_13 <= c_8));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

