#include "s21_decimal.h"

// Auxiliary functions

void dec_init(s21_decimal *in) {  // инициализируем нулевой decimal
  in->bits[LOW] = 0x0;
  in->bits[MID] = 0x0;
  in->bits[HIGH] = 0x0;
  in->bits[FRAC] = 0x0;
  in->value_type = s21_NORMAL_VALUE;
}

void init_overflow(s21_decimal *in, int n) {  // инициализируем переполнение
  in->bits[LOW] = 0x0;
  in->bits[MID] = 0x0;
  in->bits[HIGH] = 0x0;
  in->bits[FRAC] = 0x0;
  if (n == 1) in->value_type = s21_INFINITY;
  if (n == -1) in->value_type = s21_NEGATIVE_INFINITY;
}
void init_nan(s21_decimal *in) {  // инициализируем nan
  in->bits[LOW] = 0x0;
  in->bits[MID] = 0x0;
  in->bits[HIGH] = 0x0;
  in->bits[FRAC] = 0x0;
  in->value_type = s21_NAN;
}

int get_bit(s21_decimal in, int tmp) {  // получить бит
  return !!(in.bits[tmp / 32] & (1u << (tmp % 32)));
}
void set_bit(s21_decimal *in, int tmp) {  // установить бит
  in->bits[tmp / 32] |= (1 << (tmp % 32));
}

void clr_bit(s21_decimal *in, int tmp) {  // сбросить бит
  in->bits[tmp / 32] &= ~(1 << (tmp % 32));
}

int get_sign(s21_decimal in) {  // получить бит знака
  return !!(SIGN_MINUS & in.bits[FRAC]);
}
void set_sign(s21_decimal *in) {  // устанвить бит знака
  in->bits[FRAC] |= SIGN_MINUS;
}
void clr_sign(s21_decimal *in) {  // сбросить бит знака
  in->bits[FRAC] &= ~SIGN_MINUS;
}

int find_first_bit(s21_decimal in) {  // поиск первого ненулевого бита
  int bi;
  for (bi = 95; bi >= 0; bi--) {
    if (get_bit(in, bi)) break;
  }
  return bi;
}

unsigned int get_scale(s21_decimal in) {
  // получить значение scale
  return (in.bits[FRAC] & SCALE_MASK) >> 16;
}
void set_scale(s21_decimal *in, unsigned int scale) {
  // установить значение scale
  in->bits[FRAC] = (in->bits[FRAC] & SIGN_MINUS) | (scale << 16);
}

s21_decimal div10(s21_decimal in) {
  // делим на 10 (не трогаем scale)
  s21_decimal out = DEC_ZERO;
  if (in.value_type == s21_NORMAL_VALUE) {
    unsigned int remainder = 0;
    for (int i = HIGH; i >= LOW; i--) {
      unsigned long long tmp =
          ((unsigned long long)remainder << 32) | (unsigned int)in.bits[i];
      remainder = tmp % 10u;
      out.bits[i] = tmp / 10u;
    }
  }
  if (get_sign(in)) set_sign(&out);
  return out;
}

s21_decimal mul10(s21_decimal in) {
  // умножение на 10 (не трогаем scale)
  s21_decimal out = DEC_ZERO;
  if (in.value_type == s21_NORMAL_VALUE) {
    unsigned int carry = 0;
    for (int i = LOW; i <= HIGH; i++) {
      unsigned long long tmp = 0;
      tmp = (unsigned long long)in.bits[i] * 10u + carry;
      carry = tmp / 0x100000000;
      out.bits[i] = tmp % 0x100000000;
    }
    if (carry > 0) {
      dec_init(&out);
      out.value_type = s21_INFINITY;
    }
  }
  if (get_sign(in)) set_sign(&out);
  return out;
}

int scale_low(s21_decimal *dec, unsigned int val) {
  // понижение scale
  int result = SUCCESS;
  unsigned int scale = get_scale(*dec);
  if (val <= scale) {
    for (unsigned int n = 0; n < val; n++, scale--) {
      *dec = div10(*dec);
    }
    set_scale(dec, scale);
  } else {
    result = ERROR;
  }
  return result;
}

int scale_up(s21_decimal *dec, unsigned int val) {
  // повышение scale
  int result = SUCCESS;
  unsigned int scale = get_scale(*dec);
  s21_decimal dec_tmp = *dec;
  if ((scale + val) <= 28) {
    for (unsigned int n = 0; n < val; n++, scale++) {
      dec_tmp = mul10(dec_tmp);
      if (dec_tmp.value_type == s21_INFINITY) {
        result = ERROR;
        break;
      }
    }
    if (!result) {
      *dec = dec_tmp;
      set_scale(dec, scale);
    }
  } else {
    result = ERROR;
  }
  return result;
}

void scale_equaliz(s21_decimal *in1, s21_decimal *in2) {
  // приведение к общему scale
  unsigned int scale1 = get_scale(*in1);
  unsigned int scale2 = get_scale(*in2);
  unsigned int scale_max = (scale1 >= scale2) ? scale1 : scale2;
  s21_decimal in1_tmp = *in1, in2_tmp = *in2;
  if (scale1 != scale_max) {
    while (scale1 != scale_max && !scale_up(&in1_tmp, 1)) {
      if (in1_tmp.value_type != s21_NORMAL_VALUE) break;
      scale1 = get_scale(in1_tmp);
    }
    if (scale1 != scale2 || in1_tmp.value_type != s21_NORMAL_VALUE) {
      scale_up(in1, (scale1 - get_scale(*in1)));
      while (scale1 != scale2 && !scale_low(in2, 1)) {
        scale2 = get_scale(*in2);
      }
    } else {
      *in1 = in1_tmp;
    }
  } else if (scale2 != scale_max) {
    while (scale2 != scale_max && !scale_up(&in2_tmp, 1)) {
      if (in2_tmp.value_type != s21_NORMAL_VALUE) break;
      scale2 = get_scale(in2_tmp);
    }
    if (scale1 != scale2 || in2_tmp.value_type != s21_NORMAL_VALUE) {
      scale_up(in2, (scale2 - get_scale(*in2)));
      while (scale1 != scale2 && !scale_low(in1, 1)) {
        scale1 = get_scale(*in1);
      }
    } else {
      *in2 = in2_tmp;
    }
  }
}

//* функции для extra decimal

void decimal_to_ext(ext_dec *dest,
                    s21_decimal src) {  // перенос децимала в экстрадецимал
  dest->bits[L] = src.bits[LOW];
  dest->bits[M] = src.bits[MID];
  dest->bits[H] = src.bits[HIGH];
  dest->bits[F] = src.bits[FRAC];
  dest->bits[L_EX] = 0;
  dest->bits[M_EX] = 0;
  dest->bits[H_EX] = 0;
  dest->value_type = src.value_type;
}

