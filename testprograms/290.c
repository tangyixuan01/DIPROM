#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint16_t us_0 = 0xC8AD;
static volatile uint32_t ui_1 = 0xECD5630B;
static volatile uint64_t uli_2 = 0x74124EDEECE9026C;
static volatile int16_t s_3 = 0x0;
static int16_t s_4 = 0x98B6;
volatile uint32_t ui_5 = 0x0;
volatile uint8_t uc_6 = 0xD1;
int16_t s_7 = 0x5B69;
volatile uint8_t uc_8 = 0x77;
static volatile uint64_t uli_9 = 0x1087C27610EC7BE0;
int8_t c_10 = 0x12;
volatile uint64_t uli_11 = 0xD5F787E7DF75647D;
static int16_t s_12 = 0xE945;
static volatile int32_t i_13 = 0x0;
static volatile uint32_t ui_14 = 0xD7FCDD1D;
static volatile int32_t i_15 = 0x42112868;
volatile int32_t i_16 = 0x67540994;
static int32_t i_17 = 0x195163E7;
int aaa;
int64_t func_0();
int64_t func_0()
{
  static volatile int16_t s_18 = 0x0;
  static volatile int32_t i_19 = 0x5293995A;
  uint64_t *ptr_20 = &uli_9;
}

int loop_func()
{
  func_0();
  static volatile int16_t s_18 = 0x0;
  static volatile int32_t i_19 = 0x5293995A;
  uint64_t *ptr_20 = &uli_9;
  if (s_4)
  {
    us_0 *= (s_7 /= uli_11) & ((ui_14) ? (s_3) : (s_7));
    {
      s_18 = c_10;
      return s_12;
    }
  }

  us_0 ^= (ui_5 ^= 0x7E) != (s_3 ^ 0x47);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

