#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
int16_t s_0 = 0x6CB9;
static uint64_t uli_1 = 0xF5D010B4635FB41E;
static volatile uint64_t uli_2 = 0x5E452EE8B92AB1F8;
static volatile uint8_t uc_3 = 0x0;
volatile uint8_t uc_4 = 0x5F;
int8_t c_5 = 0xFB;
volatile int64_t li_6 = 0x0;
volatile uint8_t uc_7 = 0x5F;
volatile uint16_t us_8 = 0x4582;
volatile int64_t li_9 = 0xC0D71CF3D80280C7;
static int32_t i_10 = 0x750C4469;
static volatile uint8_t uc_11 = 0xB7;
uint8_t uc_12 = 0x0;
static uint64_t uli_13 = 0xE9AEC76C9EC6581C;
int64_t li_14 = 0x925FBFD76EEECD76;
static uint16_t us_15 = 0xE1F7;
int8_t func_1(uint64_t uli_16, int32_t i_17, uint16_t us_18);
uint32_t func_2(uint64_t uli_16);
uint64_t func_0();
int8_t func_1(uint64_t uli_16, int32_t i_17, uint16_t us_18)
{
  int32_t *ptr_19 = &i_10;
  volatile int8_t c_20 = 0x0;
  uint64_t *ptr_21 = &uli_16;
}

uint32_t func_2(uint64_t uli_16)
{
  int64_t *ptr_17 = &li_14;
  uc_11 ^= (*ptr_17) & 0x0;
}

uint64_t func_0()
{
  int8_t *ptr_16 = &c_5;
  int32_t *ptr_17 = &i_10;
  static volatile int8_t c_18 = 0x0;
  uint16_t *ptr_19 = &us_15;
  for (uli_13 = 24; uli_13 <= 67; uli_13 += 1)
  {
    uint8_t uc_20 = 0x63;
    int32_t *ptr_21 = &i_10;
    *ptr_21 ^= ((func_1(li_9, 0xDD621253, 0x78) % func_2(uc_20)) < (uli_13 |= (uc_4 |= *ptr_19))) + (((s_0 += 0x0) == (0xDE == uc_3)) && ((0x0 | (*ptr_21)) >= (i_10 << li_14)));
    for (li_9 = -7; li_9 <= 52; li_9 += 1)
    {
      int8_t *ptr_22 = &c_5;
    }

  }

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
  signed i_17;
  _Bool uli_16;
  signed us_18;
  int32_t *ptr_19 = &i_10;
  static volatile int8_t c_20 = 0x0;
  uint64_t *ptr_21 = &uli_16;
  int64_t *ptr_17 = &li_14;
  uc_11 ^= (*ptr_17) & 0x0;
  uc_11 ^= (*ptr_17) & 0x0;
  int8_t *ptr_16 = &c_5;
  static int8_t c_18 = 0x0;
  for (uli_13 = 24; uli_13 <= 67; uli_13 += 1)
  {
    volatile uint8_t uc_20 = 0x63;
    int32_t *ptr_21 = &i_10;
    *ptr_21 ^= ((func_1(li_9, 0xDD621253, 0x78) % func_2(uc_20)) < (uli_13 |= (uc_4 |= *ptr_19))) + (((s_0 += 0x0) == (0xDE == uc_3)) && ((0x0 | (*ptr_21)) >= (i_10 << li_14)));
    for (li_9 = -7; li_9 <= 52; li_9 += 1)
    {
      int8_t *ptr_22 = &c_5;
    }

  }

  return 0;
  for (us_15 = 21; us_15 <= 88; us_15 += 1)
  {
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

