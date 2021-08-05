#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint32_t ui_0 = 0x75D50CAE;
static int32_t i_1 = 0x0;
static uint8_t uc_2 = 0x0;
static int64_t li_3 = 0x0;
int64_t li_4 = 0x0;
static uint8_t uc_5 = 0x0;
static volatile int32_t i_6 = 0xF931D3DB;
static uint8_t uc_7 = 0x0;
static int32_t i_8 = 0x0;
volatile uint64_t uli_9 = 0x57E06B9717F790C5;
volatile uint16_t us_10 = 0xE7CB;
static int16_t s_11 = 0x63BB;
static volatile int32_t i_12 = 0x0;
static volatile uint32_t ui_13 = 0xAB906278;
static uint8_t uc_14 = 0xF2;
static volatile int64_t li_15 = 0x7A65121BB7F6239F;
volatile int32_t i_16 = 0xB6318A92;
int aaa;
int64_t func_1();
int32_t func_0();
int64_t func_1()
{
  volatile uint64_t uli_17 = 0x0;
  int32_t *ptr_18 = &i_1;
  uint8_t *ptr_19 = &uc_14;
  uint16_t *ptr_20 = &us_10;
  uc_5 /= (uc_2 ^= 0x0) >= (uc_7 + i_16);
  ptr_19 = &i_12;
  uc_7 = (li_3 - uc_2) ? (uc_7) : ((*ptr_18) << uc_2);
}

int32_t func_0()
{
  int32_t i_17 = 0xB71E8A82;
  int8_t c_18 = 0x0;
  static volatile uint64_t uli_19 = 0xCFAE180E1AA07993;
  static volatile int32_t i_20 = 0x6320B4C4;
  for (uli_19 = 13; uli_19 <= 71; uli_19 += 1)
  {
    int32_t *ptr_21 = &i_8;
    uint32_t *ptr_22 = &ui_13;
    static int16_t s_23 = 0x394C;
    func_1();
  }

}

int loop_func()
{
  func_0();
  static volatile uint64_t uli_17 = 0x0;
  int32_t *ptr_18 = &i_1;
  uint8_t *ptr_19 = &uc_14;
  uint16_t *ptr_20 = &us_10;
  uc_5 /= (uc_2 ^= 0x0) >= (uc_7 + i_16);
  ptr_19 = &i_12;
  uc_7 = (li_3 - uc_2) ? (uc_2) : ((*ptr_18) << uc_2);
  int32_t i_17 = 0xB71E8A82;
  static volatile int8_t c_18 = 0x0;
  volatile uint64_t uli_19 = 0xCFAE180E1AA07993;
  volatile int32_t i_20 = 0x6320B4C4;
  for (uli_19 = 13; uli_19 <= 71; uli_19 += 1)
  {
    int32_t *ptr_21 = &i_8;
    uint32_t *ptr_22 = &ui_13;
    static volatile int16_t s_23 = 0x394C;
    func_1();
  }

  L_347593935:
  i_12;

  c_18 = i_12;
  for (li_15 = -21; li_15 <= 35; li_15 += 1)
  {
  }

  i_1 -= (ui_13 -= (uc_5 ^= 0x8AF8));
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

