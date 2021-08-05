#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
int8_t c_0 = 0x98;
uint32_t ui_1 = 0x11EDF721;
uint32_t ui_2 = 0xCED1AA3F;
int32_t i_3 = 0x0;
static uint32_t ui_4 = 0x0;
static volatile int64_t li_5 = 0x6650E28037D3EF4B;
static volatile uint32_t ui_6 = 0x9224C530;
static volatile uint64_t uli_7 = 0x0;
volatile uint16_t us_8 = 0xA2BF;
static volatile int16_t s_9 = 0x0;
volatile int16_t s_10 = 0x9517;
volatile int8_t c_11 = 0x0;
static volatile int64_t li_12 = 0x0;
static uint16_t us_13 = 0xD5DF;
static volatile uint8_t uc_14 = 0x4C;
uint8_t uc_15 = 0x55;
static int8_t c_16 = 0x0;
uint8_t func_0();
uint8_t func_0()
{
  int32_t *ptr_17 = &i_3;
  volatile int64_t li_18 = 0xB880D80440D91078;
  for (*ptr_17 = 16; (*ptr_17) <= 81; *ptr_17 += 1)
  {
    ptr_17 = &li_12;
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
  int32_t *ptr_17 = &i_3;
  static volatile int64_t li_18 = 0xB880D80440D91078;
  for (*ptr_17 = 16; (*ptr_17) <= 81; *ptr_17 += 1)
  {
    ptr_17 = &li_12;
  }

  L_3645651519:
  i_3 += (c_11 *= 0xBA) ^ (c_0 &= 0x0);

  li_18 = ((s_10 = 0x4F2E) > (us_8 /= 0x0)) <= (0x1DFE >> (uli_7 != ui_6));
  if ((ui_1 |= (ui_1 += s_9) && (li_12 || uli_7)) >= (((0x0 + c_16) * func_1(uc_14, 0xA8, 0x7F, 0x0)) / i_3))
  {
  }

  func_2();
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

