#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int8_t c_0 = 0xDB;
static uint64_t uli_1 = 0x9E36636E085A401E;
static int64_t li_2 = 0xFF4D9EB91948DD70;
uint16_t us_3 = 0x3AB4;
volatile int16_t s_4 = 0xE61F;
volatile int32_t i_5 = 0x0;
volatile uint8_t uc_6 = 0x0;
static volatile uint64_t uli_7 = 0x19BC2D57524C2896;
int16_t s_8 = 0xA468;
static volatile int16_t s_9 = 0x7F71;
static volatile uint16_t us_10 = 0xE40A;
volatile int8_t c_11 = 0x76;
uint8_t uc_12 = 0x0;
static int8_t c_13 = 0x0;
int32_t func_1(uint32_t ui_14, int32_t i_15, int16_t s_16, uint16_t us_17);
uint8_t func_2(uint64_t uli_14);
uint32_t func_0();
int32_t func_1(uint32_t ui_14, int32_t i_15, int16_t s_16, uint16_t us_17)
{
  static volatile int32_t i_18 = 0xC9E25261;
}

uint8_t func_2(uint64_t uli_14)
{
  static volatile int16_t s_15 = 0x5178;
  int16_t *ptr_16 = &s_4;
  int16_t *ptr_17 = &s_15;
  static volatile int32_t i_18 = 0x58EF02FC;
}

uint32_t func_0()
{
  int16_t *ptr_14 = &s_8;
  uli_7 %= (c_13 += ((*ptr_14 *= c_0) - 0xA2785ED0) << func_1(0x0 & c_13, func_2(0x0), c_0 & uc_6, uc_6));
  if (0x0 << s_9)
  {
    uint64_t *ptr_15 = &uli_1;
    static volatile int8_t c_16 = 0x83;
  }
  else
  {
    int16_t *ptr_15 = &s_8;
    uint16_t *ptr_16 = &us_3;
  }

  uc_12 *= (us_3 |= 0xE6) || ((us_3 |= (c_13 &= li_2)) < ((0x0 * i_5) <= uli_7));
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
  unsigned i_15;
  _Bool s_16;
  int ui_14;
  long uli_14;
  char us_17;
  volatile int32_t i_18 = 0xC9E25261;
  static volatile int16_t s_15 = 0x5178;
  int16_t *ptr_16 = &s_4;
  int16_t *ptr_17 = &s_15;
  int16_t *ptr_14 = &s_8;
  uli_7 %= (c_13 += ((*ptr_14 *= c_0) - 0xA2785ED0) << func_1(0x0 & c_13, func_2(0x0), c_0 & uc_6, uc_6));
  if (0x0 << s_9)
  {
    uint64_t *ptr_15 = &uli_1;
    static int8_t c_16 = 0x83;
  }
  else
  {
    int16_t *ptr_15 = &s_8;
    uint16_t *ptr_16 = &us_3;
  }

  uc_12 *= (us_3 |= 0xE6) || ((us_3 |= (c_13 &= li_2)) < ((0x0 * i_5) <= uli_7));
  c_13 -= (s_9 |= i_5 && li_2);
  for (s_4 = 5; s_4 <= 33; s_4 += 1)
  {
    uint64_t *ptr_14 = &uli_7;
    int16_t *ptr_15 = &s_4;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