int ext_find_first_bit(ext_dec in) {  // поиск первого ненулевого бита
  int bi;
  for (bi = 191; bi >= 0; bi--)
    if (ext_get_bit(in, bi)) break;
  return bi;
}

int ext_find_last_bit(ext_dec in) {  // поиск последнего ненулевого бита
  int bi;
  for (bi = 0; bi < 192; bi++)
    if (ext_get_bit(in, bi)) break;
  return bi;
}

unsigned int ext_get_scale(ext_dec in) {  // получить значение scale
  return (in.bits[F] & SCALE_MASK) >> 16;
}
void ext_set_scale(ext_dec *in,
                   unsigned int scale) {  // установить значение scale
  in->bits[F] = (in->bits[F] & SIGN_MINUS) | (scale << 16);
}

int ext_get_sign(ext_dec in) {  // получить бит знака
  return !!(SIGN_MINUS & in.bits[F]);
}
void ext_set_sign(ext_dec *in) {  // установить бит знака
  in->bits[F] |= SIGN_MINUS;
}
void ext_clr_sign(ext_dec *in) {  // сбросить бит знака
  in->bits[F] &= ~SIGN_MINUS;
}

int ext_get_bit(ext_dec in, int tmp) {  // получить бит
  return !!(in.bits[tmp / 32] & (1u << (tmp % 32)));
}

void ext_set_bit(ext_dec *in, int tmp) {  // установить бит
  in->bits[tmp / 32] |= (1u << (tmp % 32));
}

void ext_clr_bit(ext_dec *in, int tmp) {  // сбросить бит
  in->bits[tmp / 32] &= ~(1u << (tmp % 32));
}

ext_dec ext_div10_remainder(ext_dec dec) {  // делим на 10 (не трогаем scale)
  ext_dec out = EXT_DEC_ZERO;
  if (dec.value_type == s21_NORMAL_VALUE) {
    unsigned int remainder = 0;
    for (int i = H_EX; i >= L; i--) {
      unsigned long long tmp =
          ((unsigned long long)remainder << 32) | (unsigned int)dec.bits[i];
      remainder = tmp % 10u;
      if (remainder >= 5 && i == LOW) {
        out.bits[i] = (tmp / 10u) + 1;
      } else {
        out.bits[i] = tmp / 10u;
      }
    }
  }
  if (ext_get_sign(dec)) ext_set_sign(&out);
  return out;
}

ext_dec ext_div10(ext_dec dec) {  // делим на 10 (не трогаем scale)
  ext_dec out = EXT_DEC_ZERO;
  if (dec.value_type == s21_NORMAL_VALUE) {
    unsigned int remainder = 0;
    for (int i = H_EX; i >= L; i--) {
      unsigned long long tmp =
          ((unsigned long long)remainder << 32) | (unsigned int)dec.bits[i];
      remainder = tmp % 10u;
      out.bits[i] = tmp / 10u;
    }
  }
  if (ext_get_sign(dec)) ext_set_sign(&out);
  return out;
}

int ext_scale_low(ext_dec *dec, unsigned int val) {
  // понижение scale
  int result = SUCCESS;
  unsigned int scale = ext_get_scale(*dec);
  if (val <= scale) {
    for (unsigned int n = 0; n < val; n++, scale--) {
      *dec = ext_div10(*dec);
    }
    ext_set_scale(dec, scale);
  } else {
    result = ERROR;
  }
  return result;
}

void ext_mul10(ext_dec *dec) {  // умножение на 10 (не трогаем scale)
  if (dec->value_type == s21_NORMAL_VALUE) {
    unsigned int carry = 0;
    for (int i = L; i <= H_EX; i++) {
      unsigned long long tmp = 0;
      tmp = (unsigned long long)dec->bits[i] * 10u + carry;
      carry = tmp / (1l << 32);
      dec->bits[i] = tmp % (1l << 32);
    }
    if (carry > 0) {
      dec->value_type = s21_INFINITY;
    }
  }
}

int ext_scale_low_remainder(ext_dec *dec, unsigned int val) {
  // понижение scale
  int result = SUCCESS;
  unsigned int scale = ext_get_scale(*dec);
  if (val <= scale) {
    for (unsigned int n = 0; n < val; n++, scale--) {
      *dec = ext_div10_remainder(*dec);
    }
    ext_set_scale(dec, scale);
  } else {
    result = ERROR;
  }
  return result;
}

int ext_scale_up(ext_dec *dec, unsigned int val) {
  // повышение scale
  int result = SUCCESS;
  unsigned int scale = ext_get_scale(*dec);
  if ((scale + val) <= 28) {
    for (unsigned int n = 0; n < val; n++, scale++) {
      ext_mul10(dec);
      if (dec->value_type == s21_INFINITY) {
        result = ERROR;
        break;
      }
    }
    if (!result) {
      ext_set_scale(dec, scale);
    }
  } else {
    result = ERROR;
  }
  return result;
}

void ext_scale_equaliz(ext_dec *in1, ext_dec *in2) {
  // приведение к общему scale
  unsigned int scale1 = ext_get_scale(*in1);
  unsigned int scale2 = ext_get_scale(*in2);
  unsigned int scale_max = (scale1 >= scale2) ? scale1 : scale2;
  if (scale1 != scale_max) {
    while (scale1 != scale_max && !ext_scale_up(in1, 1)) {
      scale1 = ext_get_scale(*in1);
    }
  }
  if (scale2 != scale_max) {
    while (scale2 != scale_max && !ext_scale_up(in2, 1)) {
      scale2 = ext_get_scale(*in2);
    }
  }
}

void ext_body_shift_left(ext_dec *in) {
  // сдвиг мантиссы вправо
  if (ext_get_bit(*in, 191)) {
    in->value_type = s21_INFINITY;
  }
  in->bits[H_EX] = (in->bits[H_EX] << 1) + ext_get_bit(*in, 159);
  in->bits[M_EX] = (in->bits[M_EX] << 1) + ext_get_bit(*in, 127);
  in->bits[L_EX] = (in->bits[L_EX] << 1) + ext_get_bit(*in, 95);
  in->bits[H] = (in->bits[H] << 1) + ext_get_bit(*in, 63);
  in->bits[M] = (in->bits[M] << 1) + ext_get_bit(*in, 31);
  in->bits[L] = (in->bits[L] << 1);
}

