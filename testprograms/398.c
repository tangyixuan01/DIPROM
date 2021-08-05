#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile uint8_t uc_0 = 0x0;
uint64_t uli_1 = 0x0AF83438C64D8671;
static volatile uint32_t ui_2 = 0xA1605590;
static volatile uint64_t uli_3 = 0xFECF8B8BFB4B1889;
static volatile int64_t li_4 = 0xAC04D752CE2B8194;
uint8_t uc_5 = 0x0;
static volatile uint64_t uli_6 = 0xDE4195A2E82842D1;
uint8_t uc_7 = 0x45;
static volatile int8_t c_8 = 0x08;
static int8_t c_9 = 0x0;
static volatile int32_t i_10 = 0xCB2996B2;
static uint16_t us_11 = 0x0;
int aaa;
int8_t func_0();
int8_t func_0()
{
  static volatile int8_t c_12 = 0x62;
}

int loop_func()
{
  func_0();
  int8_t c_12 = 0x62;
  if (c_9)
  {
    for (uli_6 = 6; uli_6 <= 75; uli_6 += 1)
    {
      volatile int32_t i_12 = 0x0;
    }

    c_12 = i_10;
    if (us_11 ^= (ui_2 %= ui_2))
    {
      uint64_t *ptr_12 = &uli_1;
      int8_t *ptr_13 = &c_9;
      uint8_t *ptr_14 = &uc_0;
    }

    L_1952161713:
    0x3001EC04;

    c_12 = 0x922A40C1;
    uli_3 /= (li_4 != 0xAC0BACBE) && (i_10 -= 0x08C04E1B);
  }

  us_11 = (uc_7 ^= uc_7 - li_4);
  return 0;
}

int main()
{
  func_0();
  loop_func();
}

