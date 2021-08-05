#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint32_t ui_0 = 0x7E206101;
volatile uint16_t us_1 = 0x4194;
static volatile int32_t i_2 = 0x8D8B237B;
static uint8_t uc_3 = 0x0;
static volatile uint32_t ui_4 = 0x3B1A93BF;
volatile uint32_t ui_5 = 0x0884A186;
uint32_t ui_6 = 0x0;
static uint16_t us_7 = 0xB503;
int8_t c_8 = 0x0;
volatile int8_t c_9 = 0x03;
int aaa;
int16_t func_0();
int16_t func_0()
{
  uint32_t *ptr_10 = &ui_4;
}

int loop_func()
{
  func_0();
  uint32_t *ptr_10 = &ui_4;
  aaa = 0x0;
  for (ui_5 = 19; ui_5 <= 61; ui_5 += 1)
  {
    uint32_t *ptr_10 = &ui_5;
    static volatile int8_t c_11 = 0x5A;
  }

  for (i_2 = -8; i_2 <= 77; i_2 += 1)
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

