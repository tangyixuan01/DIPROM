#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
uint16_t us_0 = 0x20DA;
static uint32_t ui_1 = 0x0;
static int16_t s_2 = 0x755F;
static volatile int32_t i_3 = 0x0;
static uint32_t ui_4 = 0x0;
static volatile uint8_t uc_5 = 0x9C;
static volatile int8_t c_6 = 0x67;
static int32_t i_7 = 0x0;
static int32_t i_8 = 0x5798772C;
static uint32_t ui_9 = 0x959E46E9;
static volatile int32_t i_10 = 0x4534A9BE;
static uint64_t uli_11 = 0x4C7E4F57B2B4753B;
static volatile uint16_t us_12 = 0x0;
static volatile uint32_t ui_13 = 0x0;
static volatile int8_t c_14 = 0xCB;
static volatile uint32_t ui_15 = 0x584C8980;
int64_t func_1(uint32_t ui_16, uint64_t uli_17);
int32_t func_2();
int64_t func_0();
int64_t func_1(uint32_t ui_16, uint64_t uli_17)
{
  static int64_t li_18 = 0x0;
  uint64_t *ptr_19 = &uli_17;
  volatile int64_t li_20 = 0x43337E824D00F685;
  ptr_19 = ptr_19;
}

int32_t func_2()
{
  int32_t *ptr_16 = &i_3;
  int32_t *ptr_17 = &i_8;
  uint16_t *ptr_18 = &us_12;
}

int64_t func_0()
{
  int16_t *ptr_16 = &s_2;
  static volatile int32_t i_17 = 0xB5D7D60D;
  uint32_t *ptr_18 = &ui_1;
  uint8_t uc_19 = 0x0;
  ui_1 = ((i_17 %= func_1(i_17, uc_5)) > ((ui_1 *= s_2) | (*ptr_18 &= uc_5))) && (i_10 |= (i_10 = i_3));
  if (us_12 ^= func_2())
  {
    static volatile uint64_t uli_20 = 0x0;
    uli_11 += i_3;
  }

  ui_9 |= ((us_0 = (*ptr_16 = 0xAF)) < ((0x92 <= 0x0) == (0xE983 <= 0x60))) ^ ((*ptr_16 += ui_13 && c_6) & ((i_17 && uli_11) > (uc_5 && 0x28E89D43)));
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
  unsigned ui_16;
  short uli_17;
  volatile int64_t li_18 = 0x0;
  uint64_t *ptr_19 = &uli_17;
  int64_t li_20 = 0x43337E824D00F685;
  ptr_19 = ptr_19;
  ptr_19 = ptr_19;
  int32_t *ptr_16 = &i_3;
  int32_t *ptr_17 = &i_8;
  uint16_t *ptr_18 = &us_12;
  volatile int32_t i_17 = 0xB5D7D60D;
  static volatile uint8_t uc_19 = 0x0;
  ui_1 = ((i_17 %= func_1(i_17, uc_5)) > ((ui_1 *= s_2) | (*ptr_18 &= uc_5))) && (i_10 |= (i_10 = i_3));
  if (us_12 ^= func_2())
  {
    static volatile uint64_t uli_20 = 0x0;
    uli_11 += i_3;
  }

  ui_9 |= ((us_0 = (*ptr_16 = 0xAF)) < ((0x92 <= 0x0) == (0xE983 <= 0x60))) ^ ((*ptr_16 += ui_13 && c_6) & ((i_17 && uli_11) > (uc_5 && 0x28E89D43)));
  li_18 = (c_6 * (0x48E8BA61 / 0xD355)) % 0x22984575;
  uli_11 = ui_1 <= ((c_6 += 0x0 - uli_11) || ((uli_11 ^= i_10) || (s_2 || c_6)));
  ui_15 = (c_6 -= 0x6651) >= (i_3 - ui_1);
  for (uli_11 = 5; uli_11 <= 79; uli_11 += 1)
  {
    int32_t *ptr_16 = &i_3;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

