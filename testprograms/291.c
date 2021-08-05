#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint8_t uc_0 = 0x11;
static uint16_t us_1 = 0x9288;
static uint32_t ui_2 = 0xB275DD87;
static volatile uint8_t uc_3 = 0x0;
static uint16_t us_4 = 0x0;
static uint32_t ui_5 = 0x0;
volatile uint8_t uc_6 = 0x8A;
static volatile int8_t c_7 = 0x0;
uint8_t uc_8 = 0x0;
volatile int16_t s_9 = 0x0;
int aaa;
uint32_t func_0();
uint32_t func_0()
{
  uint32_t *ptr_10 = &ui_2;
}

int loop_func()
{
  func_0();
  uint32_t *ptr_10 = &ui_2;
  return ui_5;
  for (uc_0 = 21; uc_0 <= 37; uc_0 += 1)
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

