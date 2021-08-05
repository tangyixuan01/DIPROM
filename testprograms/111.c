#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int8_t c_0 = 0x90;
static int32_t i_1 = 0xB04E4F1E;
static uint32_t ui_2 = 0x0;
volatile int32_t i_3 = 0x0;
static uint32_t ui_4 = 0x0;
static int32_t i_5 = 0x03E45CFD;
volatile int16_t s_6 = 0x647A;
volatile uint32_t ui_7 = 0xB91F82D5;
volatile int64_t li_8 = 0x0;
static volatile int32_t i_9 = 0x0;
volatile uint8_t uc_10 = 0x69;
static int32_t i_11 = 0xD11DEB45;
int aaa;
int16_t func_1();
int16_t func_0();
int16_t func_1()
{
  int32_t *ptr_12 = &i_11;
  static uint16_t us_13 = 0x0;
}

int16_t func_0()
{
  static volatile uint64_t uli_12 = 0x0;
  for (c_0 = 4; c_0 <= 53; c_0 += 1)
  {
    int16_t *ptr_13 = &s_6;
    uli_12 = (i_3 >> li_8) + (0x5238331D | uli_12);
  }

  func_1();
  c_0 ^= (s_6 |= li_8 + 0x9F126B5E);
  for (i_5 = -6; i_5 <= 47; i_5 += 1)
  {
    static int64_t li_13 = 0x0;
    static volatile uint8_t uc_14 = 0x07;
    static volatile int16_t s_15 = 0x2342;
  }

}

int loop_func()
{
  func_0();
  int32_t *ptr_12 = &i_11;
  static uint16_t us_13 = 0x0;
  volatile uint64_t uli_12 = 0x0;
  for (c_0 = 4; c_0 <= 53; c_0 += 1)
  {
    int16_t *ptr_13 = &s_6;
    uli_12 = (i_3 >> li_8) + (0x5238331D | uli_12);
  }

  func_1();
  c_0 ^= (s_6 |= li_8 + 0x9F126B5E);
  for (i_5 = -6; i_5 <= 47; i_5 += 1)
  {
    int64_t li_13 = 0x0;
    static volatile uint8_t uc_14 = 0x07;
    static int16_t s_15 = 0x2342;
  }

  0x32;
  ui_4 = (c_0 ^= i_9 >= i_11);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

