#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int8_t c_0 = 0x0;
volatile int32_t i_1 = 0xA224CA2D;
static uint16_t us_2 = 0xBA07;
static volatile uint16_t us_3 = 0x02E8;
volatile uint32_t ui_4 = 0x0;
uint64_t uli_5 = 0x88F1C3966BA26CF9;
uint64_t uli_6 = 0x37167185A6D18697;
static volatile uint64_t uli_7 = 0xB0B1C53223B9DF0F;
static volatile uint32_t ui_8 = 0x0;
int8_t c_9 = 0xCA;
static int32_t i_10 = 0x0;
static uint16_t us_11 = 0xF436;
uint8_t uc_12 = 0x0;
static uint64_t uli_13 = 0x0;
volatile uint64_t uli_14 = 0xA35C6053F525C338;
static volatile uint32_t ui_15 = 0x1931D677;
volatile uint32_t ui_16 = 0xB415761D;
static uint64_t uli_17 = 0x16B3B76EF451D82A;
volatile uint64_t uli_18 = 0x0;
int aaa;
int8_t func_0();
int8_t func_0()
{
  uint32_t *ptr_19 = &ui_4;
  uint16_t *ptr_20 = &us_2;
  uint8_t *ptr_21 = &uc_12;
  static volatile int32_t i_22 = 0x958121B5;
  *ptr_20 += (0x877044D2 || c_0) << (uli_7 += *ptr_21);
}

int loop_func()
{
  func_0();
  uint32_t *ptr_19 = &ui_4;
  uint16_t *ptr_20 = &us_2;
  uint8_t *ptr_21 = &uc_12;
  int32_t i_22 = 0x958121B5;
  *ptr_20 += (0x877044D2 || c_0) << (uli_7 += *ptr_21);
  i_22 = i_10;
  uli_13 %= (0xF7 != uli_18) ^ (us_3 << ui_15);
  for (i_1 = -28; i_1 <= 73; i_1 += 1)
  {
    uint32_t *ptr_19 = &ui_4;
  }

  return 0;
}

int main()
{
  func_0();
  loop_func();
}