void ext_body_shift_right(ext_dec *in) {
  // сдвиг мантиссы вправо
  in->bits[L] = (in->bits[L] >> 1);
  if (ext_get_bit(*in, 32)) ext_set_bit(in, 31);
  in->bits[M] = (in->bits[M] >> 1);
  if (ext_get_bit(*in, 64)) ext_set_bit(in, 63);
  in->bits[H] = (in->bits[H] >> 1);
  if (ext_get_bit(*in, 96)) ext_set_bit(in, 95);
  in->bits[L_EX] = (in->bits[L_EX] >> 1);
  if (ext_get_bit(*in, 128)) ext_set_bit(in, 127);
  in->bits[M_EX] = (in->bits[M_EX] >> 1);
  if (ext_get_bit(*in, 160)) ext_set_bit(in, 159);
  in->bits[H_EX] = (in->bits[H_EX] >> 1);
}

ext_dec ext_body_add(ext_dec in1, ext_dec in2) {
  // сложение целой части
  ext_dec out = {{0, 0, 0, 0, 0, 0, 0x0}, s21_NORMAL_VALUE};
  int carry = 0;
  unsigned int sum = in1.bits[L] + in2.bits[L];
  out.bits[L] = sum;
  if (sum < in1.bits[L]) carry = 1;
  sum = in1.bits[M] + in2.bits[M] + carry;
  carry = 0;
  out.bits[M] = sum;
  if (sum < in1.bits[M]) carry = 1;
  sum = in1.bits[H] + in2.bits[H] + carry;
  carry = 0;
  out.bits[H] = sum;
  if (sum < in1.bits[H]) carry = 1;
  sum = in1.bits[L_EX] + in2.bits[L_EX] + carry;
  carry = 0;
  out.bits[L_EX] = sum;
  if (sum < in1.bits[L_EX]) carry = 1;
  sum = in1.bits[M_EX] + in2.bits[M_EX] + carry;
  carry = 0;
  out.bits[M_EX] = sum;
  if (sum < in1.bits[M_EX]) carry = 1;
  sum = in1.bits[H_EX] + in2.bits[H_EX] + carry;
  // carry = 0;
  out.bits[H_EX] = sum;
  if (sum < in1.bits[H_EX]) {
    ext_dec_init(&out);
    if (ext_get_sign(in1) && ext_get_sign(in2))
      out.value_type = s21_NEGATIVE_INFINITY;
    else
      out.value_type = s21_INFINITY;
  }
  return out;
}

ext_dec ext_body_sub(ext_dec in1, ext_dec in2) {
  // вычитание целой части
  ext_dec out = {{0, 0, 0, 0, 0, 0, 0x0}, s21_NORMAL_VALUE};
  int borrow = 0;
  unsigned int result = in1.bits[L] - in2.bits[L];
  out.bits[L] = result;
  if (result > in1.bits[L]) borrow = 1;
  result = in1.bits[M] - in2.bits[M] - borrow;
  borrow = 0;
  out.bits[M] = result;
  if (result > in1.bits[M]) borrow = 1;
  result = in1.bits[H] - in2.bits[H] - borrow;
  borrow = 0;
  out.bits[H] = result;
  if (result > in1.bits[H]) borrow = 1;
  result = in1.bits[L_EX] - in2.bits[L_EX] - borrow;
  borrow = 0;
  out.bits[L_EX] = result;
  if (result > in1.bits[L_EX]) borrow = 1;
  result = in1.bits[M_EX] - in2.bits[M_EX] - borrow;
  borrow = 0;
  out.bits[M_EX] = result;
  if (result > in1.bits[M_EX]) borrow = 1;
  result = in1.bits[H_EX] - in2.bits[H_EX] - borrow;
  // borrow = 0;
  out.bits[H_EX] = result;
  if (result > in1.bits[H_EX]) ext_set_sign(&out);
  return out;
}

ext_dec ext_body_mul(ext_dec in1, ext_dec in2) {
  ext_dec out = {{0, 0, 0, 0, 0, 0, 0x0}, s21_NORMAL_VALUE};
  ext_dec shifted = in1;
  for (int ii = 0; ii < 96; ii++) {
    if (ext_get_bit(in2, ii)) out = ext_body_add(out, shifted);
    if (out.value_type != s21_NORMAL_VALUE) break;
    ext_body_shift_left(&shifted);
  }
  return out;
}

ext_dec ext_body_div(ext_dec delitel, ext_dec delimoe, int *mistake) {
  // body division
  ext_dec dec_zero = EXT_DEC_ZERO;
  ext_dec res = EXT_DEC_ZERO;
  ext_dec tempd;
  ext_dec shifted = delitel;
  int shift_count = 0;
  *mistake = 0;
  while (shift_count < 192) {
    tempd = ext_body_sub(shifted, delimoe);
    if (ext_get_sign(tempd) == 1) break;
    ext_body_shift_right(&shifted);
    shift_count++;
  }
  if (shift_count > 191) res.value_type = s21_NAN;
  ext_body_shift_left(&shifted);
  if (ext_get_bit(delitel, --shift_count)) ext_set_bit(&shifted, 0);
  while (shift_count >= 0) {
    tempd = ext_body_sub(shifted, delimoe);
    if (ext_get_sign(tempd) == 0) {
      ext_set_bit(&res, 0);
      shifted = tempd;
    }
    if (!ext_is_equal(tempd, dec_zero) &&
        ((shift_count == ext_find_last_bit(delitel) || shift_count == 0))) {
      *mistake = 1;
    }
    if (shift_count == 0) break;
    ext_body_shift_left(&res);
    ext_body_shift_left(&shifted);
    if (ext_get_bit(delitel, --shift_count)) ext_set_bit(&shifted, 0);
  }
  return res;
}

void ext_dec_init(ext_dec *in) {
  in->bits[L] = 0;
  in->bits[M] = 0;
  in->bits[H] = 0;
  in->bits[F] = 0;
  in->bits[L_EX] = 0;
  in->bits[M_EX] = 0;
  in->bits[H_EX] = 0;
  in->value_type = s21_NORMAL_VALUE;
}

