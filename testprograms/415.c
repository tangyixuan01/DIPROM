#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int8_t c_0 = 0x0;
static volatile uint8_t uc_1 = 0x0;
static volatile int32_t i_2 = 0x72CD48E5;
uint8_t uc_3 = 0xD5;
volatile uint16_t us_4 = 0x704B;
static uint32_t ui_5 = 0x0;
uint32_t ui_6 = 0xA283D1E1;
static volatile uint8_t uc_7 = 0x0;
volatile uint16_t us_8 = 0x3761;
uint32_t ui_9 = 0x2ACE04E4;
static volatile uint64_t uli_10 = 0x64C164436257785A;
static int8_t c_11 = 0xBD;
static volatile int16_t s_12 = 0x7FC8;
volatile uint16_t us_13 = 0x0;
int32_t i_14 = 0xE36B4CF8;
volatile uint64_t uli_15 = 0xA4D1D2CDE7A051F1;
uint8_t uc_16 = 0xC6;
int aaa;
int16_t func_1();
int32_t func_0();
int16_t func_1()
{
  volatile uint16_t us_17 = 0xF4B6;
}

int32_t func_0()
{
  static volatile int32_t i_17 = 0x8908B9A7;
  uc_16 &= (i_17 += ui_6 && 0x0E);
  func_1();
}

int loop_func()
{
  func_0();
  static uint16_t us_17 = 0xF4B6;
  static volatile int32_t i_17 = 0x8908B9A7;
  uc_16 &= (i_17 += ui_6 && 0x0E);
  func_1();
  {
    us_17 = c_11;
    for (uc_16 = 15; uc_16 <= 84; uc_16 += 1)
    {
      static int64_t li_17 = 0x19F54049BAD51980;
      int32_t *ptr_18 = &i_2;
      static volatile int8_t c_19 = 0x0;
    }

  }
  return 0x408598AE;
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

