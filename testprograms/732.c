#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int32_t i_0 = 0x0;
static volatile int16_t s_1 = 0x0835;
static volatile uint8_t uc_2 = 0x34;
static volatile int32_t i_3 = 0x78DA50BC;
uint32_t ui_4 = 0x7CD63297;
static volatile uint32_t ui_5 = 0x25C5B55E;
volatile uint8_t uc_6 = 0xF1;
static volatile uint8_t uc_7 = 0xBE;
int32_t i_8 = 0xBA126F89;
volatile uint8_t uc_9 = 0x16;
static volatile int64_t li_10 = 0xB2868D41E3280E6C;
static volatile int32_t i_11 = 0x0;
static volatile int64_t li_12 = 0x0;
int32_t i_13 = 0x5C66E7C4;
static volatile int16_t s_14 = 0x72EF;
int16_t func_1();
int16_t func_0();
int16_t func_1()
{
  static uint32_t ui_15 = 0x0;
  volatile int32_t i_16 = 0x0;
}

int16_t func_0()
{
  volatile int64_t li_15 = 0x6D421EA81870A8E0;
  uint32_t *ptr_16 = &ui_4;
  static volatile int32_t i_17 = 0x0;
  func_1();
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
  static volatile uint32_t ui_15 = 0x0;
  int32_t i_16 = 0x0;
  static volatile int64_t li_15 = 0x6D421EA81870A8E0;
  uint32_t *ptr_16 = &ui_4;
  static volatile int32_t i_17 = 0x0;
  func_1();
  i_17 = ((li_12 <= uc_7) <= (i_8 < i_11)) <= ((ui_5 ^= 0x5982243F) >> uc_9);
  for (i_3 = 16; i_3 <= 66; i_3 += 1)
  {
    uint8_t *ptr_15 = &uc_2;
  }

  for (uc_9 = 27; uc_9 <= 56; uc_9 += 1)
  {
    uint64_t uli_15 = 0x0;
    volatile uint8_t uc_16 = 0xFD;
    int16_t *ptr_17 = &s_14;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