int ext_is_greater(ext_dec in1, ext_dec in2) {
  // in1 больше in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if (in1.value_type == s21_NORMAL_VALUE &&
      in2.value_type == s21_NORMAL_VALUE) {
    ext_scale_equaliz(&in1, &in2);
    int bi = 191, count = 0;
    while (bi >= 0) {
      if (ext_get_bit(in1, bi) || ext_get_bit(in2, bi)) count++;
      if (ext_get_bit(in1, bi) != ext_get_bit(in2, bi)) {
        break;
      }
      bi--;
    }
    if ((count == 0 && bi < 0)) {
      result = FALSE;
    } else if (!ext_get_bit(in1, bi) && ext_get_bit(in2, bi)) {
      if (!ext_get_sign(in1) && !ext_get_sign(in2))
        result = FALSE;
      else if (ext_get_sign(in1) && ext_get_sign(in2))
        result = TRUE;
      else if (!ext_get_sign(in1) && ext_get_sign(in2))
        result = TRUE;
      else if (ext_get_sign(in1) && !ext_get_sign(in2))
        result = FALSE;
    } else if (ext_get_bit(in1, bi) && !ext_get_bit(in2, bi)) {
      if (!ext_get_sign(in1) && !ext_get_sign(in2))
        result = TRUE;
      else if (ext_get_sign(in1) && ext_get_sign(in2))
        result = FALSE;
      else if (!ext_get_sign(in1) && ext_get_sign(in2))
        result = TRUE;
      else if (ext_get_sign(in1) && !ext_get_sign(in2))
        result = FALSE;
    } else if (count != 0 && bi == 0) {
      if (ext_get_sign(in1) && !ext_get_sign(in2)) result = FALSE;
      if (!ext_get_sign(in1) && ext_get_sign(in2)) result = TRUE;
    }
  }
  return result;
}

int ext_is_equal(ext_dec in1, ext_dec in2) {
  // in1 равно in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if (in1.value_type == s21_NORMAL_VALUE &&
      in2.value_type == s21_NORMAL_VALUE) {
    result = TRUE;
    int count = 0;
    ext_scale_equaliz(&in1, &in2);
    if (ext_get_sign(in1) != ext_get_sign(in2)) result = FALSE;
    for (int bi = 191; bi >= 0; bi--) {
      if (ext_get_bit(in1, bi) || ext_get_bit(in2, bi)) count++;
      if (ext_get_bit(in1, bi) != ext_get_bit(in2, bi)) {
        result = FALSE;
        break;
      }
      if ((count == 0 && bi == 0) && (ext_get_sign(in1) != ext_get_sign(in2))) {
        result = TRUE;
      }
    }
  }
  return result;
}

int ext_is_greater_or_equal(ext_dec in1, ext_dec in2) {
  // in1 больше или равно in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    result = FALSE;
  } else if (!ext_is_greater(in1, in2) || !ext_is_equal(in1, in2)) {
    result = TRUE;
  }
  return result;
}

//! s21_decimal lib

s21_decimal s21_add(s21_decimal in1, s21_decimal in2) {
  // сложение ч/з extra decimal
  s21_decimal result = DEC_ZERO;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    result.value_type = s21_NAN;
  } else if (in1.value_type == s21_INFINITY &&
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result.value_type = s21_NAN;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY &&
             in2.value_type == s21_INFINITY) {
    result.value_type = s21_NAN;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY ||
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result.value_type = s21_NEGATIVE_INFINITY;
  } else if (in1.value_type == s21_INFINITY || in2.value_type == s21_INFINITY) {
    result.value_type = s21_INFINITY;
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    ext_dec n1, n2;
    ext_dec res = {{0, 0, 0, 0, 0, 0, 0}, s21_NORMAL_VALUE};
    decimal_to_ext(&n1, in1);
    decimal_to_ext(&n2, in2);
    ext_scale_equaliz(&n1, &n2);
    unsigned int scale = ext_get_scale(n1);
    if ((ext_get_sign(n1) && ext_get_sign(n2)) ||
        (!ext_get_sign(n1) && !ext_get_sign(n2))) {
      res = ext_body_add(n1, n2);
      if (result.value_type == s21_NORMAL_VALUE) {
        if (ext_get_sign(n1) && ext_get_sign(n2)) ext_set_sign(&res);
      }
    } else if (!ext_get_sign(n1) && ext_get_sign(n2)) {
      ext_clr_sign(&n2);
      if (!ext_is_greater(n1, n2)) {
        res = ext_body_sub(n1, n2);
      } else {
        res = ext_body_sub(n2, n1);
        ext_set_sign(&res);
      }
    } else if (ext_get_sign(n1) && !ext_get_sign(n2)) {
      ext_clr_sign(&n1);
      if (!ext_is_greater(n1, n2)) {
        res = ext_body_sub(n1, n2);
        ext_set_sign(&res);
      } else {
        res = ext_body_sub(n2, n1);
      }
    }
    if (res.value_type == s21_NORMAL_VALUE) {
      ext_set_scale(&res, scale);
      ext_dec temp;
      while (ext_find_first_bit(res) > 95) {
        if (scale == 0) break;
        temp = res;
        ext_scale_low(&res, 1);
        scale--;
        if (ext_find_first_bit(res) < 96) {
          ext_scale_low_remainder(&temp, 1);
          res = temp;
        }
      }
      if (ext_find_first_bit(res) < 96) {
        result.bits[LOW] = res.bits[L];
        result.bits[MID] = res.bits[M];
        result.bits[HIGH] = res.bits[H];
        result.bits[FRAC] = res.bits[F];
      } else {
        if (get_sign(in1) && get_sign(in2))
          init_overflow(&result, -1);
        else
          init_overflow(&result, 1);
      }
    }
  }
  return result;
}

s21_decimal s21_sub(s21_decimal in1, s21_decimal in2) {  // вычитание
  s21_decimal result = DEC_ZERO;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    result.value_type = s21_NAN;
  } else if (in1.value_type == s21_INFINITY && in2.value_type == s21_INFINITY) {
    result.value_type = s21_NAN;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY &&
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result.value_type = s21_NAN;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY ||
             in2.value_type == s21_INFINITY) {
    result.value_type = s21_NEGATIVE_INFINITY;
  } else if (in1.value_type == s21_INFINITY ||
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result.value_type = s21_INFINITY;
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    ext_dec n1, n2;
    ext_dec res = {{0, 0, 0, 0, 0, 0, 0}, s21_NORMAL_VALUE};
    decimal_to_ext(&n1, in1);
    decimal_to_ext(&n2, in2);
    ext_scale_equaliz(&n1, &n2);
    unsigned int scale = ext_get_scale(n1);
    if (!get_sign(in1) && !get_sign(in2)) {
      if (!ext_is_greater_or_equal(n1, n2)) {
        res = ext_body_sub(n1, n2);
      } else {
        res = ext_body_sub(n2, n1);
        ext_set_sign(&res);
      }
    } else if (!get_sign(in1) && get_sign(in2)) {
      ext_clr_sign(&n2);
      res = ext_body_add(n1, n2);
    } else if (get_sign(in1) && !get_sign(in2)) {
      ext_clr_sign(&n1);
      res = ext_body_add(n1, n2);
      ext_set_sign(&res);
    } else if (get_sign(in1) && get_sign(in2)) {
      if (!ext_is_greater_or_equal(n1, n2)) {
        // -1 - (-2) = -1 + 2 = 2 - 1 = 1
        ext_clr_sign(&n1);
        ext_clr_sign(&n2);
        res = ext_body_sub(n2, n1);
      } else {  // -2 - (-1) = -2 + 1 = -(2 - 1) = -1
        ext_clr_sign(&n1);
        ext_clr_sign(&n2);
        res = ext_body_sub(n1, n2);
        ext_set_sign(&res);
      }
    }
    ext_set_scale(&res, scale);
    ext_dec temp;
    while (ext_find_first_bit(res) > 95) {
      if (scale == 0) break;
      temp = res;
      ext_scale_low(&res, 1);
      scale--;
      if (ext_find_first_bit(res) < 96) {
        ext_scale_low_remainder(&temp, 1);
        res = temp;
      }
    }
    if (ext_find_first_bit(res) < 96) {
      result.bits[LOW] = res.bits[L];
      result.bits[MID] = res.bits[M];
      result.bits[HIGH] = res.bits[H];
      result.bits[FRAC] = res.bits[F];
    } else {
      if (!get_sign(in1) && get_sign(in2)) init_overflow(&result, 1);
      if (get_sign(in1) && !get_sign(in2)) init_overflow(&result, -1);
    }
  }
  return result;
}

