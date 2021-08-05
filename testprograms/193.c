#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint16_t us_0 = 0x8F20;
static uint16_t us_1 = 0xA3B0;
static uint16_t us_2 = 0x150D;
static uint8_t uc_3 = 0xF7;
int32_t i_4 = 0x0;
static volatile uint16_t us_5 = 0x6FBF;
static uint8_t uc_6 = 0x11;
static volatile int64_t li_7 = 0x19EBC9C88DD9BF7A;
volatile int64_t li_8 = 0x2288137B18CFBE8A;
uint8_t uc_9 = 0x35;
volatile uint32_t ui_10 = 0x0;
uint16_t us_11 = 0x0;
static uint32_t ui_12 = 0x0;
static volatile uint8_t uc_13 = 0x80;
volatile int8_t c_14 = 0x20;
uint16_t us_15 = 0x3AE4;
uint16_t us_16 = 0x4E9C;
int8_t c_17 = 0x1C;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  uint16_t *ptr_18 = &us_0;
  uint16_t **ptr_19 = &ptr_18;
  int8_t *ptr_20 = &c_14;
}

int loop_func()
{
  func_0();
  uint16_t *ptr_18 = &us_0;
  uint16_t **ptr_19 = &ptr_18;
  int8_t *ptr_20 = &c_14;
  aaa = uc_6;
  uc_6 %= (uc_9 |= (us_15) ? (0x0) : (0xCB66));
  if ((us_5 -= ui_12) < (0xC832 && uc_6))
  {
    uint8_t *ptr_18 = &uc_13;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

