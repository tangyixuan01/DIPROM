#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0xA2;
static uint64_t uli_1 = 0x0;
uint8_t uc_2 = 0x27;
volatile uint64_t uli_3 = 0x0;
static volatile uint8_t uc_4 = 0x0;
int8_t c_5 = 0x0;
static volatile int8_t c_6 = 0xD5;
static uint16_t us_7 = 0x0;
static volatile uint8_t uc_8 = 0x8D;
volatile uint16_t us_9 = 0x0;
volatile uint16_t us_10 = 0x0;
static volatile int16_t s_11 = 0x0;
static volatile int16_t s_12 = 0x7918;
uint8_t func_1();
int32_t func_0();
uint8_t func_1()
{
  uint16_t *ptr_13 = &us_10;
  int32_t i_14 = 0x0;
}

int32_t func_0()
{
  static uint16_t us_13 = 0x0;
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
  uint16_t *ptr_13 = &us_10;
  static volatile int32_t i_14 = 0x0;
  static volatile uint16_t us_13 = 0x0;
  func_1();
  return 0;
  int var_2779758339 = -6;
  for (; var_2779758339 > 20; var_2779758339 += 2)
  {
    us_13 = (uc_2 |= uli_3 >= uc_0) && func_2(0x0 & 0x0);
    if (((us_9 += uli_3 >= uc_8) != ((c_5 || c_6) - (us_7 == us_7))) == (((us_9 / us_7) * (uc_8 || 0x0)) - uli_1))
    {
      uint8_t *ptr_13 = &uc_0;
      volatile uint16_t us_14 = 0x8473;
      uint8_t uc_15 = 0x77;
    }
    else
    {
    }

    us_13 = (us_9 | (c_6 && 0x0)) >> (0x0 % (uli_3 > uli_3));
    uli_1 ^= (((0x0 && 0x0E0F4D26) - uc_4) >= ((0x64 || s_11) % (0x0 < s_12))) / uli_3;
  }

  uc_0 &= ((c_6 |= c_6 >> c_6) != (s_12 >> (c_6 |= s_12))) || (uli_3 |= (us_9 += 0x0) | (uc_2 != 0x0));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

