#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint64_t uli_0 = 0x47FB517387C8B9EE;
volatile int32_t i_1 = 0x0;
static volatile int64_t li_2 = 0x9B7EFF333247933E;
static volatile int32_t i_3 = 0x1C2E4D72;
static volatile int32_t i_4 = 0x8AF156F4;
volatile uint32_t ui_5 = 0x785B0EE3;
static volatile uint32_t ui_6 = 0xDEFFC3D3;
static int64_t li_7 = 0x0;
static volatile int64_t li_8 = 0x3DF84ED90425024E;
static volatile uint32_t ui_9 = 0x0;
static volatile uint8_t uc_10 = 0xF0;
static volatile int16_t s_11 = 0x0;
static volatile uint16_t us_12 = 0xF98E;
static volatile uint64_t uli_13 = 0xB63F40955BA5DE32;
static volatile uint64_t uli_14 = 0x4F46B85A1D8984FC;
uint16_t us_15 = 0x0;
static int32_t i_16 = 0x9173642A;
static volatile int64_t li_17 = 0xEB031BB76C4E5D25;
int16_t func_2();
int16_t func_1(uint16_t us_18);
uint8_t func_0();
int16_t func_2()
{
  uint64_t *ptr_18 = &uli_0;
  li_2 -= us_12;
}

int16_t func_1(uint16_t us_18)
{
  int8_t c_19 = 0x6F;
  static uint16_t us_20 = 0xD342;
  static int16_t s_21 = 0x0;
  func_2();
}

uint8_t func_0()
{
  int64_t *ptr_18 = &li_8;
  volatile uint16_t us_19 = 0x0;
  func_1(ui_5);
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
  long us_18;
  uint64_t *ptr_18 = &uli_0;
  li_2 -= us_12;
  volatile int8_t c_19 = 0x6F;
  static volatile uint16_t us_20 = 0xD342;
  static volatile int16_t s_21 = 0x0;
  func_2();
  uint16_t us_19 = 0x0;
  func_1(ui_5);
  int var_3183064988 = 5;
  do
  {
    s_21 = 0xBCD4;
    return ui_5;
    int var_706455700 = -7;
    do
    {
      var_706455700 += 3;
      us_19 = (us_12 - (i_16 != uli_13)) < ((ui_9 %= i_16) != (0x76590DD9 | uli_13));
      li_2 += (((0x0 % uli_14) < (i_4 | li_17)) ^ ((0xAAC0E4A5 & us_12) >> (0xBE2C || li_2))) <= (((i_4 -= 0x0) / (uli_0 * s_11)) == (ui_9 %= uc_10 || 0x0));
      return s_11 = (uli_14 %= us_12 & 0xB0);
      return 0;
    }
    while (var_706455700 < 20);
  }
  while (var_3183064988--);
  li_17 %= li_7;
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

