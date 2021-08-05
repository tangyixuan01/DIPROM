#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x0;
static volatile int64_t li_1 = 0x8611206A25B25086;
static int16_t s_2 = 0x0;
volatile int8_t c_3 = 0x38;
static volatile int8_t c_4 = 0xE6;
volatile uint64_t uli_5 = 0x55FDB0FD0573A350;
static volatile uint16_t us_6 = 0x6D6F;
static volatile uint16_t us_7 = 0x74B5;
static int16_t s_8 = 0x0;
static volatile uint32_t ui_9 = 0x0;
static volatile int8_t c_10 = 0x0;
int32_t i_11 = 0xCB9D000B;
static volatile uint16_t us_12 = 0xB721;
static volatile int32_t i_13 = 0x0837CED6;
static uint8_t uc_14 = 0x59;
uint8_t func_1(int8_t c_15, uint16_t us_16);
uint64_t func_2(uint8_t uc_15);
uint64_t func_0();
uint8_t func_1(int8_t c_15, uint16_t us_16)
{
  static uint64_t uli_17 = 0x8DE175F7FB7B0F1A;
  int16_t s_18 = 0x3CDF;
  uint64_t *ptr_19 = &uli_5;
  uint32_t ui_20 = 0x6D8EA7F1;
}

uint64_t func_2(uint8_t uc_15)
{
  uint16_t *ptr_16 = &us_12;
  static uint16_t us_17 = 0x9B76;
  volatile int8_t c_18 = 0x0;
}

uint64_t func_0()
{
  uint16_t *ptr_15 = &us_12;
  uint64_t *ptr_16 = &uli_5;
  if (uli_5)
  {
    static volatile int32_t i_17 = 0x0;
    volatile uint32_t ui_18 = 0xCA5C83B0;
    ui_9 &= (us_6 = uc_0);
  }

  uc_0 *= (s_8 *= (s_2 ^= func_1(*ptr_15 |= uc_0, uc_14 *= i_11)));
  func_2(uc_0 ^= (uc_14 %= c_3) != (c_10 ^= 0x0 == i_11));
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
  char c_15;
  long uc_15;
  unsigned us_16;
  volatile uint64_t uli_17 = 0x8DE175F7FB7B0F1A;
  static volatile int16_t s_18 = 0x3CDF;
  uint64_t *ptr_19 = &uli_5;
  static volatile uint32_t ui_20 = 0x6D8EA7F1;
  uint16_t *ptr_16 = &us_12;
  static uint16_t us_17 = 0x9B76;
  static int8_t c_18 = 0x0;
  uint16_t *ptr_15 = &us_12;
  if (uli_5)
  {
    static volatile int32_t i_17 = 0x0;
    static volatile uint32_t ui_18 = 0xCA5C83B0;
    ui_9 &= (us_6 = uc_0);
  }

  uc_0 *= (s_8 *= (s_2 ^= func_1(*ptr_15 |= uc_0, uc_14 *= i_11)));
  func_2(uc_0 ^= (uc_14 %= c_3) != (c_10 ^= 0x0 == i_11));
  return 0;
  for (us_6 = 2; us_6 <= 69; us_6 += 1)
  {
    int16_t *ptr_15 = &s_2;
    static volatile uint64_t uli_16 = 0x081C428823E5E7DF;
    static volatile int16_t s_17 = 0x0;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

