#ifndef SRC_S21_DECIMAL_H_
#define SRC_S21_DECIMAL_H_

#include <math.h>

#define S21_UINT_MAX 4294967295U
#define S21_INT_MAX 2147483647

#define SIGN_MINUS 0x80000000
#define SIGN_PLUS 0x00000000
#define SCALE_MASK 0x00ff0000

#define DEC_ZERO \
  { {0, 0, 0, 0}, s21_NORMAL_VALUE }
#define DEC_ONE \
  { {1, 0, 0, 0}, s21_NORMAL_VALUE }
#define DEC_MINUS_ONE \
  { {1, 0, 0, SIGN_MINUS}, s21_NORMAL_VALUE }
#define HALF \
  { {5, 0, 0, 0x00010000}, s21_NORMAL_VALUE }
#define EXT_DEC_ZERO \
  { {0, 0, 0, 0, 0, 0, 0}, s21_NORMAL_VALUE }
#define EXT_DEC_ONE \
  { {1, 0, 0, 0, 0, 0, 0}, s21_NORMAL_VALUE }
typedef enum {
  s21_NORMAL_VALUE = 0,
  s21_INFINITY = 1,
  s21_NEGATIVE_INFINITY = 2,
  s21_NAN = 3
} value_type_t;

typedef struct {
  unsigned int bits[4];
  value_type_t value_type;
} s21_decimal;

typedef struct {
  unsigned int bits[7];
  value_type_t value_type;
} ext_dec;

enum { L, M, H, L_EX, M_EX, H_EX, F };
enum { LOW, MID, HIGH, FRAC };
enum { SUCCESS, CONVERTING_ERROR, ERROR = 1 };
enum { TRUE, FALSE };

s21_decimal s21_add(s21_decimal in1, s21_decimal in2);  // 1
s21_decimal s21_sub(s21_decimal in1, s21_decimal in2);  // 2
s21_decimal s21_mul(s21_decimal in1, s21_decimal in2);  // 3
s21_decimal s21_div(s21_decimal in1, s21_decimal in2);  // 4
s21_decimal s21_mod(s21_decimal in1, s21_decimal in2);  // 5

int s21_is_less(s21_decimal in1, s21_decimal in2);              // 6
int s21_is_less_or_equal(s21_decimal in1, s21_decimal in2);     // 7
int s21_is_greater(s21_decimal in1, s21_decimal in2);           // 8
int s21_is_greater_or_equal(s21_decimal in1, s21_decimal in2);  // 9
int s21_is_equal(s21_decimal in1, s21_decimal in2);             // 10
int s21_is_not_equal(s21_decimal in1, s21_decimal in2);         // 11

int s21_from_int_to_decimal(int src, s21_decimal *dst);      // 12
int s21_from_float_to_decimal(float src, s21_decimal *dst);  // 13
int s21_from_decimal_to_int(s21_decimal src, int *dst);      // 14
int s21_from_decimal_to_float(s21_decimal src, float *dst);  // 15

s21_decimal s21_floor(s21_decimal);     // 16
s21_decimal s21_round(s21_decimal);     // 17
s21_decimal s21_truncate(s21_decimal);  // 18
s21_decimal s21_negate(s21_decimal);    // 19

//* Auxiliary functions

void dec_init(s21_decimal *in);
void init_overflow(s21_decimal *in, int num);
void init_nan(s21_decimal *in);

s21_decimal body_add(s21_decimal in1, s21_decimal in2);
s21_decimal body_sub(s21_decimal in1, s21_decimal in2);
s21_decimal body_mul(s21_decimal in1, s21_decimal in2);
s21_decimal body_div(s21_decimal divt, s21_decimal divr);

s21_decimal div10(s21_decimal in);
s21_decimal mul10(s21_decimal in);

int get_bit(s21_decimal dec, int n);
void set_bit(s21_decimal *in, int n);
void clr_bit(s21_decimal *in, int n);
int find_first_bit(s21_decimal in);

int get_sign(s21_decimal in);
void set_sign(s21_decimal *in);
void clr_sign(s21_decimal *in);

unsigned int get_scale(s21_decimal in);
void set_scale(s21_decimal *in, unsigned int scale);

void body_shift_left(s21_decimal *in);
void body_shift_right(s21_decimal *in);
int scale_low(s21_decimal *dec, unsigned int val);
int scale_up(s21_decimal *dec, unsigned int val);
void scale_equaliz(s21_decimal *in1, s21_decimal *in2);

//* func for extra decimal

void decimal_to_ext(ext_dec *dest, s21_decimal src);
void ext_dec_init(ext_dec *in);

int ext_find_first_bit(ext_dec in);
unsigned int ext_get_scale(ext_dec dec);
void ext_set_scale(ext_dec *dec, unsigned int scale);
int ext_get_sign(ext_dec in);
void ext_set_sign(ext_dec *in);
void ext_clr_sign(ext_dec *in);

int ext_get_bit(ext_dec in, int tmp);
void ext_set_bit(ext_dec *in, int tmp);
void ext_clr_bit(ext_dec *in, int tmp);

ext_dec ext_div10_remainder(ext_dec dec);
ext_dec ext_div10(ext_dec dec);

void ext_mul10(ext_dec *dec);
int ext_scale_low_remainder(ext_dec *dec, unsigned int val);
int ext_scale_low(ext_dec *dec, unsigned int val);
int ext_scale_up(ext_dec *dec, unsigned int val);
void ext_scale_equaliz(ext_dec *in1, ext_dec *in2);
void ext_body_shift_left(ext_dec *in);
void ext_body_shift_right(ext_dec *in);

ext_dec ext_body_add(ext_dec in1, ext_dec in2);
ext_dec ext_body_sub(ext_dec in1, ext_dec in2);
ext_dec ext_body_div(ext_dec in1, ext_dec in2, int *mistake);

int ext_is_greater(ext_dec in1, ext_dec in2);
int ext_is_greater_or_equal(ext_dec in1, ext_dec in2);
int ext_is_equal(ext_dec in1, ext_dec in2);

// функции печати
void print_frac_bin(unsigned int in);
void print_int_bin(unsigned int in);
void print_decimal_bin(s21_decimal in);
void print_ExtDecimal(ext_dec in);

#endif  // SRC_S21_DECIMAL_H_
