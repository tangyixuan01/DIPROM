#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint16_t us_0 = 0x0;
volatile uint8_t uc_1 = 0x0B;
static uint8_t uc_2 = 0x35;
static volatile uint32_t ui_3 = 0x0;
volatile int8_t c_4 = 0x43;
volatile uint64_t uli_5 = 0x9AB0BE5D985A314C;
volatile int16_t s_6 = 0x8CAB;
static volatile uint8_t uc_7 = 0x62;
static volatile uint32_t ui_8 = 0x551EFCFA;
static uint16_t us_9 = 0x0;
static volatile uint64_t uli_10 = 0x0;
int16_t func_1(int16_t s_11);
int8_t func_2(int16_t s_11);
uint8_t func_0();
int16_t func_1(int16_t s_11)
{
  static volatile int32_t i_12 = 0xC47F1776;
}

int8_t func_2(int16_t s_11)
{
  volatile int32_t i_12 = 0x0;
  static volatile int64_t li_13 = 0xB4A3BC58ED6507FE;
  uint8_t *ptr_14 = &uc_2;
  uint32_t *ptr_15 = &ui_8;
}

uint8_t func_0()
{
  volatile uint8_t uc_11 = 0x06;
  func_1((((uli_10 && uc_7) < func_2(0x7E)) ^ ((uc_11 |= 0x0) < (uc_1 * s_6))) >= c_4);
}

int array[100] = {0};
int loop_func()
{
  struct S
  {
    int a;
    int b;
    int c;
    int d;
    int e;
  };
  struct S ss;
  unsigned long long generic_var;
  va_list arg;
  int aaa;
  int s_11;
  volatile int32_t i_12 = 0xC47F1776;
  static volatile int64_t li_13 = 0xB4A3BC58ED6507FE;
  uint8_t *ptr_14 = &uc_2;
  uint32_t *ptr_15 = &ui_8;
  volatile uint8_t uc_11 = 0x06;
  func_1((((uli_10 && uc_7) < func_2(0x7E)) ^ ((uc_11 |= 0x0) < (uc_1 * s_6))) >= c_4);
  L_1056722754:
  uc_7 %= (uc_7 * c_4) + (s_6 > c_4);

  li_13 = ui_8;
  if (ui_8 >= (((c_4 | us_0) > 0xA743F5E8) >= (s_6 |= c_4 == c_4)))
  {
    int16_t *ptr_11 = &s_6;
  }
  else
  {
    uint8_t *ptr_11 = &uc_7;
  }

  if (uc_1 ^ (c_4 | ((us_9 ^ s_6) | (uc_2 += uc_7))))
  {
    uint32_t *ptr_11 = &ui_3;
    int16_t *ptr_12 = &s_6;
    uint64_t *ptr_13 = &uli_10;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

