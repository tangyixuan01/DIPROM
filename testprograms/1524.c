#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint64_t uli_0 = 0xFD5D72B123B00CE5;
static volatile int8_t c_1 = 0x17;
static uint32_t ui_2 = 0x0;
uint64_t uli_3 = 0xF57A96694C6BE1D0;
volatile int32_t i_4 = 0x044E945B;
volatile uint16_t us_5 = 0xE2ED;
volatile int8_t c_6 = 0x0;
int8_t c_7 = 0xCE;
static int16_t s_8 = 0x0;
volatile int16_t s_9 = 0x0;
uint16_t func_1();
int8_t func_0();
uint16_t func_1()
{
  static volatile int8_t c_10 = 0x00;
  int16_t *ptr_11 = &s_8;
  int8_t c_12 = 0x5D;
  int8_t *ptr_13 = &c_1;
}

int8_t func_0()
{
  uint64_t *ptr_10 = &uli_3;
  ptr_10 = &uli_0;
  ptr_10 = &uli_0;
  i_4 ^= func_1();
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
  int8_t c_10 = 0x00;
  int16_t *ptr_11 = &s_8;
  static volatile int8_t c_12 = 0x5D;
  int8_t *ptr_13 = &c_1;
  uint64_t *ptr_10 = &uli_3;
  ptr_10 = &uli_0;
  ptr_10 = &uli_0;
  i_4 ^= func_1();
  {
    c_12 = func_2((c_7 == c_6) < (uli_0 /= c_7), c_1, 0xC4);
    uli_0 &= (i_4 += (s_9 |= 0x0) <= (i_4 < ui_2)) >= (0x0 == uli_0);
  }
  i_4 ^= (c_7 /= (i_4 &= s_8 % uli_0) && (uli_3 += 0x348CC1D0 >= 0x0));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

