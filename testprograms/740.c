#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint32_t ui_0 = 0xB319D4B7;
static volatile uint64_t uli_1 = 0x0;
uint32_t ui_2 = 0x0;
volatile uint32_t ui_3 = 0x0;
static volatile int8_t c_4 = 0xA7;
static volatile int64_t li_5 = 0x0;
static volatile int16_t s_6 = 0x0031;
volatile int32_t i_7 = 0xD2295422;
static volatile int8_t c_8 = 0x0;
volatile uint8_t uc_9 = 0x0;
static int8_t c_10 = 0x0;
static volatile int16_t s_11 = 0x0;
static uint16_t us_12 = 0x3D19;
static volatile uint64_t uli_13 = 0x0;
static volatile uint64_t uli_14 = 0xCA08DEAF7F391C7A;
static volatile int32_t i_15 = 0x1E548819;
uint64_t func_2();
int8_t func_1();
int64_t func_0();
uint64_t func_2()
{
  uint64_t *ptr_16 = &uli_1;
  uint16_t *ptr_17 = &us_12;
  uint32_t *ptr_18 = &ui_0;
  uint32_t *ptr_19 = &ui_0;
}

int8_t func_1()
{
  uint16_t us_16 = 0xF8C2;
  int16_t *ptr_17 = &s_11;
  int8_t *ptr_18 = &c_8;
  uint8_t *ptr_19 = &uc_9;
  func_2();
}

int64_t func_0()
{
  int64_t *ptr_16 = &li_5;
  static volatile uint16_t us_17 = 0x11A5;
  ui_2 |= (func_1() != ((s_6 && 0x0) * 0x8FFEB7CA)) + (c_10 -= (ui_3 != uli_13) == uli_14);
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
  uint64_t *ptr_16 = &uli_1;
  uint16_t *ptr_17 = &us_12;
  uint32_t *ptr_18 = &ui_0;
  uint32_t *ptr_19 = &ui_0;
  static volatile uint16_t us_16 = 0xF8C2;
  func_2();
  func_2();
  static volatile uint16_t us_17 = 0x11A5;
  ui_2 |= (func_1() != ((s_6 && 0x0) * 0x8FFEB7CA)) + (c_10 -= (ui_3 != uli_13) == uli_14);
  {
    us_16 = (uli_13 += s_6);
    c_4 = uli_14;
  }
  uc_9 += (c_4 |= ((i_7 || c_10) / (s_11 += ui_0)) || (0x81A6 && (i_7 < c_4)));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