s21_decimal s21_mul(s21_decimal in1, s21_decimal in2) {
  s21_decimal result = DEC_ZERO;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    result.value_type = s21_NAN;
  } else if ((in1.value_type == s21_INFINITY &&
              in2.value_type == s21_INFINITY) ||
             (in1.value_type == s21_NEGATIVE_INFINITY &&
              in2.value_type == s21_NEGATIVE_INFINITY) ||
             (in1.value_type == s21_NORMAL_VALUE &&
              in2.value_type == s21_INFINITY) ||
             (in1.value_type == s21_INFINITY &&
              in2.value_type == s21_NORMAL_VALUE)) {
    result.value_type = s21_INFINITY;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY ||
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result.value_type = s21_NEGATIVE_INFINITY;
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    int sign = 0;
    s21_decimal dec_zero = DEC_ZERO;
    if ((!get_sign(in1) && get_sign(in2)) || (get_sign(in1) && !get_sign(in2)))
      sign = 1;
    clr_sign(&in1);
    clr_sign(&in2);
    unsigned int scale1 = get_scale(in1);
    unsigned int scale2 = get_scale(in2);
    int scale = scale1 + scale2;
    int overflow = 0;
    ext_dec shifted;
    decimal_to_ext(&shifted, in2);
    ext_dec not_shifted;
    decimal_to_ext(&not_shifted, in1);
    ext_dec tmp;
    ext_dec_init(&tmp);
    ext_dec tmp1;
    for (int ii = 0; ii <= find_first_bit(in1); ii++) {
      ext_dec_init(&tmp1);
      if (ext_get_bit(not_shifted, ii)) {
        tmp1 = ext_body_add(tmp, shifted);
        tmp = tmp1;
      }
      ext_body_shift_left(&shifted);
    }
    ext_set_scale(&tmp, scale);
    ext_dec temp;
    while (ext_find_first_bit(tmp) > 95 || scale > 28) {
      temp = tmp;
      ext_scale_low(&tmp, 1);
      scale--;
      if (ext_find_first_bit(tmp) < 96) {
        ext_scale_low_remainder(&temp, 1);
        tmp = temp;
      }
      if (scale < 0) {
        overflow = 1;
        break;
      }
    }
    if (overflow == 0) {
      result.bits[HIGH] = tmp.bits[H];
      result.bits[MID] = tmp.bits[M];
      result.bits[LOW] = tmp.bits[L];
    } else {
      if (sign == 1)
        result.value_type = s21_NEGATIVE_INFINITY;
      else
        result.value_type = s21_INFINITY;
    }
    if (!s21_is_equal(in1, dec_zero)) {
      set_scale(&result, get_scale(in1));
    } else if (!s21_is_equal(in2, dec_zero)) {
      set_scale(&result, get_scale(in2));
    } else if (overflow == 0) {
      set_scale(&result, scale);
    }
    if (sign == 1 && overflow == 0 &&
        (s21_is_equal(in1, dec_zero) || s21_is_equal(in2, dec_zero)))
      set_sign(&result);
  }
  return result;
}

