#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int32_t i_0 = 0xE1D5E083;
volatile uint32_t ui_1 = 0x0;
static volatile uint32_t ui_2 = 0x59052BE1;
int32_t i_3 = 0x89428554;
static volatile uint32_t ui_4 = 0x5A94B178;
static volatile uint32_t ui_5 = 0x2A6208DE;
static volatile uint8_t uc_6 = 0x0;
volatile int16_t s_7 = 0x3E3B;
static volatile uint16_t us_8 = 0xF0C4;
int16_t s_9 = 0x0;
static volatile int8_t c_10 = 0x70;
static volatile uint32_t ui_11 = 0xCF6216AF;
static volatile int32_t i_12 = 0x8E5BC96F;
volatile int16_t s_13 = 0xFEAA;
int32_t i_14 = 0xFB2D7FCD;
uint8_t uc_15 = 0x0;
volatile int32_t i_16 = 0x0;
static volatile uint32_t ui_17 = 0x057513E7;
static volatile uint16_t us_18 = 0x0;
int aaa;
int8_t func_1();
int8_t func_0();
int8_t func_1()
{
  uint16_t *ptr_19 = &us_18;
  uint8_t *ptr_20 = &uc_6;
  uint8_t uc_21 = 0x0;
  uint16_t us_22 = 0x0;
}

int8_t func_0()
{
  static volatile int64_t li_19 = 0x0;
  uint64_t uli_20 = 0x0;
  int64_t li_21 = 0xDBFC2BFC7D802364;
  int16_t *ptr_22 = &s_9;
  i_16 += func_1();
}

int loop_func()
{
  func_0();
  uint16_t *ptr_19 = &us_18;
  uint8_t *ptr_20 = &uc_6;
  volatile uint8_t uc_21 = 0x0;
  uint16_t us_22 = 0x0;
  static volatile int64_t li_19 = 0x0;
  static volatile uint64_t uli_20 = 0x0;
  int64_t li_21 = 0xDBFC2BFC7D802364;
  int16_t *ptr_22 = &s_9;
  i_16 += func_1();
  {
    li_21 = 0xE750903B;
    if ((i_14 += 0x0) != (us_8 <= 0x26F6))
    {
      static volatile uint32_t ui_19 = 0x7568824C;
    }

  }
  i_16 %= (i_3 &= (ui_1 = i_3));
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

