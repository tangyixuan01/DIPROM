#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x0;
static uint32_t ui_1 = 0x0;
volatile int16_t s_2 = 0x082B;
static uint64_t uli_3 = 0x68A6C29E1427E5E2;
static volatile int64_t li_4 = 0xC06948D40FF0158B;
static volatile uint16_t us_5 = 0x0;
static volatile uint32_t ui_6 = 0x2E9567A4;
uint8_t uc_7 = 0x65;
volatile int8_t c_8 = 0x0;
static volatile uint64_t uli_9 = 0x4C05BF5C4D7F1544;
volatile uint16_t us_10 = 0x9943;
static volatile uint32_t ui_11 = 0x0;
int8_t func_0();
int8_t func_0()
{
  uint64_t *ptr_12 = &uli_9;
  uint64_t *ptr_13 = &uli_3;
  static volatile int32_t i_14 = 0x0;
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
  uint64_t *ptr_12 = &uli_9;
  uint64_t *ptr_13 = &uli_3;
  static int32_t i_14 = 0x0;
  {
    i_14 = func_1(func_2(us_10, ui_11), uc_0 ^ 0xB1) & ((uli_9 && 0xF8) / (uli_3 | 0x0));
    for (ui_11 = 27; ui_11 <= 37; ui_11 += 1)
    {
      uint64_t *ptr_12 = &uli_3;
      static volatile int8_t c_13 = 0x0;
    }

  }
  {
    i_14 = (us_10 *= uli_9 + ui_1) >> li_4;
    for (li_4 = 1; li_4 <= 33; li_4 += 1)
    {
      uint32_t *ptr_12 = &ui_11;
      int8_t c_13 = 0x4F;
    }

  }
  if ((s_2 ^= (us_10 = uc_0) / (ui_1 %= 0x91)) < ((uli_9 ^= (li_4 += 0x93B8)) ^ ((us_5 >= ui_11) && (0xA63AE01A % c_8))))
  {
    static uint8_t uc_12 = 0x0;
    uint32_t *ptr_13 = &ui_11;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

