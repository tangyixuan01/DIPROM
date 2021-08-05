#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint8_t uc_0 = 0xF3;
volatile int16_t s_1 = 0xDA81;
volatile int32_t i_2 = 0x4E771132;
static volatile uint64_t uli_3 = 0x8468124CED4E164E;
static volatile int8_t c_4 = 0xFD;
int32_t i_5 = 0xBBBCCFFC;
static volatile int16_t s_6 = 0x09F1;
static volatile uint16_t us_7 = 0xDA02;
volatile int8_t c_8 = 0x8C;
static volatile uint64_t uli_9 = 0x8F6C317ED4DC0030;
uint8_t uc_10 = 0x24;
static uint32_t ui_11 = 0xE6167A27;
static volatile uint16_t us_12 = 0x6969;
static volatile int16_t s_13 = 0x7725;
static int32_t i_14 = 0x0;
static volatile uint32_t ui_15 = 0x0;
int32_t func_0();
int32_t func_0()
{
  uint32_t *ptr_16 = &ui_11;
  uint32_t *ptr_17 = &ui_15;
  uint16_t *ptr_18 = &us_12;
  c_8 += (s_6 += (ui_11 ^= (ui_15 |= 0x7D)));
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
  uint32_t *ptr_16 = &ui_11;
  uint32_t *ptr_17 = &ui_15;
  uint16_t *ptr_18 = &us_12;
  c_8 += (s_6 += (ui_11 ^= (ui_15 |= 0x7D)));
  return 0;
  if (ui_11 %= ((s_6 < 0x0) | (0xF7 < s_6)) > ((c_8 %= c_8) + (c_4 == 0x0)))
  {
    uint32_t *ptr_16 = &ui_15;
    uint8_t *ptr_17 = &uc_10;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

