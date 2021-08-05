#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint64_t uli_0 = 0x0;
static uint64_t uli_1 = 0x0A411BB2BB9C9EEA;
static int32_t i_2 = 0x0;
static volatile int32_t i_3 = 0xA40E2529;
static volatile int64_t li_4 = 0x9EBDFC8AF358FE6D;
volatile int8_t c_5 = 0xFD;
static volatile int8_t c_6 = 0x0;
static uint8_t uc_7 = 0x0;
static int8_t c_8 = 0x6A;
static volatile int32_t i_9 = 0x0;
volatile uint16_t us_10 = 0x0;
int8_t func_2(uint8_t uc_11, int16_t s_12);
int64_t func_1(int32_t i_11, int32_t i_12);
int32_t func_0();
int8_t func_2(uint8_t uc_11, int16_t s_12)
{
  int32_t *ptr_13 = &i_3;
  uint64_t *ptr_14 = &uli_0;
  int8_t *ptr_15 = &c_5;
  static uint32_t ui_16 = 0x47DA2AC0;
}

int64_t func_1(int32_t i_11, int32_t i_12)
{
  uint64_t *ptr_13 = &uli_1;
  static volatile int32_t i_14 = 0x7E05147F;
  ptr_13 = &li_4;
  for (c_5 = 29; c_5 <= 67; c_5 += 1)
  {
    int32_t *ptr_15 = &i_2;
    uli_1 += (uli_0 ^= (0x0B - 0xEAA8) & ((*ptr_15) != (*ptr_13))) - ((i_11 |= uli_0 + (*ptr_13)) >= (*ptr_13 += func_2(i_11, 0xF90B311B)));
    i_3 &= (i_3 /= 0x22 != (uli_0 >= i_2)) != (((uli_1 || 0x0) || (uc_7 >= us_10)) - ((c_5 && i_3) & 0x7A));
  }

}

int32_t func_0()
{
  static uint8_t uc_11 = 0x38;
  uli_0 %= (uli_0 &= (c_8 | uli_0) > (uc_7 == uc_11)) + (0x0 < func_1(i_3 &= uli_1, 0x0 - uli_0));
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
  long i_11;
  short i_12;
  signed s_12;
  short uc_11;
  int32_t *ptr_13 = &i_3;
  uint64_t *ptr_14 = &uli_0;
  int8_t *ptr_15 = &c_5;
  static volatile uint32_t ui_16 = 0x47DA2AC0;
  static volatile int32_t i_14 = 0x7E05147F;
  ptr_13 = &li_4;
  for (c_5 = 29; c_5 <= 67; c_5 += 1)
  {
    int32_t *ptr_15 = &i_2;
    uli_1 += (uli_0 ^= (0x0B - 0xEAA8) & ((*ptr_15) != (*ptr_13))) - ((i_11 |= uli_0 + (*ptr_13)) >= (*ptr_13 += func_2(i_11, 0xF90B311B)));
    i_3 &= (i_3 /= 0x22 != (uli_0 >= i_2)) != (((uli_1 || 0x0) || (uc_7 >= us_10)) - ((c_5 && i_3) & 0x7A));
  }

  ptr_13 = &li_4;
  for (c_5 = 29; c_5 <= 67; c_5 += 1)
  {
    int32_t *ptr_15 = &i_2;
    uli_1 += (uli_0 ^= (0x0B - 0xEAA8) & ((*ptr_15) != (*ptr_13))) - ((i_11 |= uli_0 + (*ptr_13)) >= (*ptr_13 += func_2(i_11, 0xF90B311B)));
    i_3 &= (i_3 /= 0x22 != (uli_0 >= i_2)) != (((uli_1 || 0x0) || (uc_7 >= us_10)) - ((c_5 && i_3) & 0x7A));
  }

  uli_0 %= (uli_0 &= (c_8 | uli_0) > (uc_7 == uc_11)) + (0x0 < func_1(i_3 &= uli_1, 0x0 - uli_0));
  return i_9;
  for (uc_7 = 6; uc_7 <= 34; uc_7 += 1)
  {
    int32_t *ptr_11 = &i_2;
    volatile uint8_t uc_12 = 0xC5;
    static volatile int8_t c_13 = 0xA5;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

