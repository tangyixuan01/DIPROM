#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint16_t us_0 = 0x0;
static volatile int8_t c_1 = 0x0;
static volatile int64_t li_2 = 0xE1E84CDF7A378DE3;
static volatile int32_t i_3 = 0xAD264E77;
int64_t li_4 = 0x8CA6D8E25C1C643E;
volatile uint8_t uc_5 = 0x1D;
static volatile uint32_t ui_6 = 0xA71E5854;
uint64_t uli_7 = 0x0A4E2307F1355736;
static volatile int8_t c_8 = 0x3E;
volatile uint64_t uli_9 = 0x0;
static uint32_t ui_10 = 0xCB91F9FF;
int aaa;
uint16_t func_0();
uint16_t func_0()
{
  static uint8_t uc_11 = 0x0;
  volatile int32_t i_12 = 0x0;
  uint64_t *ptr_13 = &uli_9;
  int8_t *ptr_14 = &c_8;
  ptr_14 = &uc_5;
  ptr_14 = &uli_7;
  ui_10 %= (*ptr_14 = ui_6 || c_8);
}

int loop_func()
{
  func_0();
  static uint8_t uc_11 = 0x0;
  static volatile int32_t i_12 = 0x0;
  uint64_t *ptr_13 = &uli_9;
  int8_t *ptr_14 = &c_8;
  ptr_14 = &uc_5;
  ptr_14 = &uli_7;
  ui_10 %= (*ptr_14 = ui_6 || c_8);
  return ui_6;
  if ((li_4 *= 0x6DF95F13) > (uli_9 && uli_7))
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