s21_decimal s21_div(s21_decimal in1, s21_decimal in2) {
  s21_decimal result = DEC_ZERO;
  s21_decimal dec_zero = DEC_ZERO;
  int sign;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    init_nan(&result);
  } else if ((in1.value_type == s21_INFINITY ||
              in1.value_type == s21_NEGATIVE_INFINITY) &&
             (in2.value_type == s21_INFINITY ||
              in2.value_type == s21_NEGATIVE_INFINITY)) {
    init_nan(&result);
  } else if (in1.value_type == s21_INFINITY &&
             in2.value_type == s21_NORMAL_VALUE) {
    sign = get_sign(in2);
    if (!s21_is_equal(in2, dec_zero)) {
      init_nan(&result);
    } else {
      if (sign)
        init_overflow(&result, -1);
      else
        init_overflow(&result, 1);
    }
  } else if (in1.value_type == s21_NEGATIVE_INFINITY &&
             in2.value_type == s21_NORMAL_VALUE) {
    sign = get_sign(in2);
    if (!s21_is_equal(in2, dec_zero)) {
      init_nan(&result);
    } else {
      if (sign)
        init_overflow(&result, 1);
      else
        init_overflow(&result, -1);
    }
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_INFINITY) {
    sign = get_sign(in1);
    if (!s21_is_equal(in1, dec_zero)) {
      init_nan(&result);
    } else {
      if (sign) set_sign(&result);
    }
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NEGATIVE_INFINITY) {
    sign = get_sign(in1);
    if (!s21_is_equal(in1, dec_zero)) {
      init_nan(&result);
    } else {
      if (!sign) set_sign(&result);
    }
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    s21_decimal dec_one = DEC_ONE;
    s21_decimal dec_minus_one = DEC_MINUS_ONE;
    int scale = 0;
    unsigned int scale1 = get_scale(in1);
    unsigned int scale2 = get_scale(in2);
    scale = scale1 - scale2;
    if (scale < 0) scale = 0;
    if (!s21_is_equal(in1, dec_zero) && !s21_is_equal(in2, dec_zero)) {
      init_nan(&result);
    } else if (!s21_is_equal(in2, dec_zero)) {
      sign = get_sign(in2);
      if (sign) {
        if (get_sign(in1)) init_overflow(&result, 1);
        if (!get_sign(in1)) init_overflow(&result, -1);
      } else {
        if (get_sign(in1)) init_overflow(&result, -1);
        if (!get_sign(in1)) init_overflow(&result, 1);
      }
    } else if (!s21_is_equal(in2, dec_one)) {
      result = in1;
      set_scale(&result, scale);
    } else if (!s21_is_equal(in2, dec_minus_one)) {
      result = s21_negate(in1);
      set_scale(&result, scale);
    } else if (!s21_is_equal(in1, dec_zero)) {
      sign = get_sign(in1);
      if (sign) {
        if (!get_sign(in2)) set_sign(&result);
      } else {
        if (get_sign(in2)) set_sign(&result);
      }
      set_scale(&result, scale);
    } else if (!s21_is_equal(in1, in2)) {
      result = dec_one;
      set_scale(&result, scale);
    } else {
      scale = 0;
      sign = 0;
      int mistake = 0;
      if ((get_sign(in1) && !get_sign(in2)) ||
          (!get_sign(in1) && get_sign(in2)))
        sign = 1;
      clr_sign(&in1);
      clr_sign(&in2);
      ext_dec result_tmp;
      ext_dec delitel, delimoe;
      decimal_to_ext(&delitel, in2);
      decimal_to_ext(&delimoe, in1);
      if ((int)scale2 >= 0) {
        ext_set_scale(&delimoe, 0);
        ext_scale_up(&delimoe, scale2);
        ext_set_scale(&delimoe, 0);
        if (scale1 > scale2) scale = scale1;
      }
      if (scale2 > scale1 && scale1 > 0) {
        scale = scale1;
      }
      ext_set_scale(&delimoe, 0);
      ext_set_scale(&delitel, 0);
      while (mistake == 0) {
        result_tmp = ext_body_div(delimoe, delitel, &mistake);
        if (mistake == 0 && scale < 29 &&
            ext_find_first_bit(result_tmp) <= 95) {
          ext_mul10(&delimoe);
          scale++;
          mistake = 0;
        }

        ext_dec tmp;
        while (ext_find_first_bit(result_tmp) > 95) {
          tmp = result_tmp;
          result_tmp = ext_div10(result_tmp);
          scale--;
          if (ext_find_first_bit(result_tmp) < 96) {
            mistake = 1;
            result_tmp = ext_div10_remainder(tmp);
          }
          if (ext_find_first_bit(result_tmp) > 95 && scale == 0) {
            result_tmp.value_type = s21_INFINITY;
            mistake = 1;
            break;
          }
        }
        if (scale == 29) {
          ext_scale_up(&delimoe, 1);
          ext_scale_up(&delitel, 1);
          result_tmp = ext_body_div(delimoe, delitel, &mistake);
          ext_set_scale(&result_tmp, 1);
          ext_scale_low_remainder(&result_tmp, 1);
          mistake = 1;
          scale--;
        }
        if (mistake == 1 && scale > 0 &&
            result_tmp.value_type == s21_NORMAL_VALUE) {
          int last = 0;
          ext_dec tempd = result_tmp;
          while (1) {
            for (int i = last + 1; i > 0; i--) {
              tempd = ext_div10_remainder(tempd);
            }
            ext_scale_up(&tempd, 1 + last);
            ext_set_scale(&tempd, 0);
            if (!ext_is_equal(tempd, result_tmp))
              last++;
            else
              break;
          }
          if (last > 0) {
            for (int i = 0; i < last; i++) {
              result_tmp = ext_div10_remainder(result_tmp);
              scale--;
            }
          }
        }
      }
      if (mistake == 1) {
        if (result_tmp.value_type != s21_NORMAL_VALUE) {
          if (sign)
            init_overflow(&result, -1);
          else
            init_overflow(&result, 1);
        } else {
          result.bits[HIGH] = result_tmp.bits[H];
          result.bits[MID] = result_tmp.bits[M];
          result.bits[LOW] = result_tmp.bits[L];
          set_scale(&result, scale);
          if (sign == 1) set_sign(&result);
        }
      }
    }
  }
  return result;
}

s21_decimal s21_mod(s21_decimal in1, s21_decimal in2) {
  s21_decimal result = DEC_ZERO;
  s21_decimal one = DEC_ONE;
  s21_decimal zero = DEC_ZERO;
  if (in1.value_type == s21_NORMAL_VALUE &&
      (in2.value_type == s21_INFINITY ||
       in2.value_type == s21_NEGATIVE_INFINITY)) {
    result = in1;
  } else if (in1.value_type == s21_NAN || in1.value_type == s21_INFINITY ||
             in1.value_type == s21_NEGATIVE_INFINITY ||
             in2.value_type == s21_NAN || in2.value_type == s21_INFINITY ||
             in2.value_type == s21_NEGATIVE_INFINITY) {
    init_nan(&result);
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    if (!s21_is_equal(in2, zero)) {
      init_nan(&result);
    } else if (!s21_is_equal(in2, one) || !s21_is_equal(in1, zero)) {
      result = zero;
      result.bits[FRAC] = in1.bits[FRAC];
    } else {
      int sign = 0;
      if (get_sign(in1)) sign = 1;
      clr_sign(&in1);
      clr_sign(&in2);
      int mistake = 1;
      if (!s21_is_less(in1, in2)) {
        mistake = 0;
        result = in1;
        if (sign) set_sign(&result);
      }
      if (mistake) {
        ext_dec n1, n2, tmp1, tmp2, res;
        decimal_to_ext(&n1, in1);
        decimal_to_ext(&n2, in2);
        ext_scale_equaliz(&n1, &n2);
        unsigned int scale = ext_get_scale(n1);
        tmp1 = ext_body_div(n1, n2, &mistake);
        ext_scale_low_remainder(&tmp1, scale);
        tmp2 = ext_body_mul(tmp1, n2);
        res = ext_body_sub(n1, tmp2);
        ext_set_scale(&res, scale);
        ext_dec temp;
        while (ext_find_first_bit(res) > 95) {
          if (scale == 0) break;
          temp = res;
          ext_scale_low(&res, 1);
          scale--;
          if (ext_find_first_bit(res) < 96) {
            ext_scale_low_remainder(&temp, 1);
            res = temp;
          }
        }
        if (ext_find_first_bit(res) < 96) {
          result.bits[LOW] = res.bits[L];
          result.bits[MID] = res.bits[M];
          result.bits[HIGH] = res.bits[H];
          result.bits[FRAC] = res.bits[F];
          if (sign) set_sign(&result);
        }
      }
    }
  }
  return result;
}

