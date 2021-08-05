#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
int64_t li_0 = 0x0;
static volatile int8_t c_1 = 0x5D;
uint64_t uli_2 = 0xAC16D34044C3E97A;
static volatile uint8_t uc_3 = 0x0;
uint8_t uc_4 = 0x3E;
static volatile int32_t i_5 = 0x0;
volatile uint64_t uli_6 = 0xA52A5C6623A64EA0;
static volatile uint8_t uc_7 = 0x98;
static int16_t s_8 = 0x0;
volatile int16_t s_9 = 0x4E19;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  volatile uint16_t us_10 = 0xA9FA;
  static uint64_t uli_11 = 0x0;
  uint16_t *ptr_12 = &us_10;
  for (*ptr_12 = 4; (*ptr_12) <= 61; *ptr_12 += 1)
  {
    int32_t *ptr_13 = &i_5;
    static volatile int64_t li_14 = 0x8213521BE6575F2C;
    volatile uint32_t ui_15 = 0x0;
    ptr_13 = &li_14;
    c_1 -= (uc_7 -= (*ptr_13 /= 0xFC2AA8F2));
    ptr_12 = &s_9;
  }

}

int loop_func()
{
  func_0();
  static volatile uint16_t us_10 = 0xA9FA;
  static uint64_t uli_11 = 0x0;
  uint16_t *ptr_12 = &us_10;
  for (*ptr_12 = 4; (*ptr_12) <= 61; *ptr_12 += 1)
  {
    int32_t *ptr_13 = &i_5;
    static int64_t li_14 = 0x8213521BE6575F2C;
    volatile uint32_t ui_15 = 0x0;
    ptr_13 = &li_14;
    c_1 -= (uc_7 -= (*ptr_13 /= 0xFC2AA8F2));
    ptr_12 = &s_9;
  }

  return 0x0;
  0x0;
  if (c_1 &= (c_1 ^= uli_2))
  {
    volatile int16_t s_10 = 0x0;
    static volatile uint16_t us_11 = 0x2E43;
    volatile uint16_t us_12 = 0x0;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

