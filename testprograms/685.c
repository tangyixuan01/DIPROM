#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
static volatile int32_t i_0 = 0x0;
uint64_t uli_1 = 0xF9A0F139F74FCC89;
static volatile int16_t s_2 = 0xED53;
static int16_t s_3 = 0x0995;
volatile uint32_t ui_4 = 0x75A15939;
static volatile uint16_t us_5 = 0x0;
static volatile int8_t c_6 = 0x1C;
volatile uint16_t us_7 = 0x6E34;
volatile uint16_t us_8 = 0x7528;
static volatile int64_t li_9 = 0xD3B4856EF972B79D;
int32_t i_10 = 0x6AA9E525;
int32_t func_1(int32_t i_11, int64_t li_12, uint64_t uli_13);
int64_t func_2(int16_t s_11, uint8_t uc_12);
uint32_t func_0();
int32_t func_1(int32_t i_11, int64_t li_12, uint64_t uli_13)
{
  static volatile int64_t li_14 = 0x8CD419A7F17CDE58;
  int8_t *ptr_15 = &c_6;
}

int64_t func_2(int16_t s_11, uint8_t uc_12)
{
  static uint32_t ui_13 = 0xF0FF17BF;
  int16_t *ptr_14 = &s_2;
  int32_t *ptr_15 = &i_10;
  ptr_15 = &i_0;
  s_11 -= (ui_4 |= (s_2 += 0x0) || ((s_11 += uc_12) % (us_7 >= (*ptr_14))));
}

uint32_t func_0()
{
  int32_t *ptr_11 = &i_0;
  int64_t *ptr_12 = &li_9;
  int8_t *ptr_13 = &c_6;
  for (c_6 = -30; c_6 <= 31; c_6 += 1)
  {
    uint16_t *ptr_14 = &us_8;
    volatile int16_t s_15 = 0xC09B;
    li_9 = func_1(func_2(us_5 != us_7, i_10 * s_3), ((*ptr_11) >> 0xD3) && ((*ptr_12) || (*ptr_13)), 0x4BADE76E) / (*ptr_11 += (0x03 % us_7) < ((*ptr_12) << 0x886C4092));
    us_5 &= ((*ptr_14 &= 0xFF45B864 >= (*ptr_13)) || (s_2 |= us_5 == (*ptr_13))) > (0xF4 + (s_3 ^= i_0));
  }

  if ((0x470A4D7F % (us_5 = i_10 >= 0x0)) / ((((*ptr_11) != 0x1B) % (*ptr_13 += s_3)) > ((s_3 || li_9) == ((*ptr_11) == i_10))))
  {
    volatile uint16_t us_14 = 0x6400;
    for (i_0 = 3; i_0 <= 73; i_0 += 1)
    {
      volatile int16_t s_15 = 0x330F;
      int32_t i_16 = 0x0;
      int32_t *ptr_17 = &i_10;
      lblA9D0DD03:
      ptr_13 = &us_8;

      goto lblA9D0DD03;
    }

  }

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
  signed i_11;
  long li_12;
  long s_11;
  short uc_12;
  short uli_13;
  static volatile int64_t li_14 = 0x8CD419A7F17CDE58;
  int8_t *ptr_15 = &c_6;
  volatile uint32_t ui_13 = 0xF0FF17BF;
  int16_t *ptr_14 = &s_2;
  ptr_15 = &i_0;
  s_11 -= (ui_4 |= (s_2 += 0x0) || ((s_11 += uc_12) % (us_7 >= (*ptr_14))));
  ptr_15 = &i_0;
  s_11 -= (ui_4 |= (s_2 += 0x0) || ((s_11 += uc_12) % (us_7 >= (*ptr_14))));
  int32_t *ptr_11 = &i_0;
  int64_t *ptr_12 = &li_9;
  int8_t *ptr_13 = &c_6;
  for (c_6 = -30; c_6 <= 31; c_6 += 1)
  {
    uint16_t *ptr_14 = &us_8;
    static int16_t s_15 = 0xC09B;
    li_9 = func_1(func_2(us_5 != us_7, i_10 * s_3), ((*ptr_11) >> 0xD3) && ((*ptr_12) || (*ptr_13)), 0x4BADE76E) / (*ptr_11 += (0x03 % us_7) < ((*ptr_12) << 0x886C4092));
    us_5 &= ((*ptr_14 &= 0xFF45B864 >= (*ptr_13)) || (s_2 |= us_5 == (*ptr_13))) > (0xF4 + (s_3 ^= i_0));
  }

  if ((0x470A4D7F % (us_5 = i_10 >= 0x0)) / ((((*ptr_11) != 0x1B) % (*ptr_13 += s_3)) > ((s_3 || li_9) == ((*ptr_11) == i_10))))
  {
    static uint16_t us_14 = 0x6400;
    for (i_0 = 3; i_0 <= 73; i_0 += 1)
    {
      static volatile int16_t s_15 = 0x330F;
      static volatile int32_t i_16 = 0x0;
      int32_t *ptr_17 = &i_10;
      lblA9D0DD03:
      ptr_13 = &us_8;

      goto lblA9D0DD03;
    }

  }

  return 0x0;
  return li_9;
  return 0;
}

int main()
{
  loop_func();
  func_0();
}

