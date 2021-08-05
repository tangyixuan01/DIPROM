#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint16_t us_0 = 0x0;
static uint16_t us_1 = 0x0;
static int8_t c_2 = 0x19;
uint16_t us_3 = 0xCEBA;
uint16_t us_4 = 0x8FAE;
volatile uint16_t us_5 = 0x1A01;
static int16_t s_6 = 0x6F39;
static volatile uint32_t ui_7 = 0x0;
static volatile uint64_t uli_8 = 0x31F61C4C67BE65C1;
volatile int64_t li_9 = 0x0;
volatile uint16_t us_10 = 0x0;
static volatile uint64_t uli_11 = 0x3546FA4E07FFD1B1;
int aaa;
int16_t func_0();
int16_t func_0()
{
  static uint32_t ui_12 = 0x0;
  static volatile uint16_t us_13 = 0xE7DE;
  static volatile int32_t i_14 = 0xBD9CBB43;
}

int loop_func()
{
  func_0();
  uint32_t ui_12 = 0x0;
  static volatile uint16_t us_13 = 0xE7DE;
  static volatile int32_t i_14 = 0xBD9CBB43;
  {
    us_13 = us_4;
    li_9 &= (us_3 |= c_2 <= uli_11);
  }
  if (((us_1) ? (li_9) : (uli_8)) && (uli_11 ^= 0x573C))
  {
    uint16_t *ptr_12 = &us_1;
    uint64_t *ptr_13 = &uli_8;
    uint32_t *ptr_14 = &ui_7;
  }
  else
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

