#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint64_t uli_0 = 0x0;
uint8_t uc_1 = 0x77;
volatile int64_t li_2 = 0x0;
volatile int32_t i_3 = 0x0;
volatile int32_t i_4 = 0x0;
volatile int16_t s_5 = 0xD630;
static int64_t li_6 = 0x5E05E52D5ED4BEC2;
static volatile uint32_t ui_7 = 0x8A547864;
volatile int64_t li_8 = 0x0;
int32_t i_9 = 0xB9ABF811;
uint32_t func_1(int32_t i_10, int16_t s_11, int64_t li_12);
int64_t func_2(uint16_t us_10);
uint8_t func_0();
uint32_t func_1(int32_t i_10, int16_t s_11, int64_t li_12)
{
  uint8_t *ptr_13 = &uc_1;
  volatile int8_t c_14 = 0x02;
}

int64_t func_2(uint16_t us_10)
{
  static volatile uint32_t ui_11 = 0xD67A7DF4;
  uint32_t *ptr_12 = &ui_11;
  uint16_t us_13 = 0xF90B;
  ptr_12 = &ui_11;
}

uint8_t func_0()
{
  static volatile int64_t li_10 = 0x760C49004AB0931A;
  int64_t *ptr_11 = &li_8;
  volatile uint16_t us_12 = 0x5C92;
  ptr_11 = &uli_0;
  li_8 *= func_1(func_2((i_9 -= li_6) <= (s_5 = s_5)), 0x92 << ((*ptr_11 -= li_2) != (uli_0 ^= *ptr_11)), ((ui_7 != li_10) == (li_2 -= s_5)) < ((0x0 >> 0x6058) & (*ptr_11 &= li_10)));
  ptr_11 = &li_2;
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
  int i_10;
  char li_12;
  _Bool s_11;
  _Bool us_10;
  uint8_t *ptr_13 = &uc_1;
  volatile int8_t c_14 = 0x02;
  volatile uint32_t ui_11 = 0xD67A7DF4;
  uint32_t *ptr_12 = &ui_11;
  static uint16_t us_13 = 0xF90B;
  ptr_12 = &ui_11;
  ptr_12 = &ui_11;
  static int64_t li_10 = 0x760C49004AB0931A;
  int64_t *ptr_11 = &li_8;
  uint16_t us_12 = 0x5C92;
  ptr_11 = &uli_0;
  li_8 *= func_1(func_2((i_9 -= li_6) <= (s_5 = s_5)), 0x92 << ((*ptr_11 -= li_2) != (uli_0 ^= *ptr_11)), ((ui_7 != li_10) == (li_2 -= s_5)) < ((0x0 >> 0x6058) & (*ptr_11 &= li_10)));
  ptr_11 = &li_2;
  ((uc_1 >> 0x6C) || (uli_0 || li_6)) >> ((li_6 ^= 0x4BBA) || (uli_0 + 0x0));
  for (li_6 = -24; li_6 <= 49; li_6 += 1)
  {
    static volatile uint16_t us_10 = 0xA2BF;
    int32_t *ptr_11 = &i_3;
    uint16_t *ptr_12 = &us_10;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

