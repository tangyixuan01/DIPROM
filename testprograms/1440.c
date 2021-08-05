#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int32_t i_0 = 0xD853FC75;
int32_t i_1 = 0x0;
volatile int16_t s_2 = 0x0;
static volatile int64_t li_3 = 0x0;
static volatile uint16_t us_4 = 0x0886;
static volatile uint16_t us_5 = 0x0;
static volatile int16_t s_6 = 0x0;
static volatile int16_t s_7 = 0xD962;
static volatile uint16_t us_8 = 0x0;
static volatile int16_t s_9 = 0x0;
volatile uint64_t uli_10 = 0x5EF111CF700889EB;
uint64_t uli_11 = 0xC1DAB4CE867F0DE0;
static int64_t li_12 = 0x1BE9BF138FE70B9E;
static uint32_t ui_13 = 0x0;
int16_t s_14 = 0x2A7A;
static volatile uint8_t uc_15 = 0x0;
volatile uint64_t uli_16 = 0x8569052B43EC3D33;
static volatile int8_t c_17 = 0x1D;
int64_t func_1(int16_t s_18);
uint64_t func_2(uint8_t uc_18, int8_t c_19, uint16_t us_20);
uint32_t func_0();
int64_t func_1(int16_t s_18)
{
  volatile uint16_t us_19 = 0x0;
  volatile int8_t c_20 = 0x22;
  int16_t *ptr_21 = &s_2;
  static volatile int16_t s_22 = 0xAAC8;
  ptr_21 = &s_14;
}

uint64_t func_2(uint8_t uc_18, int8_t c_19, uint16_t us_20)
{
  int32_t *ptr_21 = &i_1;
}

uint32_t func_0()
{
  int16_t *ptr_18 = &s_2;
  static volatile int8_t c_19 = 0xDB;
  int16_t *ptr_20 = &s_2;
  us_8 -= func_1(func_2(uli_10, 0x9D6CD0D6 << us_4, s_7 || (*ptr_20)) & ((0x0FE2870E == uc_15) + (us_5 + 0x0)));
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
  short s_18;
  unsigned uc_18;
  _Bool us_20;
  static volatile uint16_t us_19 = 0x0;
  static int8_t c_20 = 0x22;
  int16_t *ptr_21 = &s_2;
  int16_t s_22 = 0xAAC8;
  ptr_21 = &s_14;
  ptr_21 = &s_14;
  int16_t *ptr_18 = &s_2;
  int16_t *ptr_20 = &s_2;
  us_8 -= func_1(func_2(uli_10, 0x9D6CD0D6 << us_4, s_7 || (*ptr_20)) & ((0x0FE2870E == uc_15) + (us_5 + 0x0)));
  {
    c_20 = uli_11;
    for (uli_10 = 26; uli_10 <= 48; uli_10 += 1)
    {
      static volatile uint32_t ui_18 = 0x78E02ECF;
      int16_t s_19 = 0xD7C6;
      int8_t *ptr_20 = &c_17;
    }

  }
  ((0xC9981161 >> uli_16) != (c_17 && 0x3A)) > ((0xB5 << 0x0) || (us_8 >> uc_15));
  s_6 *= (us_4 &= (s_14 += us_5 > 0x0)) || (i_1 /= (uli_16 += (us_5 ^= li_12)));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

