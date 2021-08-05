#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint8_t uc_0 = 0xA8;
volatile uint16_t us_1 = 0x0;
static int32_t i_2 = 0xB192532E;
int32_t i_3 = 0x0;
int32_t i_4 = 0x0AA13123;
uint8_t uc_5 = 0x32;
static volatile uint16_t us_6 = 0xB627;
static volatile int8_t c_7 = 0x0;
volatile int8_t c_8 = 0xFE;
static volatile int32_t i_9 = 0x0;
static int32_t i_10 = 0x0;
static volatile uint64_t uli_11 = 0x5F3F0602A19D44BF;
int aaa;
int16_t func_0();
int16_t func_0()
{
  static volatile uint64_t uli_12 = 0x0;
  volatile int64_t li_13 = 0xCFE60744CF36DA19;
  uint64_t *ptr_14 = &uli_12;
  int64_t li_15 = 0x0;
}

int loop_func()
{
  func_0();
  uint64_t uli_12 = 0x0;
  volatile int64_t li_13 = 0xCFE60744CF36DA19;
  uint64_t *ptr_14 = &uli_12;
  int64_t li_15 = 0x0;
  li_15 = 0xF99E;
  if (((c_8) ? (c_8) : (uc_5)) ? (0x76B5C61C && i_2) : (uc_5 == 0x31))
  {
    volatile uint8_t uc_12 = 0x9F;
    int32_t *ptr_13 = &i_2;
    uint8_t *ptr_14 = &uc_5;
  }

  return 0;
  i_2 %= (uc_5 & i_4) + (i_4 || uc_0);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

