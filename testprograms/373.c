#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int16_t s_0 = 0xBD94;
volatile int16_t s_1 = 0x55FF;
int16_t s_2 = 0x8CB5;
static uint8_t uc_3 = 0x3D;
static volatile uint8_t uc_4 = 0xCD;
static volatile uint32_t ui_5 = 0x85C3370C;
volatile uint16_t us_6 = 0x0;
uint64_t uli_7 = 0x0;
static volatile uint64_t uli_8 = 0x0;
static uint64_t uli_9 = 0xB866D71152310818;
int aaa;
uint64_t func_0();
uint64_t func_0()
{
  int16_t *ptr_10 = &s_1;
  uint32_t *ptr_11 = &ui_5;
  s_0 -= (ui_5 = (uc_4 *= 0x15));
}

int loop_func()
{
  func_0();
  int16_t *ptr_10 = &s_1;
  uint32_t *ptr_11 = &ui_5;
  s_0 -= (ui_5 = (uc_4 *= 0x15));
  ui_5;
  if ((s_2 /= ui_5) >= (0x0 + us_6))
  {
    uint8_t *ptr_10 = &uc_3;
    static volatile uint32_t ui_11 = 0xFEA648D2;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

