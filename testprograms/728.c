#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint16_t us_0 = 0x6882;
static volatile int16_t s_1 = 0x95CD;
static volatile int8_t c_2 = 0x0;
static volatile uint8_t uc_3 = 0x0;
static volatile uint64_t uli_4 = 0x9833A3EE2F94CCB2;
static int32_t i_5 = 0x478DC4B5;
uint16_t us_6 = 0xAA23;
volatile uint16_t us_7 = 0x0;
static int64_t li_8 = 0x0;
static uint8_t uc_9 = 0xBC;
static volatile int32_t i_10 = 0x000B25F6;
static volatile int32_t i_11 = 0x48CFD738;
static uint8_t uc_12 = 0xB4;
static int32_t i_13 = 0x0;
static volatile uint8_t uc_14 = 0x7C;
uint8_t uc_15 = 0x0;
static int8_t c_16 = 0x0;
static volatile uint16_t us_17 = 0xDD6C;
uint16_t us_18 = 0x37AF;
int16_t func_0();
int16_t func_0()
{
  int32_t *ptr_19 = &i_13;
  ptr_19 = &uli_4;
  *ptr_19 &= us_6 & 0x0443;
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
  int32_t *ptr_19 = &i_13;
  ptr_19 = &uli_4;
  *ptr_19 &= us_6 & 0x0443;
  return 0;
  uli_4 = (s_1 |= func_1(0x0, 0x0, us_0 & i_5, i_10 * us_6) * (i_13 %= (i_10 %= us_17)));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

