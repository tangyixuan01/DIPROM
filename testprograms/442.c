#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int64_t li_0 = 0x23DAEFE91FC63811;
uint16_t us_1 = 0x08F8;
static volatile int64_t li_2 = 0x1EA0C11E4E82D6CF;
static volatile uint32_t ui_3 = 0x5806A34A;
int32_t i_4 = 0x2A939435;
volatile uint32_t ui_5 = 0x392CB027;
static volatile uint64_t uli_6 = 0x0400AA4E4026AB93;
static uint64_t uli_7 = 0x841CD4894A032073;
uint8_t uc_8 = 0xD5;
int8_t c_9 = 0x0;
volatile uint32_t ui_10 = 0x8FD23DFB;
int aaa;
int32_t func_0();
int32_t func_0()
{
  static uint64_t uli_11 = 0x4DF4F46733960822;
  uint32_t *ptr_12 = &ui_5;
  ptr_12 = &li_0;
  uc_8 |= (i_4 |= (uli_7 += 0x0));
}

int loop_func()
{
  func_0();
  static volatile uint64_t uli_11 = 0x4DF4F46733960822;
  uint32_t *ptr_12 = &ui_5;
  ptr_12 = &li_0;
  uc_8 |= (i_4 |= (uli_7 += 0x0));
  li_0;
  if ((us_1 > ui_5) <= (uli_7 > ui_10))
  {
    uint8_t uc_11 = 0x0;
  }
  else
  {
    volatile int8_t c_11 = 0x0;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

