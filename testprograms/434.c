#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint8_t uc_0 = 0x81;
volatile uint16_t us_1 = 0xD9C4;
static volatile int32_t i_2 = 0x0;
static volatile uint8_t uc_3 = 0xEC;
int32_t i_4 = 0xE5B82080;
uint32_t ui_5 = 0xAD542E5D;
int32_t i_6 = 0x0;
static volatile uint64_t uli_7 = 0x7B684458C3D8BF83;
static volatile uint64_t uli_8 = 0x0AA5EC339F607EBD;
static int64_t li_9 = 0x1B7EF56A4EE4BEE5;
uint16_t us_10 = 0x17FA;
int64_t li_11 = 0xBE46BA6D6DB521F7;
static volatile uint64_t uli_12 = 0xBAB9FF5064ACA5AE;
int aaa;
int64_t func_0();
int64_t func_0()
{
  static int8_t c_13 = 0x0;
  int8_t *ptr_14 = &c_13;
  ptr_14 = &ui_5;
}

int loop_func()
{
  func_0();
  static volatile int8_t c_13 = 0x0;
  int8_t *ptr_14 = &c_13;
  ptr_14 = &ui_5;
  0x74;
  if (li_9 ^= (us_1 += 0x4C))
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

