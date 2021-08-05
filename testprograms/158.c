#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int16_t s_0 = 0xB2E4;
static uint16_t us_1 = 0x9D4F;
static volatile int32_t i_2 = 0x56C8FFC9;
static volatile uint16_t us_3 = 0x72C3;
uint32_t ui_4 = 0x106D241D;
static volatile int16_t s_5 = 0x0;
volatile uint16_t us_6 = 0x0;
static uint8_t uc_7 = 0xAF;
static volatile int64_t li_8 = 0x7D53688DB410620C;
uint64_t uli_9 = 0x000BBB942430AAE0;
int64_t li_10 = 0x0;
volatile int8_t c_11 = 0x23;
static volatile int16_t s_12 = 0x0;
static volatile int32_t i_13 = 0x0;
static volatile uint32_t ui_14 = 0xC57C5770;
static volatile int16_t s_15 = 0x5458;
volatile uint32_t ui_16 = 0x33F17879;
static volatile uint16_t us_17 = 0xCF12;
int aaa;
int16_t func_1(uint32_t ui_18, uint64_t uli_19);
int8_t func_0();
int16_t func_1(uint32_t ui_18, uint64_t uli_19)
{
  uint64_t *ptr_20 = &uli_19;
  uint32_t *ptr_21 = &ui_14;
  ptr_21 = &ui_18;
  ptr_21 = &li_10;
}

int8_t func_0()
{
  static int8_t c_18 = 0x51;
  int8_t *ptr_19 = &c_11;
  static volatile uint8_t uc_20 = 0x0D;
  for (c_11 = 10; c_11 <= 57; c_11 += 1)
  {
    if (us_6 *= c_18 == ui_14)
    {
    }

    for (us_1 = 8; us_1 <= 74; us_1 += 1)
    {
      int32_t i_21 = 0x13AF64E7;
    }

    if ((c_11 |= i_13) > func_1(s_15, c_11))
    {
    }

  }

}

int loop_func()
{
  func_0();
  signed ui_18;
  short uli_19;
  uint64_t *ptr_20 = &uli_19;
  uint32_t *ptr_21 = &ui_14;
  ptr_21 = &ui_18;
  ptr_21 = &li_10;
  ptr_21 = &ui_18;
  ptr_21 = &li_10;
  int8_t c_18 = 0x51;
  int8_t *ptr_19 = &c_11;
  volatile uint8_t uc_20 = 0x0D;
  for (c_11 = 10; c_11 <= 57; c_11 += 1)
  {
    if (us_6 *= c_18 == ui_14)
    {
    }

    for (us_1 = 8; us_1 <= 74; us_1 += 1)
    {
      static volatile int32_t i_21 = 0x13AF64E7;
    }

    if ((c_11 |= i_13) > func_1(s_15, c_11))
    {
    }

  }

  c_18 = uli_9;
  us_17 *= (s_12 << 0x0) && (s_15 &= us_17);
  if (s_15 -= (0x2401) ? (c_11) : (us_3))
  {
    static int32_t i_18 = 0x821F5047;
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

