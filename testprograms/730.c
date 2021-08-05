#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int32_t i_0 = 0x29F68520;
static volatile uint32_t ui_1 = 0x0;
static volatile int32_t i_2 = 0x072CE000;
static volatile uint64_t uli_3 = 0x0;
volatile uint64_t uli_4 = 0x47304F1690D15F1A;
static int32_t i_5 = 0xCC4E93E9;
static volatile uint16_t us_6 = 0xA22E;
volatile uint8_t uc_7 = 0xED;
int32_t i_8 = 0x3D00E50F;
static volatile int8_t c_9 = 0xCC;
static volatile uint8_t uc_10 = 0xB2;
uint8_t func_0();
uint8_t func_0()
{
  uint64_t *ptr_11 = &uli_3;
  static int8_t c_12 = 0x3F;
  static volatile uint16_t us_13 = 0x6FB3;
  int32_t i_14 = 0x0;
  i_5 -= i_0;
  if (ui_1 |= (*ptr_11 ^= (i_8 ^= 0x0 & i_14)))
  {
    uint8_t *ptr_15 = &uc_7;
    static int32_t i_16 = 0x8267D6FC;
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
  uint64_t *ptr_11 = &uli_3;
  static volatile int8_t c_12 = 0x3F;
  static uint16_t us_13 = 0x6FB3;
  int32_t i_14 = 0x0;
  i_5 -= i_0;
  if (ui_1 |= (*ptr_11 ^= (i_8 ^= 0x0 & i_14)))
  {
    uint8_t *ptr_15 = &uc_7;
    int32_t i_16 = 0x8267D6FC;
  }

  return ui_1 || (ui_1 += (uc_10 |= i_0));
  uli_3 ^= (i_5 = (i_8 %= (uli_4 *= us_6) + func_1()));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

