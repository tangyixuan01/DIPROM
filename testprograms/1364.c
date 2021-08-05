#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint16_t us_0 = 0x5395;
uint16_t us_1 = 0x4C65;
volatile uint32_t ui_2 = 0x4ED37EC3;
static volatile int8_t c_3 = 0x0;
static volatile int16_t s_4 = 0xD757;
static volatile int16_t s_5 = 0x8F31;
int32_t i_6 = 0x0;
static volatile int64_t li_7 = 0x25EF42D164F287BA;
static int8_t c_8 = 0x15;
static volatile int8_t c_9 = 0x58;
static uint16_t us_10 = 0x0;
volatile int16_t s_11 = 0xE890;
static volatile uint32_t ui_12 = 0x0;
int16_t func_0();
int16_t func_0()
{
  int8_t *ptr_13 = &c_8;
  volatile uint8_t uc_14 = 0xEC;
  uint16_t *ptr_15 = &us_1;
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
  int8_t *ptr_13 = &c_8;
  static volatile uint8_t uc_14 = 0xEC;
  uint16_t *ptr_15 = &us_1;
  int var_1751886426 = -5;
  while (var_1751886426 < 20)
  {
    var_1751886426 += 5;
    uc_14 = func_1(s_5 += us_1 | s_4, us_1 = 0x0 >= 0x7724, (0x0 != s_11) > (us_10 *= li_7), (us_10 & 0xFEF2564A) * 0x88);
    c_3 /= (us_1 |= c_3 >= (ui_2 = s_11 && 0xA73E));
    return (us_0 *= 0xEE87F1B0 ^ ui_2) - ((0xF3 ^ ui_12) / (i_6 -= ui_2));
    us_0 /= ui_2;
  }

  if (((us_10 -= 0xCE) >= (s_5 ^= c_3)) > (us_0 && s_4))
  {
    int8_t *ptr_13 = &c_9;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

