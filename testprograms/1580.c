#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int8_t c_0 = 0x42;
volatile int8_t c_1 = 0xBB;
static int8_t c_2 = 0x87;
int64_t li_3 = 0x288E26315EAFD708;
static volatile uint64_t uli_4 = 0x6B2F2DA352AB8C30;
volatile uint16_t us_5 = 0x7E7C;
int32_t i_6 = 0xB98C2FC8;
static volatile uint16_t us_7 = 0x7DC2;
int8_t c_8 = 0x4B;
static int32_t i_9 = 0x0;
uint32_t func_0();
uint32_t func_0()
{
  static uint32_t ui_10 = 0x0;
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
  uint32_t ui_10 = 0x0;
  {
    ui_10 = func_1();
    if (((i_6 |= (c_2 += us_7)) >= func_2(uli_4, li_3 & c_1, li_3 == c_0)) << 0xC8)
    {
      uint64_t *ptr_10 = &uli_4;
    }
    else
    {
    }

  }
  i_9 *= (uli_4 -= i_6);
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

