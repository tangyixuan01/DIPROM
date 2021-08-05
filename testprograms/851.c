#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint16_t us_0 = 0x215E;
volatile int16_t s_1 = 0x40ED;
int64_t li_2 = 0x19110E757AB77B49;
int8_t c_3 = 0xAA;
int8_t c_4 = 0x8B;
uint8_t uc_5 = 0xB7;
static volatile int16_t s_6 = 0x9C2B;
static volatile uint32_t ui_7 = 0x9470F286;
static volatile uint32_t ui_8 = 0xF5B90C98;
volatile uint64_t uli_9 = 0x5290B2CDD9F7E67D;
static volatile uint8_t uc_10 = 0x0;
int8_t func_1();
int16_t func_0();
int8_t func_1()
{
  int16_t *ptr_11 = &s_1;
  static volatile int32_t i_12 = 0x412F25E7;
  static volatile int32_t i_13 = 0x0;
  int64_t *ptr_14 = &li_2;
}

int16_t func_0()
{
  static int32_t i_11 = 0x0;
  static volatile uint64_t uli_12 = 0x64FF36D9EA2DD99F;
  uint64_t *ptr_13 = &uli_12;
  for (uc_5 = 18; uc_5 <= 67; uc_5 += 1)
  {
    uint32_t *ptr_14 = &ui_7;
    int32_t *ptr_15 = &i_11;
  }

  ptr_13 = &uli_9;
  func_1();
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
  int16_t *ptr_11 = &s_1;
  static volatile int32_t i_12 = 0x412F25E7;
  static volatile int32_t i_13 = 0x0;
  int64_t *ptr_14 = &li_2;
  int32_t i_11 = 0x0;
  uint64_t uli_12 = 0x64FF36D9EA2DD99F;
  uint64_t *ptr_13 = &uli_12;
  for (uc_5 = 18; uc_5 <= 67; uc_5 += 1)
  {
    uint32_t *ptr_14 = &ui_7;
    int32_t *ptr_15 = &i_11;
  }

  ptr_13 = &uli_9;
  func_1();
  return 0;
  uc_10;
  if (func_2(0xA86AD832, s_6 = (ui_7 && 0xE501) == (0x0 << s_1), 0x0, ((c_3 || 0x1E) + (s_6 * ui_7)) >> ((c_3 *= 0x0) == (0xA4 && us_0))))
  {
    static volatile int64_t li_11 = 0x0;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

