#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint64_t uli_0 = 0xB0F51522E44FC041;
volatile int8_t c_1 = 0x0;
static volatile uint32_t ui_2 = 0x18F9A0C8;
volatile int16_t s_3 = 0xC5BC;
uint16_t us_4 = 0x0;
static volatile uint8_t uc_5 = 0xFF;
static volatile uint8_t uc_6 = 0xED;
volatile int32_t i_7 = 0xE4CBDD4C;
static int64_t li_8 = 0xC366E3CAF76045F6;
static volatile uint8_t uc_9 = 0x3D;
static uint8_t uc_10 = 0x1D;
static uint32_t ui_11 = 0xA1A00736;
static uint32_t ui_12 = 0x0;
volatile uint8_t uc_13 = 0xC8;
uint64_t func_1();
int32_t func_0();
uint64_t func_1()
{
  static volatile int64_t li_14 = 0x0BA86BE495589357;
  for (c_1 = -7; c_1 <= 78; c_1 += 1)
  {
    uint8_t *ptr_15 = &uc_13;
    int16_t *ptr_16 = &s_3;
    static volatile int8_t c_17 = 0x98;
  }

  for (uc_13 = 3; uc_13 <= 59; uc_13 += 1)
  {
    static volatile int8_t c_15 = 0xD3;
    int16_t *ptr_16 = &s_3;
    ptr_16 = &li_14;
  }

}

int32_t func_0()
{
  uint32_t *ptr_14 = &ui_12;
  uint64_t *ptr_15 = &uli_0;
  uint32_t *ptr_16 = &ui_2;
  func_1();
  for (c_1 = 5; c_1 <= 56; c_1 += 1)
  {
    static volatile int64_t li_17 = 0x0;
    uint32_t *ptr_18 = &ui_12;
    int16_t *ptr_19 = &s_3;
  }

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
  static int64_t li_14 = 0x0BA86BE495589357;
  for (c_1 = -7; c_1 <= 78; c_1 += 1)
  {
    uint8_t *ptr_15 = &uc_13;
    int16_t *ptr_16 = &s_3;
    static int8_t c_17 = 0x98;
  }

  for (uc_13 = 3; uc_13 <= 59; uc_13 += 1)
  {
    static volatile int8_t c_15 = 0xD3;
    int16_t *ptr_16 = &s_3;
    ptr_16 = &li_14;
  }

  uint32_t *ptr_14 = &ui_12;
  uint64_t *ptr_15 = &uli_0;
  uint32_t *ptr_16 = &ui_2;
  func_1();
  for (c_1 = 5; c_1 <= 56; c_1 += 1)
  {
    volatile int64_t li_17 = 0x0;
    uint32_t *ptr_18 = &ui_12;
    int16_t *ptr_19 = &s_3;
  }

  li_14 = (ui_2 /= (0xD2EF68A2 >> ui_2) && uc_13);
  if ((ui_2 /= uc_5) >> uc_9)
  {
    static volatile int8_t c_14 = 0x0;
    uint8_t *ptr_15 = &uc_6;
    uint32_t *ptr_16 = &ui_11;
  }

  if (uc_5)
  {
    uint8_t *ptr_14 = &uc_5;
    int16_t *ptr_15 = &s_3;
    uint8_t *ptr_16 = &uc_9;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

