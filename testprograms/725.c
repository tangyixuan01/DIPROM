#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0xCD;
int16_t s_1 = 0x320A;
static uint8_t uc_2 = 0x0;
int64_t li_3 = 0x8B85FEB7EDB2C939;
static int32_t i_4 = 0x0;
static int32_t i_5 = 0x0;
static volatile uint8_t uc_6 = 0x0;
static volatile int16_t s_7 = 0x8A79;
uint8_t uc_8 = 0x0;
static int64_t li_9 = 0x8EF7CAEB7AD330C0;
volatile int32_t i_10 = 0x0;
int64_t func_0();
int64_t func_0()
{
  int32_t i_11 = 0x5104C7E9;
  static uint8_t uc_12 = 0x71;
  int32_t *ptr_13 = &i_5;
  static volatile int16_t s_14 = 0xCC49;
  ptr_13 = &i_11;
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
  static volatile int32_t i_11 = 0x5104C7E9;
  static volatile uint8_t uc_12 = 0x71;
  int32_t *ptr_13 = &i_5;
  static volatile int16_t s_14 = 0xCC49;
  ptr_13 = &i_11;
  int var_154493364 = -3;
  while (var_154493364 < 20)
  {
    var_154493364 += 4;
    i_11 = i_10;
    s_1 %= func_1((i_10 < uc_6) || (s_1 &= 0xBDD2), (s_7 & uc_0) <= i_4, (uc_2 | i_5) || (s_1 >= 0x0)) + (uc_6 == uc_2);
    (s_1 -= 0x9C) >= ((s_1 -= i_4) | (uc_2 || 0xBFEAC2DD));
  }

  for (s_7 = 29; s_7 <= 40; s_7 += 1)
  {
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

