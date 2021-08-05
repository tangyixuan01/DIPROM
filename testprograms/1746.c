#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint32_t ui_0 = 0xB3DF3023;
static volatile uint32_t ui_1 = 0x0;
static volatile uint8_t uc_2 = 0x0;
static volatile uint16_t us_3 = 0xC9B4;
volatile uint8_t uc_4 = 0xC2;
static volatile int8_t c_5 = 0x0;
static volatile uint16_t us_6 = 0x0;
static volatile uint32_t ui_7 = 0x0B8CE6B1;
static volatile int64_t li_8 = 0x0;
static volatile int32_t i_9 = 0x6ED1A9A5;
static volatile uint32_t ui_10 = 0x0;
static volatile int32_t i_11 = 0x0;
static uint32_t ui_12 = 0x0;
static volatile uint64_t uli_13 = 0x0DB183D698706B3C;
volatile uint8_t uc_14 = 0xD4;
static volatile int16_t s_15 = 0x973E;
uint16_t func_1();
uint8_t func_0();
uint16_t func_1()
{
  static uint8_t uc_16 = 0x0D;
  uint8_t *ptr_17 = &uc_4;
  ptr_17 = &ui_10;
  for (us_6 = 1; us_6 <= 64; us_6 += 1)
  {
    int32_t *ptr_18 = &i_9;
    static volatile int16_t s_19 = 0x0;
  }

}

uint8_t func_0()
{
  static volatile int32_t i_16 = 0x0;
  static volatile uint32_t ui_17 = 0x0;
  static volatile uint64_t uli_18 = 0x0;
  int64_t *ptr_19 = &li_8;
  func_1();
  i_11 ^= uc_14;
  lbl16B6697F:
  for (uli_13 = 2; uli_13 <= 59; uli_13 += 1)
  {
    ptr_19 = &uli_18;
  }


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
  uint8_t uc_16 = 0x0D;
  uint8_t *ptr_17 = &uc_4;
  ptr_17 = &ui_10;
  for (us_6 = 1; us_6 <= 64; us_6 += 1)
  {
    int32_t *ptr_18 = &i_9;
    static volatile int16_t s_19 = 0x0;
  }

  volatile int32_t i_16 = 0x0;
  static uint32_t ui_17 = 0x0;
  static volatile uint64_t uli_18 = 0x0;
  int64_t *ptr_19 = &li_8;
  func_1();
  i_11 ^= uc_14;
  lbl16B6697F:
  for (uli_13 = 2; uli_13 <= 59; uli_13 += 1)
  {
    ptr_19 = &uli_18;
  }


  i_16 = (i_9 += 0x0 & uc_4) ^ (uc_4 -= (ui_0 /= ui_12));
  us_3 &= (ui_1 -= uli_13) <= ((func_2(uc_4, 0x0, 0x0) * (ui_12 %= 0x0)) / us_6);
  uc_16 = (uc_2 -= ui_0 & uc_14) >= ((ui_10 / ui_7) >> (ui_1 ^= i_9));
  us_3 = (i_9 %= (uc_2 != (uc_2 && 0x7A03)) - (i_9 % (c_5 && 0x6D52)));
  uc_14 ^= (i_9 /= c_5);
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

