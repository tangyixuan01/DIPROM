#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x24;
volatile int32_t i_1 = 0x21753BCD;
uint8_t uc_2 = 0x50;
static volatile int8_t c_3 = 0x75;
int32_t i_4 = 0xA43A17DA;
static int8_t c_5 = 0x0;
uint64_t uli_6 = 0x0;
static volatile uint16_t us_7 = 0xDA61;
static volatile uint32_t ui_8 = 0x0;
static volatile int64_t li_9 = 0x0;
static volatile uint8_t uc_10 = 0x0;
static volatile uint64_t uli_11 = 0x0;
static volatile int8_t c_12 = 0x6D;
uint64_t func_1(uint16_t us_13, uint32_t ui_14);
int16_t func_2(uint64_t uli_13, uint16_t us_14, int16_t s_15);
int16_t func_0();
uint64_t func_1(uint16_t us_13, uint32_t ui_14)
{
  int64_t li_15 = 0x0;
  int32_t *ptr_16 = &i_1;
  uint64_t *ptr_17 = &uli_6;
  static uint8_t uc_18 = 0xFE;
  ptr_16 = &i_4;
}

int16_t func_2(uint64_t uli_13, uint16_t us_14, int16_t s_15)
{
  static volatile int8_t c_16 = 0x0;
  static volatile uint64_t uli_17 = 0x05F55E983B896953;
}

int16_t func_0()
{
  uint64_t *ptr_13 = &uli_11;
  int64_t li_14 = 0x75889791D0EF1F3C;
  c_3 -= 0x0 <= func_1(func_2(uli_11 != 0x29, 0x0 && li_14, 0x0 ^ uc_2), (0xCD34ADFF << 0xDA) || (uc_10 && c_3));
  uli_11 += uli_11;
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
  long s_15;
  long ui_14;
  unsigned uli_13;
  unsigned us_13;
  signed us_14;
  static int64_t li_15 = 0x0;
  int32_t *ptr_16 = &i_1;
  uint64_t *ptr_17 = &uli_6;
  static uint8_t uc_18 = 0xFE;
  ptr_16 = &i_4;
  ptr_16 = &i_4;
  volatile int8_t c_16 = 0x0;
  static uint64_t uli_17 = 0x05F55E983B896953;
  uint64_t *ptr_13 = &uli_11;
  static int64_t li_14 = 0x75889791D0EF1F3C;
  c_3 -= 0x0 <= func_1(func_2(uli_11 != 0x29, 0x0 && li_14, 0x0 ^ uc_2), (0xCD34ADFF << 0xDA) || (uc_10 && c_3));
  uli_11 += uli_11;
  return (c_12 -= li_9 && c_3) | (uli_6 &= us_7 && c_5);
  i_1 &= (uc_10 |= li_9) && (ui_8 *= (i_4 *= c_3 >= c_3));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

