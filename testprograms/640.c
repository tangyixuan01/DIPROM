#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0xBF;
static uint32_t ui_1 = 0x0;
volatile uint32_t ui_2 = 0x55D02DAF;
static volatile int8_t c_3 = 0x0;
static volatile int64_t li_4 = 0x0;
static volatile int8_t c_5 = 0xF9;
static volatile uint32_t ui_6 = 0xAB8B61B1;
static int8_t c_7 = 0xB5;
uint8_t uc_8 = 0x0;
static volatile uint16_t us_9 = 0x1DBB;
static uint32_t ui_10 = 0x5B95A8F7;
volatile uint64_t uli_11 = 0x0;
static volatile uint16_t us_12 = 0x499F;
volatile int16_t s_13 = 0x75F9;
static volatile int64_t li_14 = 0x777334E8F7D9FC1F;
static int64_t li_15 = 0x0;
volatile int64_t li_16 = 0x0;
uint32_t ui_17 = 0x0;
uint16_t func_0();
uint16_t func_0()
{
  uint32_t *ptr_18 = &ui_10;
  uint64_t *ptr_19 = &uli_11;
  int8_t *ptr_20 = &c_5;
  volatile int8_t c_21 = 0x9F;
  ptr_19 = &li_14;
  ptr_19 = &li_15;
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
  uint32_t *ptr_18 = &ui_10;
  uint64_t *ptr_19 = &uli_11;
  int8_t *ptr_20 = &c_5;
  static volatile int8_t c_21 = 0x9F;
  ptr_19 = &li_14;
  ptr_19 = &li_15;
  c_21 = func_1(0x0 && (0x5899BEC9 >= ui_2), (uli_11 %= c_7) && (uc_0 = c_7), (c_7 & li_4) == (c_5 += 0x94), (s_13 | li_16) + (ui_2 = uc_0));
  for (us_9 = 2; us_9 <= 65; us_9 += 1)
  {
    uint32_t *ptr_18 = &ui_10;
    volatile int8_t c_19 = 0x1C;
    static volatile uint8_t uc_20 = 0x0;
  }

  {
    c_21 = ((0x69 != ui_1) >= (li_4 > 0x0)) > (uli_11 += (li_16 -= 0x0));
    us_9 /= ((li_14 ^= c_5 & uli_11) | (ui_2 ^= (us_9 &= 0x0))) || ((c_7 %= 0x784B << li_15) >= ui_17);
  }
  (uc_0 |= 0x0 & li_14) && (uc_8 && (ui_1 /= 0x0));
  for (ui_2 = 19; ui_2 <= 32; ui_2 += 1)
  {
    int16_t *ptr_18 = &s_13;
    static volatile uint8_t uc_19 = 0x81;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

