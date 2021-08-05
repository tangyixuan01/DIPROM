#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int16_t s_0 = 0x0;
static volatile uint64_t uli_1 = 0x24D6361ABD27F01B;
int8_t c_2 = 0x5D;
static volatile int16_t s_3 = 0xD645;
static uint32_t ui_4 = 0xECF00C63;
int16_t s_5 = 0x0;
static volatile int64_t li_6 = 0x0;
static uint32_t ui_7 = 0x0;
static uint32_t ui_8 = 0x07F8F451;
static volatile int32_t i_9 = 0x707CE68E;
static int64_t li_10 = 0xADCD4AB9A0DB7C36;
volatile uint8_t uc_11 = 0x0;
static volatile int8_t c_12 = 0x0;
uint8_t func_0();
uint8_t func_0()
{
  uint8_t *ptr_13 = &uc_11;
  int16_t *ptr_14 = &s_0;
  uint32_t *ptr_15 = &ui_7;
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
  uint8_t *ptr_13 = &uc_11;
  int16_t *ptr_14 = &s_0;
  uint32_t *ptr_15 = &ui_7;
  L_1423795594:
  c_2 = ui_7 & (0xF9CC - 0xC2);

  aaa = 0x0A7F;
  lbl9ABA43D7:
  func_1(i_9 && 0x0, s_0 + s_0);

  aaa = (c_2 ^= (s_0 &= (c_12 = ui_4)));
  return uc_11;
  for (li_6 = 11; li_6 <= 64; li_6 += 1)
  {
    uint64_t *ptr_13 = &uli_1;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

