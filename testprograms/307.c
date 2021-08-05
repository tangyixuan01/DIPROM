#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
int8_t c_0 = 0x99;
static volatile int8_t c_1 = 0x0;
int64_t li_2 = 0x0;
static volatile int64_t li_3 = 0x0;
static volatile uint64_t uli_4 = 0x15FB53D387E10EDE;
volatile int64_t li_5 = 0x4E6D76B6E965F7BF;
volatile int16_t s_6 = 0x2F4B;
static volatile uint64_t uli_7 = 0x0;
static volatile int32_t i_8 = 0x195F39E9;
static volatile int64_t li_9 = 0x0;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  static volatile uint16_t us_10 = 0x0;
}

int loop_func()
{
  func_0();
  static volatile uint16_t us_10 = 0x0;
  us_10 = c_0;
  for (li_5 = 9; li_5 <= 32; li_5 += 1)
  {
    int64_t *ptr_10 = &li_2;
    uint64_t *ptr_11 = &uli_4;
    int64_t *ptr_12 = &li_2;
  }

  for (li_2 = 5; li_2 <= 69; li_2 += 1)
  {
    int64_t *ptr_10 = &li_5;
    uint64_t *ptr_11 = &uli_7;
    volatile int64_t li_12 = 0x0;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

