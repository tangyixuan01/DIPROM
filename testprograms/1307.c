#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint32_t ui_0 = 0x13534BC4;
static volatile uint32_t ui_1 = 0x6E0CE89C;
static volatile uint8_t uc_2 = 0xCC;
static volatile int8_t c_3 = 0x0;
volatile uint8_t uc_4 = 0xAC;
volatile int16_t s_5 = 0x0;
volatile uint8_t uc_6 = 0x0;
volatile int16_t s_7 = 0x6712;
uint16_t us_8 = 0x4254;
static volatile int64_t li_9 = 0x0;
volatile int32_t i_10 = 0xF51B12EB;
static uint16_t us_11 = 0x7579;
volatile uint8_t uc_12 = 0xFF;
static volatile uint8_t uc_13 = 0x2C;
static volatile int8_t c_14 = 0x0;
int64_t li_15 = 0x0;
int8_t func_1(uint64_t uli_16, int16_t s_17, uint32_t ui_18);
int16_t func_2(int64_t li_16, uint32_t ui_17, int32_t i_18);
uint8_t func_0();
int8_t func_1(uint64_t uli_16, int16_t s_17, uint32_t ui_18)
{
  uint8_t *ptr_19 = &uc_6;
  int8_t c_20 = 0xFA;
  static uint8_t uc_21 = 0x4A;
  int16_t s_22 = 0x0;
}

int16_t func_2(int64_t li_16, uint32_t ui_17, int32_t i_18)
{
  int64_t *ptr_19 = &li_16;
  ptr_19 = &li_9;
  for (c_3 = -29; c_3 <= 36; c_3 += 1)
  {
    uint16_t *ptr_20 = &us_8;
    static uint8_t uc_21 = 0x0;
  }

}

uint8_t func_0()
{
  int32_t *ptr_16 = &i_10;
  uc_6 /= (((*ptr_16 %= uc_2) > (uc_13 |= uc_2)) && 0x917A) == (((0x0 == uc_13) < (ui_0 >= ui_0)) && (uc_6 |= func_1(li_15, ui_0, ui_1)));
  lbl5B9EC5E6:
  uc_13 |= (ui_0 *= (uc_4 += func_2(uc_12, uc_4, uc_13) & ((*ptr_16) <= uc_12)));

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
  int i_18;
  short li_16;
  signed s_17;
  long ui_17;
  int ui_18;
  int uli_16;
  uint8_t *ptr_19 = &uc_6;
  static volatile int8_t c_20 = 0xFA;
  uint8_t uc_21 = 0x4A;
  static volatile int16_t s_22 = 0x0;
  ptr_19 = &li_9;
  for (c_3 = -29; c_3 <= 36; c_3 += 1)
  {
    uint16_t *ptr_20 = &us_8;
    static volatile uint8_t uc_21 = 0x0;
  }

  ptr_19 = &li_9;
  for (c_3 = -29; c_3 <= 36; c_3 += 1)
  {
    uint16_t *ptr_20 = &us_8;
    static uint8_t uc_21 = 0x0;
  }

  int32_t *ptr_16 = &i_10;
  uc_6 /= (((*ptr_16 %= uc_2) > (uc_13 |= uc_2)) && 0x917A) == (((0x0 == uc_13) < (ui_0 >= ui_0)) && (uc_6 |= func_1(li_15, ui_0, ui_1)));
  lbl5B9EC5E6:
  uc_13 |= (ui_0 *= (uc_4 += func_2(uc_12, uc_4, uc_13) & ((*ptr_16) <= uc_12)));

  return ((ui_1 %= ui_0) || (c_14 = ui_1)) < 0x0;
  s_7 = (c_14 += (uc_6 |= s_7 >> c_14) + ((c_14 &= 0x0) > (c_14 *= uc_6)));
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

