#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint64_t uli_0 = 0x0;
uint8_t uc_1 = 0x37;
volatile uint16_t us_2 = 0x4E18;
volatile int16_t s_3 = 0x5BEB;
static uint8_t uc_4 = 0x0;
static int64_t li_5 = 0x502B99CBF3718A83;
static int8_t c_6 = 0x19;
static volatile uint32_t ui_7 = 0xBAFA58FB;
static volatile uint32_t ui_8 = 0x0;
int32_t i_9 = 0x0;
static uint64_t uli_10 = 0x8C08F89821BAED43;
volatile uint8_t uc_11 = 0xD0;
volatile uint8_t uc_12 = 0x98;
uint32_t ui_13 = 0xC95CED8F;
int16_t func_2();
int32_t func_1();
uint64_t func_0();
int16_t func_2()
{
  int64_t li_14 = 0x97B83457534DFB7B;
  static int16_t s_15 = 0x5354;
  static uint16_t us_16 = 0x3699;
}

int32_t func_1()
{
  uint32_t *ptr_14 = &ui_7;
  int64_t *ptr_15 = &li_5;
  ptr_15 = &uli_0;
  func_2();
  ptr_15 = &uli_0;
}

uint64_t func_0()
{
  uint32_t *ptr_14 = &ui_7;
  static volatile int16_t s_15 = 0xD867;
  uint16_t *ptr_16 = &us_2;
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
  volatile int64_t li_14 = 0x97B83457534DFB7B;
  volatile int16_t s_15 = 0x5354;
  static volatile uint16_t us_16 = 0x3699;
  uint32_t *ptr_14 = &ui_7;
  int64_t *ptr_15 = &li_5;
  ptr_15 = &uli_0;
  func_2();
  ptr_15 = &uli_0;
  uint16_t *ptr_16 = &us_2;
  func_1();
  uli_10;
  return 0xF582;
  if ((uli_10 = (li_5 /= uc_11 >> i_9)) <= i_9)
  {
    uint16_t us_14 = 0x7A8F;
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

