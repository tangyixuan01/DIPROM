#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static uint32_t ui_0 = 0x6AB2A8E2;
uint32_t ui_1 = 0xEF900040;
static volatile uint16_t us_2 = 0x0;
static uint32_t ui_3 = 0xDFC2B0D8;
uint16_t us_4 = 0x0;
uint16_t us_5 = 0x5D73;
volatile int8_t c_6 = 0x0E;
int32_t i_7 = 0x0;
volatile uint64_t uli_8 = 0x93C45273145C4248;
volatile uint32_t ui_9 = 0x7A5EE5BE;
static volatile uint16_t us_10 = 0x0;
static volatile uint64_t uli_11 = 0x41515B3DE4130554;
static uint32_t ui_12 = 0xC441326E;
int64_t func_1(uint16_t us_13, int16_t s_14, int16_t s_15);
int64_t func_2(int64_t li_13, int8_t c_14, uint64_t uli_15, uint32_t ui_16);
int16_t func_0();
int64_t func_1(uint16_t us_13, int16_t s_14, int16_t s_15)
{
  uint64_t *ptr_16 = &uli_8;
  uint32_t *ptr_17 = &ui_1;
}

int64_t func_2(int64_t li_13, int8_t c_14, uint64_t uli_15, uint32_t ui_16)
{
  uint32_t *ptr_17 = &ui_12;
  int64_t *ptr_18 = &li_13;
  int8_t *ptr_19 = &c_6;
  lbl43B34A33:
  ptr_17 = &ui_3;

}

int16_t func_0()
{
  uint32_t ui_13 = 0x227FC341;
  static volatile uint64_t uli_14 = 0x0;
  static volatile uint32_t ui_15 = 0x4CC07513;
  uint64_t *ptr_16 = &uli_14;
  ptr_16 = &uli_11;
  us_4 = (us_10 |= (c_6 *= func_1(func_2(us_4, *ptr_16, uli_14, 0x0), ui_9 >= us_2, us_5 >= 0xB8)));
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
  signed c_14;
  signed li_13;
  unsigned s_14;
  _Bool s_15;
  long ui_16;
  int uli_15;
  unsigned us_13;
  uint64_t *ptr_16 = &uli_8;
  uint32_t *ptr_17 = &ui_1;
  int64_t *ptr_18 = &li_13;
  int8_t *ptr_19 = &c_6;
  lbl43B34A33:
  ptr_17 = &ui_3;

  ptr_17 = &ui_3;
  static volatile uint32_t ui_13 = 0x227FC341;
  volatile uint64_t uli_14 = 0x0;
  static volatile uint32_t ui_15 = 0x4CC07513;
  ptr_16 = &uli_11;
  us_4 = (us_10 |= (c_6 *= func_1(func_2(us_4, *ptr_16, uli_14, 0x0), ui_9 >= us_2, us_5 >= 0xB8)));
  {
    ui_13 = (us_4 += (ui_12 *= us_2)) || 0x0;
    for (uli_11 = 23; uli_11 <= 79; uli_11 += 1)
    {
    }

  }
  if (((ui_1 += c_6 << 0x01DC) >= (uli_11 << (ui_0 |= ui_3))) << (0x21 == (ui_0 &= uli_8 * i_7)))
  {
  }

  return 0;
}

int main()
{
  loop_func();
  func_0();
}

