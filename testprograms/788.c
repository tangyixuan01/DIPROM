#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int32_t i_0 = 0x03BBC130;
static volatile uint32_t ui_1 = 0x0;
static volatile uint32_t ui_2 = 0x0;
static volatile int32_t i_3 = 0x0;
static volatile uint16_t us_4 = 0xF96F;
static volatile int64_t li_5 = 0x221CD561274D20F5;
static volatile uint8_t uc_6 = 0x0;
volatile int64_t li_7 = 0x0;
static volatile int32_t i_8 = 0x0;
static volatile uint64_t uli_9 = 0x0;
static uint16_t us_10 = 0x89D6;
static volatile uint64_t uli_11 = 0x0;
int32_t func_0();
int32_t func_0()
{
  uint64_t *ptr_12 = &uli_9;
  int32_t *ptr_13 = &i_8;
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
  int32_t *ptr_13 = &i_8;
  int var_537812829 = 0;
  for (; 0;)
  {
    aaa = func_1() > (li_5 %= func_2(i_3, 0x0, 0x0, uli_9));
    uc_6 %= ((uc_6 %= us_4 ^ 0x324B5DE8) | ((li_7 <= uli_9) / (0x0 * us_10))) & (((i_3 && us_10) ^ (uli_11 < ui_1)) != ((us_10 < uli_11) != uli_11));
    {
      aaa = li_7;
      if ((uc_6 *= (uc_6 |= ui_2 << uli_11)) - (0x0 != (us_10 *= (i_3 &= uli_11))))
      {
        static volatile int64_t li_12 = 0x833F2795A82CB276;
        int64_t *ptr_13 = &li_7;
        static int32_t i_14 = 0x0;
      }
      else
      {
        int64_t *ptr_12 = &li_7;
        static volatile int32_t i_13 = 0xABF2E210;
        volatile int16_t s_14 = 0x0;
      }

    }
  }

  i_8 &= (uli_9 |= (ui_2 += (i_0 -= 0x0 | uli_9)));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

