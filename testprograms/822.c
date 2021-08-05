#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int16_t s_0 = 0x700E;
volatile int32_t i_1 = 0x0;
static volatile int16_t s_2 = 0x7C44;
static uint64_t uli_3 = 0x325A409F8A378E52;
static uint64_t uli_4 = 0x27B73E9AAEEA41CA;
int32_t i_5 = 0x0;
volatile int16_t s_6 = 0x02F4;
volatile uint8_t uc_7 = 0x2F;
static volatile int16_t s_8 = 0xCC07;
static volatile uint16_t us_9 = 0x5DD0;
int64_t func_0();
int64_t func_0()
{
  int16_t *ptr_10 = &s_8;
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
  int16_t *ptr_10 = &s_8;
  int var_1782345502 = 0;
  for (; 0;)
  {
    aaa = us_9 + ((uli_4 |= s_2) > func_1(0x1D, 0x0, uc_7));
    for (uli_4 = 2; uli_4 <= 79; uli_4 += 1)
    {
      static volatile int8_t c_10 = 0x21;
      int8_t *ptr_11 = &c_10;
    }

    i_1;
  }

  aaa = i_1;
  uc_7 ^= (s_8 = ((s_2 || uli_4) > (uc_7 = 0x0)) < ((0x5214A43A || s_2) - (uli_3 ^= i_1)));
  return 0x40;
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

