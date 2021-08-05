#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
volatile int16_t s_0 = 0x9983;
volatile int16_t s_1 = 0x0AFC;
static volatile uint8_t uc_2 = 0xBD;
volatile int64_t li_3 = 0x8491743CC2619052;
static int16_t s_4 = 0x0;
static volatile uint32_t ui_5 = 0xB5EA1FEC;
volatile uint32_t ui_6 = 0x8591706A;
static int32_t i_7 = 0x0;
volatile int32_t i_8 = 0x35387D5D;
volatile int16_t s_9 = 0x20B4;
static volatile int8_t c_10 = 0x0D;
static int64_t li_11 = 0x27A9803420755BDD;
static volatile int8_t c_12 = 0xAA;
static volatile uint16_t us_13 = 0xBE0B;
uint64_t func_0();
uint64_t func_0()
{
  uint32_t *ptr_14 = &ui_5;
  int16_t s_15 = 0x5D4F;
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
  uint32_t *ptr_14 = &ui_5;
  int16_t s_15 = 0x5D4F;
  return 0;
  int var_1144642434 = -8;
  for (; var_1144642434 > 20; var_1144642434 += 4)
  {
    s_15 = func_1((c_10 + 0xB1F944CE) & (li_3 /= s_0), 0xCB93);
    ui_5 ^= ((i_8 *= ui_6 || 0x09) && (li_3 >= (us_13 = 0x0))) & (((c_12 && li_3) ^ (ui_6 % li_3)) >= (i_7 ^= 0xBB % li_11));
    L_2486996503:
    ((li_11 %= 0x1BFF) && (li_3 ^= ui_5)) * 0x0;

    s_15 = (c_12 /= us_13 < li_11) || (0x0 + uc_2);
    i_7 += (uc_2 /= (li_11 - 0xC3) + (s_0 * c_12)) << (((li_11 == li_3) & (li_3 >= 0x6D59ECBE)) % (0x0 != (s_0 << s_1)));
  }

  for (ui_5 = 10; ui_5 <= 76; ui_5 += 1)
  {
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

