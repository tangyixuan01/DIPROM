#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint32_t ui_0 = 0x76500AD4;
volatile uint64_t uli_1 = 0x0;
volatile int64_t li_2 = 0x36F44FED20062777;
static uint16_t us_3 = 0x0;
int16_t s_4 = 0x0;
static volatile uint16_t us_5 = 0xBB28;
static volatile uint64_t uli_6 = 0x9DFD3E17DF400462;
volatile uint16_t us_7 = 0x0;
uint8_t uc_8 = 0x2C;
static volatile uint8_t uc_9 = 0x0;
static volatile uint16_t us_10 = 0x0;
int8_t c_11 = 0x0;
int32_t i_12 = 0x66563844;
static volatile int8_t c_13 = 0x34;
volatile int16_t s_14 = 0x0;
volatile uint8_t uc_15 = 0x54;
int8_t func_0();
int8_t func_0()
{
  uint16_t *ptr_16 = &us_5;
  uint16_t *ptr_17 = &us_7;
  uint64_t *ptr_18 = &uli_6;
  int16_t *ptr_19 = &s_4;
  if (s_14)
  {
    volatile int64_t li_20 = 0x0;
    uint16_t *ptr_21 = &us_10;
  }

  ptr_19 = &uli_6;
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
  uint16_t *ptr_16 = &us_5;
  uint16_t *ptr_17 = &us_7;
  uint64_t *ptr_18 = &uli_6;
  int16_t *ptr_19 = &s_4;
  if (s_14)
  {
    static int64_t li_20 = 0x0;
    uint16_t *ptr_21 = &us_10;
  }

  ptr_19 = &uli_6;
  return func_1(0x32E1 != ui_0) || ((0xF6 == uc_9) && (uli_6 != us_7));
  us_3 |= uli_6 | 0x0;
  return 0x7F5557CB;
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

