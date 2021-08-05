#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int64_t li_0 = 0x0;
volatile int8_t c_1 = 0x0;
static volatile int8_t c_2 = 0x0;
static uint32_t ui_3 = 0xE5ABFC94;
uint16_t us_4 = 0xB0CD;
volatile int32_t i_5 = 0x0;
static volatile uint64_t uli_6 = 0xB6CB3B837034219D;
static int32_t i_7 = 0x96CC08CC;
static volatile uint32_t ui_8 = 0xCC372F26;
static int16_t s_9 = 0x91AD;
volatile uint32_t ui_10 = 0xEEAB7313;
volatile uint64_t uli_11 = 0x0;
static uint16_t us_12 = 0xE03A;
static volatile int32_t i_13 = 0x1F5350EE;
uint8_t uc_14 = 0x0;
uint16_t us_15 = 0x5A5F;
volatile uint32_t ui_16 = 0x26017BC5;
int32_t i_17 = 0x0;
static volatile uint64_t uli_18 = 0x0;
int aaa;
int16_t func_0();
int16_t func_0()
{
  int32_t *ptr_19 = &i_13;
  int32_t *ptr_20 = &i_13;
  volatile int8_t c_21 = 0xF8;
  int32_t *ptr_22 = &i_17;
  ptr_22 = ptr_20;
  c_1 -= (ui_10 ^= (uc_14 *= c_1));
  ptr_20 = &uli_11;
  ptr_19 = &i_5;
}

int loop_func()
{
  func_0();
  int32_t *ptr_19 = &i_13;
  int32_t *ptr_20 = &i_13;
  static volatile int8_t c_21 = 0xF8;
  int32_t *ptr_22 = &i_17;
  ptr_22 = ptr_20;
  c_1 -= (ui_10 ^= (uc_14 *= c_1));
  ptr_20 = &uli_11;
  ptr_19 = &i_5;
  return s_9;
  if ((us_12 > 0x0) < (i_7 & us_12))
  {
  }
  else
  {
    int32_t *ptr_19 = &i_13;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

