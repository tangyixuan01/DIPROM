#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile uint8_t uc_0 = 0xE3;
uint64_t uli_1 = 0x0;
uint64_t uli_2 = 0xD0A22C4ED0A1DE62;
static volatile int8_t c_3 = 0x40;
static volatile int64_t li_4 = 0x0;
static volatile uint64_t uli_5 = 0xADBACA09BABD70C4;
static int8_t c_6 = 0x6D;
static volatile uint32_t ui_7 = 0x0;
static volatile uint64_t uli_8 = 0x0;
uint32_t ui_9 = 0x0;
static volatile uint32_t ui_10 = 0x64211DBD;
volatile int8_t c_11 = 0x73;
static volatile uint32_t ui_12 = 0x0C2C1337;
int aaa;
uint64_t func_0();
uint64_t func_0()
{
  int32_t i_13 = 0x1B67E730;
  uint64_t *ptr_14 = &uli_8;
  uint64_t *ptr_15 = &uli_5;
  int64_t *ptr_16 = &li_4;
  ptr_14 = &uli_2;
  for (*ptr_14 = 26; (*ptr_14) <= 76; *ptr_14 += 1)
  {
    volatile int32_t i_17 = 0x0;
    static volatile int64_t li_18 = 0xED850995CF00EF49;
    ptr_15 = &uli_2;
    ptr_14 = &uli_1;
  }

}

int loop_func()
{
  func_0();
  int32_t i_13 = 0x1B67E730;
  uint64_t *ptr_14 = &uli_8;
  uint64_t *ptr_15 = &uli_5;
  int64_t *ptr_16 = &li_4;
  ptr_14 = &uli_2;
  for (*ptr_14 = 26; (*ptr_14) <= 76; *ptr_14 += 1)
  {
    static volatile int32_t i_17 = 0x0;
    static int64_t li_18 = 0xED850995CF00EF49;
    ptr_15 = &uli_2;
    ptr_14 = &uli_1;
  }

  i_13 = 0xED3C;
  for (li_4 = 17; li_4 <= 33; li_4 += 1)
  {
    static volatile int8_t c_13 = 0x1D;
    uint32_t *ptr_14 = &ui_9;
    static int32_t i_15 = 0xCF794D3E;
  }

  for (li_4 = 17; li_4 <= 75; li_4 += 1)
  {
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

