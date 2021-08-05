#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint32_t ui_0 = 0xF5B5ACC3;
volatile int16_t s_1 = 0x5C89;
int16_t s_2 = 0x8C66;
uint8_t uc_3 = 0x81;
static volatile int8_t c_4 = 0x2C;
static volatile uint64_t uli_5 = 0x9ED44700B2E0E6A0;
volatile uint8_t uc_6 = 0x0;
static volatile int32_t i_7 = 0x8620727A;
int64_t li_8 = 0x275FC96C91F72DDC;
volatile int64_t li_9 = 0xEA560768AD283408;
static volatile uint16_t us_10 = 0x0;
static volatile uint8_t uc_11 = 0x8B;
int aaa;
uint32_t func_0();
uint32_t func_0()
{
  uint8_t *ptr_12 = &uc_3;
  volatile uint32_t ui_13 = 0x863C6CF2;
  uint16_t *ptr_14 = &us_10;
}

int loop_func()
{
  func_0();
  uint8_t *ptr_12 = &uc_3;
  static volatile uint32_t ui_13 = 0x863C6CF2;
  uint16_t *ptr_14 = &us_10;
  ui_13 = c_4;
  uli_5 %= (li_8 = (s_1 = li_9));
  ui_13 = us_10;
  c_4 *= (us_10 & uli_5) | ((li_9) ? (ui_0) : (c_4));
  if ((us_10 >= uc_3) ^ (uc_3 %= li_9))
  {
    int32_t *ptr_12 = &i_7;
    int16_t *ptr_13 = &s_1;
  }
  else
  {
    static volatile int8_t c_12 = 0x85;
    volatile uint32_t ui_13 = 0x10C8CFB7;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

