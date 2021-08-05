#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
int16_t s_0 = 0x0;
static volatile uint16_t us_1 = 0x0;
static volatile uint16_t us_2 = 0xBE74;
static volatile uint64_t uli_3 = 0xF7BB9D6B93F2C33D;
static volatile int32_t i_4 = 0x0;
static volatile int32_t i_5 = 0x0;
static int64_t li_6 = 0xF9FA76EE6E619FE0;
static volatile uint16_t us_7 = 0x0;
volatile uint16_t us_8 = 0xAFDD;
uint32_t ui_9 = 0x0;
int8_t c_10 = 0x06;
int aaa;
uint16_t func_0();
uint16_t func_0()
{
  int16_t s_11 = 0x0;
  volatile uint32_t ui_12 = 0x0;
  uint16_t *ptr_13 = &us_7;
  ptr_13 = &us_2;
}

int loop_func()
{
  func_0();
  static volatile int16_t s_11 = 0x0;
  static uint32_t ui_12 = 0x0;
  uint16_t *ptr_13 = &us_7;
  ptr_13 = &us_2;
  0x37;
  for (i_5 = 4; i_5 <= 32; i_5 += 1)
  {
    static volatile int32_t i_11 = 0xECA259C7;
    uint16_t *ptr_12 = &us_1;
    uint16_t *ptr_13 = &us_1;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