int s21_is_less(s21_decimal in1, s21_decimal in2) {
  // in1 меньше in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if ((in1.value_type == s21_INFINITY && in2.value_type == s21_INFINITY) ||
      (in1.value_type == s21_NEGATIVE_INFINITY &&
       in2.value_type == s21_NEGATIVE_INFINITY) ||
      (in1.value_type == s21_NAN || in2.value_type == s21_NAN)) {
    result = FALSE;
  } else if (in1.value_type == s21_INFINITY &&
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result = FALSE;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY &&
             in2.value_type == s21_INFINITY) {
    result = TRUE;
  } else if ((in1.value_type == s21_NORMAL_VALUE &&
              in2.value_type == s21_INFINITY) ||
             (in1.value_type == s21_NEGATIVE_INFINITY &&
              in2.value_type == s21_NORMAL_VALUE)) {
    result = TRUE;
  } else if ((in1.value_type == s21_INFINITY &&
              in2.value_type == s21_NORMAL_VALUE) ||
             (in1.value_type == s21_NORMAL_VALUE &&
              in2.value_type == s21_NEGATIVE_INFINITY)) {
    result = FALSE;
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    scale_equaliz(&in1, &in2);
    int bi = 95, count = 0;
    while (bi >= 0) {
      if (get_bit(in1, bi) || get_bit(in2, bi)) count++;
      if (get_bit(in1, bi) != get_bit(in2, bi)) {
        break;
      }
      bi--;
    }
    if ((count == 0 && bi < 0)) {
      result = FALSE;
    } else if (!get_bit(in1, bi) && get_bit(in2, bi)) {
      if (!get_sign(in1) && !get_sign(in2))
        result = TRUE;
      else if (get_sign(in1) && get_sign(in2))
        result = FALSE;
      else if (!get_sign(in1) && get_sign(in2))
        result = FALSE;
      else if (get_sign(in1) && !get_sign(in2))
        result = TRUE;
    } else if (get_bit(in1, bi) && !get_bit(in2, bi)) {
      if (!get_sign(in1) && !get_sign(in2))
        result = FALSE;
      else if (get_sign(in1) && get_sign(in2))
        result = TRUE;
      else if (!get_sign(in1) && get_sign(in2))
        result = FALSE;
      else if (get_sign(in1) && !get_sign(in2))
        result = TRUE;
    } else if (count != 0 && bi < 0) {
      if (get_sign(in1) && !get_sign(in2)) result = TRUE;
      if (!get_sign(in1) && get_sign(in2)) result = FALSE;
    }
  }
  return result;
}

int s21_is_less_or_equal(s21_decimal in1, s21_decimal in2) {
  // in1 меньше или равно in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    result = FALSE;
  } else if (s21_is_greater(in1, in2)) {
    result = TRUE;
  }
  return result;
}

int s21_is_greater(s21_decimal in1, s21_decimal in2) {
  // in1 больше in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if ((in1.value_type == s21_INFINITY && in2.value_type == s21_INFINITY) ||
      (in1.value_type == s21_NEGATIVE_INFINITY &&
       in2.value_type == s21_NEGATIVE_INFINITY) ||
      (in1.value_type == s21_NAN || in2.value_type == s21_NAN)) {
    result = FALSE;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY &&
             in2.value_type == s21_INFINITY) {
    result = FALSE;
  } else if (in1.value_type == s21_INFINITY &&
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result = TRUE;
  } else if ((in1.value_type == s21_NORMAL_VALUE &&
              in2.value_type == s21_INFINITY) ||
             (in1.value_type == s21_NEGATIVE_INFINITY &&
              in2.value_type == s21_NORMAL_VALUE)) {
    result = FALSE;
  } else if ((in1.value_type == s21_INFINITY &&
              in2.value_type == s21_NORMAL_VALUE) ||
             (in1.value_type == s21_NORMAL_VALUE &&
              in2.value_type == s21_NEGATIVE_INFINITY)) {
    result = TRUE;
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    scale_equaliz(&in1, &in2);
    int bi = 95, count = 0;
    while (bi >= 0) {
      if (get_bit(in1, bi) || get_bit(in2, bi)) count++;
      if (get_bit(in1, bi) != get_bit(in2, bi)) {
        break;
      }
      bi--;
    }
    if ((count == 0 && bi < 0)) {
      result = FALSE;
    } else if (!get_bit(in1, bi) && get_bit(in2, bi)) {
      if (!get_sign(in1) && !get_sign(in2))
        result = FALSE;
      else if (get_sign(in1) && get_sign(in2))
        result = TRUE;
      else if (!get_sign(in1) && get_sign(in2))
        result = TRUE;
      else if (get_sign(in1) && !get_sign(in2))
        result = FALSE;
    } else if (get_bit(in1, bi) && !get_bit(in2, bi)) {
      if (!get_sign(in1) && !get_sign(in2))
        result = TRUE;
      else if (get_sign(in1) && get_sign(in2))
        result = FALSE;
      else if (!get_sign(in1) && get_sign(in2))
        result = TRUE;
      else if (get_sign(in1) && !get_sign(in2))
        result = FALSE;
    } else if (count != 0 && bi < 0) {
      if (get_sign(in1) && !get_sign(in2)) result = FALSE;
      if (!get_sign(in1) && get_sign(in2)) result = TRUE;
    }
  }
  return result;
}

int s21_is_greater_or_equal(s21_decimal in1, s21_decimal in2) {
  // in1 больше или равно in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if (in1.value_type == s21_NAN || in2.value_type == s21_NAN) {
    result = FALSE;
  } else if (s21_is_less(in1, in2)) {
    result = TRUE;
  }
  return result;
}

int s21_is_equal(s21_decimal in1, s21_decimal in2) {
  // in1 равно in2 (0 - TRUE / 1 - FALSE)
  int result = FALSE;
  if (in1.value_type == s21_INFINITY && in2.value_type == s21_INFINITY) {
    result = TRUE;
  } else if (in1.value_type == s21_NEGATIVE_INFINITY &&
             in2.value_type == s21_NEGATIVE_INFINITY) {
    result = TRUE;
  } else if ((in1.value_type == s21_NAN || in2.value_type == s21_NAN)) {
    result = FALSE;
  } else if (in1.value_type == s21_NORMAL_VALUE &&
             in2.value_type == s21_NORMAL_VALUE) {
    result = TRUE;
    int count = 0;
    scale_equaliz(&in1, &in2);
    if (get_sign(in1) != get_sign(in2)) result = FALSE;
    for (int bi = 95; bi >= 0; bi--) {
      if (get_bit(in1, bi) || get_bit(in2, bi)) count++;
      if (get_bit(in1, bi) != get_bit(in2, bi)) {
        result = FALSE;
        break;
      }
      if ((count == 0 && bi == 0) && (get_sign(in1) != get_sign(in2))) {
        result = TRUE;
      }
    }
  }
  return result;
}

int s21_is_not_equal(s21_decimal in1, s21_decimal in2) {
  // in1 не равно in2 (0 - TRUE / 1 - FALSE)
  return !s21_is_equal(in1, in2);
}

