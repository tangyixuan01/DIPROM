#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint64_t uli_0 = 0x2E427A681DD432BE;
static volatile int32_t i_1 = 0x07A4DE68;
volatile int16_t s_2 = 0xE9D0;
static volatile uint64_t uli_3 = 0x2EB86C54186C6AA7;
static volatile uint8_t uc_4 = 0xBF;
volatile int16_t s_5 = 0x0;
uint64_t uli_6 = 0x0;
uint32_t ui_7 = 0x525C37BE;
int8_t c_8 = 0x0;
uint16_t us_9 = 0x5CEB;
static volatile int8_t c_10 = 0x62;
static volatile uint16_t us_11 = 0x6668;
int aaa;
int8_t func_0();
int8_t func_0()
{
  static volatile uint16_t us_12 = 0x8723;
  uint64_t *ptr_13 = &uli_3;
  uint64_t *ptr_14 = &uli_6;
  static volatile uint8_t uc_15 = 0x97;
  ptr_14 = ptr_13;
  us_11 %= (*ptr_13 += (uli_6 ^= *ptr_13));
  uc_15 /= (*ptr_14 = (*ptr_13) != 0x6A7BF42E);
}

int loop_func()
{
  func_0();
  uint16_t us_12 = 0x8723;
  uint64_t *ptr_13 = &uli_3;
  uint64_t *ptr_14 = &uli_6;
  uint8_t uc_15 = 0x97;
  ptr_14 = ptr_13;
  us_11 %= (*ptr_13 += (uli_6 ^= *ptr_13));
  uc_15 /= (*ptr_14 = (*ptr_13) != 0x6A7BF42E);
  uc_15 = i_1;
  for (c_8 = 23; c_8 <= 61; c_8 += 1)
  {
    static uint64_t uli_12 = 0x28182832C60B7487;
  }

  if ((us_9 ^= ui_7) | ((0x0) ? (us_11) : (c_8)))
  {
  }
  else
  {
    volatile uint8_t uc_12 = 0xB8;
    int8_t *ptr_13 = &c_8;
    uint64_t *ptr_14 = &uli_3;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

