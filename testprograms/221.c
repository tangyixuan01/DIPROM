#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int16_t s_0 = 0xDD1B;
volatile int8_t c_1 = 0xE0;
volatile int16_t s_2 = 0x0;
uint8_t uc_3 = 0xA8;
uint8_t uc_4 = 0xE7;
volatile uint64_t uli_5 = 0xA17CEC0A9BF78021;
volatile uint32_t ui_6 = 0x1F32BDA5;
static volatile int8_t c_7 = 0x0;
static int32_t i_8 = 0x469C2883;
volatile int16_t s_9 = 0xE186;
static volatile int16_t s_10 = 0x0;
int aaa;
int32_t func_0();
int32_t func_0()
{
  int32_t i_11 = 0x25D5D580;
  int16_t *ptr_12 = &s_2;
  s_2 *= (uli_5 == 0x0) / (uc_3 -= i_11);
  ptr_12 = &i_11;
}

int loop_func()
{
  func_0();
  volatile int32_t i_11 = 0x25D5D580;
  int16_t *ptr_12 = &s_2;
  s_2 *= (uli_5 == 0x0) / (uc_3 -= i_11);
  ptr_12 = &i_11;
  {
    i_11 = ui_6;
    for (c_7 = 8; c_7 <= 75; c_7 += 1)
    {
      static uint16_t us_11 = 0x172D;
      int32_t *ptr_12 = &i_8;
    }

  }
  if ((uc_4 % s_10) == (c_1 > s_2))
  {
    static volatile uint8_t uc_11 = 0xD4;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

