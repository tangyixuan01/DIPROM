#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint16_t us_0 = 0x9929;
int32_t i_1 = 0x0;
volatile uint16_t us_2 = 0x839D;
static volatile uint8_t uc_3 = 0xD9;
static volatile int32_t i_4 = 0x0;
static int32_t i_5 = 0xAF919154;
static uint16_t us_6 = 0x1CA3;
static uint32_t ui_7 = 0x79EFC7CE;
static volatile int64_t li_8 = 0x73BCC5B5647B8ABA;
volatile int64_t li_9 = 0xDB4442319FF08633;
volatile int16_t s_10 = 0x8D5E;
static int16_t s_11 = 0x0;
static volatile uint8_t uc_12 = 0x0;
volatile int64_t li_13 = 0x4CA27E6C0ADA9CA2;
int16_t s_14 = 0x55CE;
static volatile int16_t s_15 = 0xC4D6;
uint64_t uli_16 = 0xB3F5574C3460EFC8;
int aaa;
int32_t func_0();
int32_t func_0()
{
  static uint16_t us_17 = 0xEE04;
  li_8 ^= (0x223C == s_14) >= (us_2 /= li_9);
}

int loop_func()
{
  func_0();
  volatile uint16_t us_17 = 0xEE04;
  li_8 ^= (0x223C == s_14) >= (us_2 /= li_9);
  int var_3479504036 = -2;
  do
  {
    var_3479504036 += 4;
    us_17 = 0x0;
    li_8 |= (ui_7 &= (li_8 = li_8));
    0x0AD6;
    uc_12 |= ((us_2) ? (uc_3) : (uc_12)) >> (i_4 ^= s_10);
  }
  while (var_3479504036 < 20);
  for (s_11 = 21; s_11 <= 65; s_11 += 1)
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