s21_decimal s21_truncate(s21_decimal in) {
  // отбрасывает дробную часть, оставляя только целое
  // чиcло (без округления!)
  if (in.value_type == s21_NAN) {
    init_nan(&in);
    in.value_type = s21_NAN;
  } else if (in.value_type == s21_INFINITY) {
    init_overflow(&in, 1);
  } else if (in.value_type == s21_NEGATIVE_INFINITY) {
    init_overflow(&in, -1);
  } else if (in.value_type == s21_NORMAL_VALUE) {
    unsigned int scale = get_scale(in);
    scale_low(&in, scale);
  }
  return in;
}

s21_decimal s21_negate(s21_decimal in) {  // умножает децимал на -1
  if (in.value_type == s21_NAN) {
    init_nan(&in);
    in.value_type = s21_NAN;
  } else if (in.value_type == s21_INFINITY) {
    init_overflow(&in, 1);
    in.value_type = s21_INFINITY;
  } else if (in.value_type == s21_NEGATIVE_INFINITY) {
    init_overflow(&in, -1);
    in.value_type = s21_NEGATIVE_INFINITY;
  } else if (in.value_type == s21_NORMAL_VALUE) {
    in.bits[FRAC] ^= SIGN_MINUS;
  }
  return in;
}

s21_decimal s21_round(s21_decimal in) {
  s21_decimal result = DEC_ZERO;
  if (in.value_type == s21_NAN) {
    init_nan(&in);
    result.value_type = s21_NAN;
  } else if (in.value_type == s21_INFINITY) {
    init_overflow(&in, 1);
    result.value_type = s21_INFINITY;
  } else if (in.value_type == s21_NEGATIVE_INFINITY) {
    init_overflow(&in, -1);
    result.value_type = s21_NEGATIVE_INFINITY;
  } else if (in.value_type == s21_NORMAL_VALUE) {
    if ((int)get_scale(in) > 0) {
      int sign = get_sign(in);
      clr_sign(&in);
      s21_decimal half = HALF;
      result = s21_add(in, half);
      s21_decimal test05 = s21_truncate(in);
      test05 = s21_sub(in, test05);
      result = s21_truncate(result);
      if (!s21_is_equal(test05, half)) {
        clr_bit(&result, 0);
      }
      if (sign) set_sign(&result);
    } else {
      result = in;
    }
  }
  return result;
  // 101.51 - truncate(101.5) = 0.5 * 1  Result = 102
  // 100.5                             Result = 100
}

s21_decimal s21_floor(s21_decimal in) {
  s21_decimal result = DEC_ZERO;
  if (in.value_type == s21_NAN) {
    init_nan(&in);
    result.value_type = s21_NAN;
  } else if (in.value_type == s21_INFINITY) {
    init_overflow(&in, 1);
    result.value_type = s21_INFINITY;
  } else if (in.value_type == s21_NEGATIVE_INFINITY) {
    init_overflow(&in, -1);
    result.value_type = s21_NEGATIVE_INFINITY;
  } else if (in.value_type == s21_NORMAL_VALUE) {
    s21_decimal one = DEC_ONE;
    if (s21_is_equal(in, s21_truncate(in))) {
      if (get_sign(in)) {
        result = s21_sub(s21_truncate(in), one);
      } else {
        result = s21_truncate(in);
      }
    } else {
      result = s21_truncate(in);
    }
  }
  return result;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  // конвертер int в decimal (0 - SUCSESS/ 1 - CONVERTING_ERROR)
  int result = CONVERTING_ERROR;
  if (dst) {
    dec_init(dst);
    if (src < 0) {
      dst->bits[FRAC] = SIGN_MINUS;
      dst->bits[LOW] = -src;
    } else {
      dst->bits[LOW] = src;
    }
    result = SUCCESS;
  }
  return result;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  // конвертер decimal в int (0 - SUCSESS/ 1 - CONVERTING_ERROR)
  int result = CONVERTING_ERROR;
  if (src.value_type == s21_NORMAL_VALUE && dst) {
    src = s21_truncate(src);
    if (!src.bits[MID] && !src.bits[HIGH]) {
      *dst = src.bits[LOW];
      if (get_sign(src)) *dst = -*dst;
      result = SUCCESS;
    }
  }
  return result;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int result = CONVERTING_ERROR;
  if (src != src) {
    init_nan(dst);
  } else if (src == __builtin_inf()) {
    init_overflow(dst, 1);
  } else if (src == -__builtin_inf()) {
    init_overflow(dst, -1);
  } else if (dst) {
    double whole, fractional;  // целая часть числа и часть после запятой
    int count = 0;   // счетчик разрядов целого числа
    int count2 = 0;  // счетчик 0 с конца числа
    int eighth_digit;  // 8 цифра во флоате
    int sign = 0;
    if (src < 0) {
      src = src * (-1);
      sign = 1;
    }
    fractional = modf(src, &whole);
    float whole_int = (float)whole;
    while (whole_int >= 1) {
      whole_int = whole_int / 10;
      count++;
    }
    if (count > 7) {
      eighth_digit = (int)(src / pow(10, (count - 8))) % 10;
      src = (int)(src / pow(10, (count - 7)));
      if (eighth_digit > 4) {
        whole = whole + 1 * pow(10, (count - 7));
        src = src + 1;
      }
    } else {
      int seven_digit = (int)(fractional * pow(10, (7 - count))) % 10;
      eighth_digit = (int)(fractional * pow(10, (8 - count))) % 10;
      int tmp = (int)(fractional * pow(10, (7 - count)));
      if (seven_digit == 0 && eighth_digit > 4) tmp++;
      if (tmp != 0) {
        while ((tmp % 10) == 0) {
          count2++;
          tmp = tmp / 10;
        }
      } else {
        count2 = 7 - count;
      }
      src = src * pow(10, (7 - count - count2));
    }
    s21_from_int_to_decimal(src, dst);
    if (sign == 1) set_sign(dst);
    if (count > 7) {
      while (count > 7) {
        *dst = mul10(*dst);
        count--;
      }
    } else {
      set_scale(dst, (7 - count - count2));
    }
    result = SUCCESS;
  }
  return result;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  // конвертер из deciaml в float
  int result = FALSE;
  if ((src.value_type == s21_NORMAL_VALUE) && dst) {
    double tmp = 0.0;
    for (int i = 0; i < 96; i++) {
      if (get_bit(src, i)) tmp += pow(2, i);
    }
    int scale = get_scale(src);
    if (scale != 0) {
      for (int s = scale; s > 0; s--) {
        tmp /= 10;
      }
    }
    if (get_sign(src)) tmp = -tmp;
    *dst = tmp;
    result = TRUE;
  }
  return result;
}
