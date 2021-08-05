#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint64_t uli_0 = 0x0;
static uint16_t us_1 = 0x0;
uint8_t uc_2 = 0xA3;
int8_t c_3 = 0x0;
static volatile int16_t s_4 = 0x31C7;
static volatile int8_t c_5 = 0x0;
uint32_t ui_6 = 0x0;
static volatile int16_t s_7 = 0x63CA;
static volatile uint16_t us_8 = 0x0807;
volatile int32_t i_9 = 0x0;
int aaa;
int32_t func_0();
int32_t func_0()
{
  static volatile int32_t i_10 = 0xBA930DFA;
}

int loop_func()
{
  func_0();
  static int32_t i_10 = 0xBA930DFA;
  c_3;
  c_5 |= ((c_3) ? (ui_6) : (uli_0)) > (us_1 >= i_9);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

