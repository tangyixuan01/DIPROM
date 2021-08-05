#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int8_t c_0 = 0x72;
int32_t i_1 = 0xB4A23C64;
static volatile uint16_t us_2 = 0x0;
static volatile int32_t i_3 = 0xEBE452C0;
static volatile uint8_t uc_4 = 0x3B;
static int8_t c_5 = 0x0;
static volatile int32_t i_6 = 0x60215C48;
volatile uint8_t uc_7 = 0xCC;
static volatile uint16_t us_8 = 0x0;
static volatile uint32_t ui_9 = 0x43D969AF;
int aaa;
uint8_t func_0();
uint8_t func_0()
{
  int32_t *ptr_10 = &i_3;
  for (us_8 = 11; us_8 <= 36; us_8 += 1)
  {
    int32_t *ptr_11 = &i_6;
    ptr_11 = ptr_11;
    for (i_6 = 8; i_6 <= 86; i_6 += 1)
    {
      static uint64_t uli_12 = 0x0F4937703E9B1A9C;
    }

  }

}

int loop_func()
{
  func_0();
  int32_t *ptr_10 = &i_3;
  for (us_8 = 11; us_8 <= 36; us_8 += 1)
  {
    int32_t *ptr_11 = &i_6;
    ptr_11 = ptr_11;
    for (i_6 = 8; i_6 <= 86; i_6 += 1)
    {
      static volatile uint64_t uli_12 = 0x0F4937703E9B1A9C;
    }

  }

  i_1;
  return us_8;
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

