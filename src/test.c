#include <check.h>

#include "s21_decimal.h"

START_TEST(s21_add_1) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_2) {
  s21_decimal in1, in2, origin;
  // in1 = 3;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_3) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_4) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_5) {
  s21_decimal in1, in2, origin;
  // in1 = -0.0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000011110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_6) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_7) {
  s21_decimal in1, in2, origin;
  // in1 = 6521;
  // in2 = 74121;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000001100101111001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000010010000110001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000010011101100000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_8) {
  s21_decimal in1, in2, origin;
  // in1 = 4;
  // in2 = 97623323;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101110100011001110100011011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000101110100011001110100011111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_9) {
  s21_decimal in1, in2, origin;
  // in1 = 65658654;
  // in2 = 5;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000011111010011101111100011110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000011111010011101111100100011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_10) {
  s21_decimal in1, in2, origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_11) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 98745654321;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111101101100110001110000110001;
  in2.bits[1] = 0b00000000000000000000000000010110;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111101101100110001110000110010;
  origin.bits[1] = 0b00000000000000000000000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_12) {
  s21_decimal in1, in2, origin;
  // in1 = -9878798789;
  // in2 = -3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001100110100101000000111000101;
  in1.bits[1] = 0b00000000000000000000000000000010;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001100110100101000000111001000;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_13) {
  s21_decimal in1, in2, origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001001111010000000000000000000;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_14) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000001;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_15) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00111111011101000111010111001010;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000001010;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_16) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = 54564654;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011010000001001011100101110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01110001001010101101101011101101;
  origin.bits[1] = 0b00101110001111001110000111111000;
  origin.bits[2] = 0b10110000001111101110111101101101;
  origin.bits[3] = 0b10000000000011100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_17) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10110110001010011011010111011010;
  origin.bits[1] = 0b11111001111010100000110001111111;
  origin.bits[2] = 0b10110000001111101111000010010100;
  origin.bits[3] = 0b10000000000011100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_18) {
  s21_decimal in1, in2, origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_19) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010010000011011110010110111111;
  origin.bits[1] = 0b10100111010011100111001000100001;
  origin.bits[2] = 0b00011100010100111001110111101101;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_20) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010010000001100111100010100101;
  origin.bits[1] = 0b10001011011010100100100011011111;
  origin.bits[2] = 0b00011100010100011001001100010001;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_21) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010010000001100111100010100101;
  origin.bits[1] = 0b10001011011010100100100011011111;
  origin.bits[2] = 0b00011100010100011001001100010001;
  origin.bits[3] = 0b10000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_22) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010010000011011110010110111111;
  origin.bits[1] = 0b10100111010011100111001000100001;
  origin.bits[2] = 0b00011100010100111001110111101101;
  origin.bits[3] = 0b10000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_23) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_24) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_25) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_26) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_27) {
  s21_decimal in1, in2, origin;
  // in1 = 7922816251427554395;
  // in2 = 65645646;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011111000010000000010001011011;
  in1.bits[1] = 0b01101101111100110111111101100111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011111010011010110001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01100010111100011011000010101001;
  origin.bits[1] = 0b01101101111100110111111101100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_28) {
  s21_decimal in1, in2, origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00110111111111010001010100111010;
  origin.bits[1] = 0b00000000000111110100000111110010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_29) {
  s21_decimal in1, in2, origin;
  // in1 = 2.7986531268974139743;
  // in2 = 9.979623121254565121244554;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11010100101011100011110110001010;
  in2.bits[1] = 0b01110100000101000010011110100011;
  in2.bits[2] = 0b00000000000010000100000101000100;
  in2.bits[3] = 0b00000000000110000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10011010010111001101001011101010;
  origin.bits[1] = 0b10111110010100100100110100010011;
  origin.bits[2] = 0b00000000000010101001000111100111;
  origin.bits[3] = 0b00000000000110000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_30) {
  s21_decimal in1, in2, origin;
  // in1 = -9798956154578676.797564534156;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010100010000000011110110001100;
  in1.bits[1] = 0b10001011010100100000010101011001;
  in1.bits[2] = 0b00011111101010011000000110101101;
  in1.bits[3] = 0b10000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010101111011100000000010001100;
  origin.bits[1] = 0b01111000000001011001100110101101;
  origin.bits[2] = 0b00011111101010011000001000100010;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_31) {
  s21_decimal in1, in2, origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 0.68985125146545154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010111001001010100110000000010;
  in2.bits[1] = 0b00000000111101010001010110011011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01110000110111010100000010001101;
  origin.bits[1] = 0b01011010100111011110001100001010;
  origin.bits[2] = 0b00100111111010111100110001011010;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_32) {
  s21_decimal in1, in2, origin;
  // in1 = -0.77545545454546589781;
  // in2 = 87894515154546456456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100001010000001100001010101;
  in1.bits[1] = 0b00110100001010010001111010111100;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010011111011011111011110001000;
  in2.bits[1] = 0b11000011110010000000101111011001;
  in2.bits[2] = 0b00000000000000000000000000000100;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101111000101110100011110110111;
  origin.bits[1] = 0b01100110100011011000001100010111;
  origin.bits[2] = 0b00011100011001100111011011000001;
  origin.bits[3] = 0b00000000000010000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_33) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_34) {
  s21_decimal in1, in2, origin;
  // in1 = 32323465788987654;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011000010000110001100100000110;
  in1.bits[1] = 0b00000000011100101101011000000101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000110010000000000000011011011;
  origin.bits[1] = 0b00110010000100100110010100111000;
  origin.bits[2] = 0b01101000011100010101100000100011;
  origin.bits[3] = 0b00000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_35) {
  s21_decimal in1, in2, origin;
  // in1 = -784515454.7989898652154545652;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110001001110110100010111110100;
  in1.bits[1] = 0b00111000100000111010110010000001;
  in1.bits[2] = 0b00011001010110010101110000011000;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10011111111011011000101110000011;
  origin.bits[1] = 0b01111001100101101100001110101010;
  origin.bits[2] = 0b10111011010111111101000100100010;
  origin.bits[3] = 0b10000000000010110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_36) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -37986322154988653.784354545765;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001111101101000110000001100101;
  in2.bits[1] = 0b01000010001101101011011001100001;
  in2.bits[2] = 0b01111010101111011000110010011010;
  in2.bits[3] = 0b10000000000011000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001111101101000110000001100101;
  origin.bits[1] = 0b01000010001101101011011001100001;
  origin.bits[2] = 0b01111010101111011000110010011010;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_37) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_38) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_39) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_40) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_41) {
  s21_decimal in1, in2, origin;
  // in1 = 546378;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000010000101011001001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_42) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_43) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_44) {
  s21_decimal in1, in2, origin;
  // in1 = 546378;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000010000101011001001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_45) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_46) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_47) {
  s21_decimal in1, in2, origin;
  // in1 = 146596326654.9845631;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11101100011110011000111001111111;
  in1.bits[1] = 0b00010100010110000010010111010010;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_48) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_49) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0;
  // in2 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_50) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000001010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_51) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_add_52) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_add(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_1) {
  s21_decimal in1, in2, origin;
  // in1 = 5;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_2) {
  s21_decimal in1, in2, origin;
  // in1 = 3;
  // in2 = 6;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_3) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000001000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_4) {
  s21_decimal in1, in2, origin;
  // in1 = 7;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_5) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0;
  // in2 = 5;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000110010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_6) {
  s21_decimal in1, in2, origin;
  // in1 = 3;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_7) {
  s21_decimal in1, in2, origin;
  // in1 = 787891;
  // in2 = 238471;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000011000000010110110011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000111010001110000111;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000010000110001000101100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_8) {
  s21_decimal in1, in2, origin;
  // in1 = 9;
  // in2 = 18571145;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000001001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000001000110110101111110001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001000110110101111110000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_9) {
  s21_decimal in1, in2, origin;
  // in1 = 1849687;
  // in2 = 6;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000111000011100101010111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000111000011100101010001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_10) {
  s21_decimal in1, in2, origin;
  // in1 = -3187878;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001100001010010010100110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000001100001010010010100111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_11) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 18768768;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000001000111100110001110000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001000111100110001101111111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_12) {
  s21_decimal in1, in2, origin;
  // in1 = -2168564564;
  // in2 = -9;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000001010000011010101101010100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000001010000011010101101001011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_13) {
  s21_decimal in1, in2, origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001001111001111111111111111110;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_14) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_15) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615.0;
  // in2 = 3556877454;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11010100000000011010010010001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10110111111011111001001001101010;
  origin.bits[1] = 0b11111111111111111111111111110111;
  origin.bits[2] = 0b00000000000000000000000000001001;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_16) {
  s21_decimal in1, in2, origin;
  // in1 = -54896651557845.352654545456455;
  // in2 = 21465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01110001100100011000110101000111;
  in1.bits[1] = 0b00001111010011100000001101011111;
  in1.bits[2] = 0b10110001011000010111001000100100;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000101001111011001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01111001010101000000110101000111;
  origin.bits[1] = 0b00111001001100010000001100100101;
  origin.bits[2] = 0b10110001011000010111001000100101;
  origin.bits[3] = 0b10000000000011110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_17) {
  s21_decimal in1, in2, origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_18) {
  s21_decimal in1, in2, origin;
  // in1 = 68845645467.987654345678987654;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010100100111010010000110000110;
  in1.bits[1] = 0b00100000110000010111010000110011;
  in1.bits[2] = 0b11011110011100111100100001111111;
  in1.bits[3] = 0b00000000000100100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10011111110010001011011001101110;
  origin.bits[1] = 0b11011100110110100011001011010011;
  origin.bits[2] = 0b00111100110001100010110001111100;
  origin.bits[3] = 0b10000000000100100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_19) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010010000011011110010110111111;
  origin.bits[1] = 0b10100111010011100111001000100001;
  origin.bits[2] = 0b00011100010100111001110111101101;
  origin.bits[3] = 0b10000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_20) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010010000011011110010110111111;
  origin.bits[1] = 0b10100111010011100111001000100001;
  origin.bits[2] = 0b00011100010100111001110111101101;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_21) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010010000001100111100010100101;
  origin.bits[1] = 0b10001011011010100100100011011111;
  origin.bits[2] = 0b00011100010100011001001100010001;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_22) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_23) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_24) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_25) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_26) {
  s21_decimal in1, in2, origin;
  // in1 = 7922816251427554395;
  // in2 = 65645646;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011111000010000000010001011011;
  in1.bits[1] = 0b01101101111100110111111101100111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011111010011010110001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01011011000111100101100000001101;
  origin.bits[1] = 0b01101101111100110111111101100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_27) {
  s21_decimal in1, in2, origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11101000101010001011011101111000;
  origin.bits[1] = 0b00000000000111110100000111110001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_28) {
  s21_decimal in1, in2, origin;
  // in1 = 2.7986531268974139743;
  // in2 = 9.979623121254565121244554;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11010100101011100011110110001010;
  in2.bits[1] = 0b01110100000101000010011110100011;
  in2.bits[2] = 0b00000000000010000100000101000100;
  in2.bits[3] = 0b00000000000110000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001110111111111010100000101010;
  origin.bits[1] = 0b00101001110101100000001000110100;
  origin.bits[2] = 0b00000000000001011111000010100001;
  origin.bits[3] = 0b10000000000110000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_29) {
  s21_decimal in1, in2, origin;
  // in1 = -9798956154578676.797564534156;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010100010000000011110110001100;
  in1.bits[1] = 0b10001011010100100000010101011001;
  in1.bits[2] = 0b00011111101010011000000110101101;
  in1.bits[3] = 0b10000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010010100100100111101010001100;
  origin.bits[1] = 0b10011110100111100111000100000100;
  origin.bits[2] = 0b00011111101010011000000100111000;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_30) {
  s21_decimal in1, in2, origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 0.68985125146545154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010111001001010100110000000010;
  in2.bits[1] = 0b00000000111101010001010110011011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01011010101111100101111101110011;
  origin.bits[1] = 0b00101101001111010011000001101000;
  origin.bits[2] = 0b00000100101010001101010101010111;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_31) {
  s21_decimal in1, in2, origin;
  // in1 = -0.77545545454546589781;
  // in2 = 87894515154546456456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100001010000001100001010101;
  in1.bits[1] = 0b00110100001010010001111010111100;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010011111011011111011110001000;
  in2.bits[1] = 0b11000011110010000000101111011001;
  in2.bits[2] = 0b00000000000000000000000000000100;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;

  origin.bits[0] = 0b10111000010101011100100001001001;
  origin.bits[1] = 0b01100110100011011000001100010111;
  origin.bits[2] = 0b00011100011001100111011011000001;
  origin.bits[3] = 0b10000000000010000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_32) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_33) {
  s21_decimal in1, in2, origin;
  // in1 = 32323465788987654;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011000010000110001100100000110;
  in1.bits[1] = 0b00000000011100101101011000000101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001110100111001011111100100101;
  origin.bits[1] = 0b11011111010111101000100010100000;
  origin.bits[2] = 0b01101000011100010101100000011011;
  origin.bits[3] = 0b00000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_34) {
  s21_decimal in1, in2, origin;
  // in1 = -784515454.7989898652154545652;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110001001110110100010111110100;
  in1.bits[1] = 0b00111000100000111010110010000001;
  in1.bits[2] = 0b00011001010110010101110000011000;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101100010111011001101101001111;
  origin.bits[1] = 0b11111000000111110000000110111111;
  origin.bits[2] = 0b10111011010111111101000100011001;
  origin.bits[3] = 0b00000000000010110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_35) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -37986322154988653.784354545765;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001111101101000110000001100101;
  in2.bits[1] = 0b01000010001101101011011001100001;
  in2.bits[2] = 0b01111010101111011000110010011010;
  in2.bits[3] = 0b10000000000011000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001111101101000110000001100101;
  origin.bits[1] = 0b01000010001101101011011001100001;
  origin.bits[2] = 0b01111010101111011000110010011010;
  origin.bits[3] = 0b00000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_36) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162513351883030198514100;
  // in2 = -912454563345436235;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110110000111000111000110110100;
  in1.bits[1] = 0b11110011010101100100111101101000;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001001111000111000111001001011;
  in2.bits[1] = 0b00001100101010011011000010010111;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_37) {
  s21_decimal in1, in2, origin;
  // in1 = 59978456487987764548465456454;
  // in2 = -48786756456875658915646545165;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011111001111011111010101000110;
  in1.bits[1] = 0b01010100100001101100100010110010;
  in1.bits[2] = 0b11000001110011010000010000110001;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100000001001000001110100001101;
  in2.bits[1] = 0b11110100000010101101000010000000;
  in2.bits[2] = 0b10011101101000110111010110000110;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_38) {
  s21_decimal in1, in2, origin;
  // in1 = 59978456487987764548465456454;
  // in2 = -48786756456875658915646545165;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011111001111011111010101000110;
  in1.bits[1] = 0b01010100100001101100100010110010;
  in1.bits[2] = 0b11000001110011010000010000110001;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100000001001000001110100001101;
  in2.bits[1] = 0b11110100000010101101000010000000;
  in2.bits[2] = 0b10011101101000110111010110000110;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_39) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_40) {
  s21_decimal in1, in2, origin;
  // in1 = 7567456456.4646545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011011010000111101010010001;
  in1.bits[1] = 0b00000001000011001101100110011101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_41) {
  s21_decimal in1, in2, origin;
  // in1 = 7567456456.4646545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011011010000111101010010001;
  in1.bits[1] = 0b00000001000011001101100110011101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_42) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_43) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_44) {
  s21_decimal in1, in2, origin;
  // in1 = 546378;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000010000101011001001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_45) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_46) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_47) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_48) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0;
  // in2 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_49) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000001010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_50) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000001010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_51) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_52) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_sub_53) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_sub(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_1) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_2) {
  s21_decimal in1, in2, origin;
  // in1 = 3;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_3) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_4) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_5) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_6) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_7) {
  s21_decimal in1, in2, origin;
  // in1 = 6521;
  // in2 = 74121;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000001100101111001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000010010000110001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00011100110011110011101011000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_8) {
  s21_decimal in1, in2, origin;
  // in1 = 4;
  // in2 = 97623323;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101110100011001110100011011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00010111010001100111010001101100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_9) {
  s21_decimal in1, in2, origin;
  // in1 = 65658654;
  // in2 = 5;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000011111010011101111100011110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00010011100100010101101110010110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_10) {
  s21_decimal in1, in2, origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_11) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 98745654321;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111101101100110001110000110001;
  in2.bits[1] = 0b00000000000000000000000000010110;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111101101100110001110000110001;
  origin.bits[1] = 0b00000000000000000000000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_12) {
  s21_decimal in1, in2, origin;
  // in1 = -9878798789;
  // in2 = -3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001100110100101000000111000101;
  in1.bits[1] = 0b00000000000000000000000000000010;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100110011101111000010101001111;
  origin.bits[1] = 0b00000000000000000000000000000110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_13) {
  s21_decimal in1, in2, origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001001111001111111111111111111;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_14) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_15) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000110011101000101101010011110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00111001100010111010010101100001;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_16) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = 54564654;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011010000001001011100101110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00110000111000101100110101010110;
  origin.bits[1] = 0b11011110111001111111001101111011;
  origin.bits[2] = 0b01100000001010101111111001001101;
  origin.bits[3] = 0b10000000000001100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_17) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01110001110011111110010111001111;
  origin.bits[1] = 0b01000100010011101101011110011001;
  origin.bits[2] = 0b01011110010101101001110000011100;
  origin.bits[3] = 0b00000000000011010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_18) {
  s21_decimal in1, in2, origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_19) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001010010011001000011101110;
  origin.bits[1] = 0b10101010100001010100111110001111;
  origin.bits[2] = 0b00100010111101110101101000011010;
  origin.bits[3] = 0b00000000000010100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_20) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001010010011001000011101110;
  origin.bits[1] = 0b10101010100001010100111110001111;
  origin.bits[2] = 0b00100010111101110101101000011010;
  origin.bits[3] = 0b10000000000010100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_21) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001010010011001000011101110;
  origin.bits[1] = 0b10101010100001010100111110001111;
  origin.bits[2] = 0b00100010111101110101101000011010;
  origin.bits[3] = 0b10000000000010100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_22) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001010010011001000011101110;
  origin.bits[1] = 0b10101010100001010100111110001111;
  origin.bits[2] = 0b00100010111101110101101000011010;
  origin.bits[3] = 0b00000000000010100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_23) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_24) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_25) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_26) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_27) {
  s21_decimal in1, in2, origin;
  // in1 = 7922816251427554395;
  // in2 = 65645646;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011111000010000000010001011011;
  in1.bits[1] = 0b01101101111100110111111101100111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011111010011010110001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01011111001100010111011110111010;
  origin.bits[1] = 0b01000100111111001101101110110001;
  origin.bits[2] = 0b00000001101011100011011100011110;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_28) {
  s21_decimal in1, in2, origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000100010110100111001000111001;
  origin.bits[1] = 0b01100100100011011110110011010011;
  origin.bits[2] = 0b00000000000001001101011111010011;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_29) {
  s21_decimal in1, in2, origin;
  // in1 = 2.7986531268974139743;
  // in2 = 9.979623121254565121244554;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11010100101011100011110110001010;
  in2.bits[1] = 0b01110100000101000010011110100011;
  in2.bits[2] = 0b00000000000010000100000101000100;
  in2.bits[3] = 0b00000000000110000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000010010010011010001110000110;
  origin.bits[1] = 0b00001010000101010010010001010111;
  origin.bits[2] = 0b01011010001111101011111001101000;
  origin.bits[3] = 0b00000000000110110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_30) {
  s21_decimal in1, in2, origin;
  // in1 = -9798956154578676.797564534156;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010100010000000011110110001100;
  in1.bits[1] = 0b10001011010100100000010101011001;
  in1.bits[2] = 0b00011111101010011000000110101101;
  in1.bits[3] = 0b10000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10100010001001111101100000001001;
  origin.bits[1] = 0b01100011000100011111011101101010;
  origin.bits[2] = 0b01000100010010101001011110101001;
  origin.bits[3] = 0b00000000000000110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_31) {
  s21_decimal in1, in2, origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 0.68985125146545154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010111001001010100110000000010;
  in2.bits[1] = 0b00000000111101010001010110011011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101101101011010001001111000011;
  origin.bits[1] = 0b11100101011100100000101001000011;
  origin.bits[2] = 0b00001100001010011010000110101010;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_32) {
  s21_decimal in1, in2, origin;
  // in1 = -0.77545545454546589781;
  // in2 = 87894515154546456456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100001010000001100001010101;
  in1.bits[1] = 0b00110100001010010001111010111100;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010011111011011111011110001000;
  in2.bits[1] = 0b11000011110010000000101111011001;
  in2.bits[2] = 0b00000000000000000000000000000100;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101100010001000110001011111110;
  origin.bits[1] = 0b10001111111010010000010001010010;
  origin.bits[2] = 0b11011100001110110011010101110011;
  origin.bits[3] = 0b10000000000010010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_33) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_34) {
  s21_decimal in1, in2, origin;
  // in1 = 32323465788987654;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011000010000110001100100000110;
  in1.bits[1] = 0b00000000011100101101011000000101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101000111100011000101110011110;
  origin.bits[1] = 0b01111100111010110000100110110011;
  origin.bits[2] = 0b01000110100010110100011101101011;
  origin.bits[3] = 0b00000000000001000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_35) {
  s21_decimal in1, in2, origin;
  // in1 = -784515454.7989898652154545652;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110001001110110100010111110100;
  in1.bits[1] = 0b00111000100000111010110010000001;
  in1.bits[2] = 0b00011001010110010101110000011000;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001011111011100000111001011100;
  origin.bits[1] = 0b11011011110011010001111100111100;
  origin.bits[2] = 0b10010010111111110111111001100000;
  origin.bits[3] = 0b00000000000000100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_36) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -37986322154988653.784354545765;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001111101101000110000001100101;
  in2.bits[1] = 0b01000010001101101011011001100001;
  in2.bits[2] = 0b01111010101111011000110010011010;
  in2.bits[3] = 0b10000000000011000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_37) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551617.0;
  // in2 = 87654531534564545456464.98565;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000001010;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000010010000110011001100000101;
  in2.bits[1] = 0b10010111000000011011101110000001;
  in2.bits[2] = 0b00011100010100101001110011100111;
  in2.bits[3] = 0b00000000000001010000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_38) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551617.0;
  // in2 = -87654531534564545456464.98565;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000001010;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000010010000110011001100000101;
  in2.bits[1] = 0b10010111000000011011101110000001;
  in2.bits[2] = 0b00011100010100101001110011100111;
  in2.bits[3] = 0b10000000000001010000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_39) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_40) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_41) {
  s21_decimal in1, in2, origin;
  // in1 = 546378;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000010000101011001001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_42) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_43) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_44) {
  s21_decimal in1, in2, origin;
  // in1 = 546378;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000010000101011001001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_45) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 8976545415646545.5746845454;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in1.value_type = s21_NAN;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011101111000010000101100001110;
  in2.bits[1] = 0b00000101010000010110101000000010;
  in2.bits[2] = 0b00000000010010100100000010010011;
  in2.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_46) {
  s21_decimal in1, in2, origin;
  // in1 = -inf;
  // in2 = inf;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_47) {
  s21_decimal in1, in2, origin;
  // in1 = 546378;
  // in2 = INFINITY;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000010000101011001001010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_48) {
  s21_decimal in1, in2, origin;
  // in1 = inf;
  // in2 = -inf;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_49) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000000001;
  // in2 = 0.01;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_50) {
  s21_decimal in1, in2, origin;
  // in1 = 0.00000000000000000005;
  // in2 = 0.0000000000345;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000101011001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000011010000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mul_51) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000001567;
  // in2 = 0.000800090769;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000011000011111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00101111101100000110101010010001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000011000000000000000000;
  s21_decimal result = s21_mul(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_1) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001010101010101010101010101011;
  origin.bits[1] = 0b00101001011011100000000110010110;
  origin.bits[2] = 0b00010101100010101000100110010100;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_2) {
  s21_decimal in1, in2, origin;
  // in1 = 3;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000001111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_3) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_4) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 0.1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000010100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_5) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_6) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = -0.45;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000101101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000100000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10011100011100011100011100011100;
  origin.bits[1] = 0b00010100001100101011010100111101;
  origin.bits[2] = 0b10001111100110111001010100110001;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_7) {
  s21_decimal in1, in2, origin;
  // in1 = 6521;
  // in2 = 74121;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000001100101111001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000010010000110001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11001100111001010110111000001001;
  origin.bits[1] = 0b01000001100010010010010111001101;
  origin.bits[2] = 0b00000000010010001100011000000100;
  origin.bits[3] = 0b00000000000110110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_8) {
  s21_decimal in1, in2, origin;
  // in1 = 4;
  // in2 = 97623323;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101110100011001110100011011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010111101101001110101000001011;
  origin.bits[1] = 0b00110110010000100101011010111111;
  origin.bits[2] = 0b00000000000000000000000000010110;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_9) {
  s21_decimal in1, in2, origin;
  // in1 = 65658654;
  // in2 = 5;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000011111010011101111100011110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000111110100111011111000111100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_10) {
  s21_decimal in1, in2, origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_11) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 98745654321;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111101101100110001110000110001;
  in2.bits[1] = 0b00000000000000000000000000010110;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01010100010110111010010000111111;
  origin.bits[1] = 0b00000001011001111100100011001000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_12) {
  s21_decimal in1, in2, origin;
  // in1 = -9878798789;
  // in2 = -3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001100110100101000000111000101;
  in1.bits[1] = 0b00000000000000000000000000000010;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000010100000101010101010101011;
  origin.bits[1] = 0b00011000110010011011111011000100;
  origin.bits[2] = 0b01101010011001101000000010110110;
  origin.bits[3] = 0b00000000000100110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_13) {
  s21_decimal in1, in2, origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001001111001111111111111111111;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_14) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_15) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001010010011110101000101010001;
  origin.bits[1] = 0b00010010001101000001111111010011;
  origin.bits[2] = 0b00111101101111001100101101111101;
  origin.bits[3] = 0b00000000000100100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_16) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = 54564654;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011010000001001011100101110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01111001011111001100111101000100;
  origin.bits[1] = 0b01101111110101101111010000100100;
  origin.bits[2] = 0b00100000010011001110010100100010;
  origin.bits[3] = 0b10000000000101010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_17) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10100100111010110100001011011000;
  origin.bits[1] = 0b10100011110001111010011110110101;
  origin.bits[2] = 0b00000000010101000100101011101010;
  origin.bits[3] = 0b00000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_18) {
  s21_decimal in1, in2, origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = -0.78;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000100000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00110001011111111011100010011001;
  origin.bits[1] = 0b01100101100010100010100001110001;
  origin.bits[2] = 0b00000011010011000100101000001011;
  origin.bits[3] = 0b10000000000011100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_19) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000110100011000111000110111011;
  origin.bits[1] = 0b01000001110101101000100101010000;
  origin.bits[2] = 0b00000000000000010010101001000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_20) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000110100011000111000110111011;
  origin.bits[1] = 0b01000001110101101000100101010000;
  origin.bits[2] = 0b00000000000000010010101001000000;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_21) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000110100011000111000110111011;
  origin.bits[1] = 0b01000001110101101000100101010000;
  origin.bits[2] = 0b00000000000000010010101001000000;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_22) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000110100011000111000110111011;
  origin.bits[1] = 0b01000001110101101000100101010000;
  origin.bits[2] = 0b00000000000000010010101001000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_23) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_24) {
  s21_decimal in1, in2, origin;
  // in1 = -0.00000;
  // in2 = 0.8;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000001000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_25) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -0.423;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000110100111;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_26) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_27) {
  s21_decimal in1, in2, origin;
  // in1 = 7922816251427554395;
  // in2 = 65645646;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011111000010000000010001011011;
  in1.bits[1] = 0b01101101111100110111111101100111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011111010011010110001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01101001110011011000100110011100;
  origin.bits[1] = 0b01100010100101110010111010100011;
  origin.bits[2] = 0b00100110111111110100110000011011;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_28) {
  s21_decimal in1, in2, origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01010010000011000001010110110110;
  origin.bits[1] = 0b00000000101000000110010011001100;
  origin.bits[2] = 0b00000000000000000000000000101001;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_29) {
  s21_decimal in1, in2, origin;
  // in1 = 2.7986531268974139743;
  // in2 = 9.979623121254565121244554;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11010100101011100011110110001010;
  in2.bits[1] = 0b01110100000101000010011110100011;
  in2.bits[2] = 0b00000000000010000100000101000100;
  in2.bits[3] = 0b00000000000110000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10110000000110101011000111000111;
  origin.bits[1] = 0b10100110110111100111111001101001;
  origin.bits[2] = 0b00001001000011111011011111101101;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_30) {
  s21_decimal in1, in2, origin;
  // in1 = -9798956154578676.797564534156;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010100010000000011110110001100;
  in1.bits[1] = 0b10001011010100100000010101011001;
  in1.bits[2] = 0b00011111101010011000000110101101;
  in1.bits[3] = 0b10000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11110001110100111110110111100000;
  origin.bits[1] = 0b10001101111000011110011001011110;
  origin.bits[2] = 0b10010010110010111100110101011011;
  origin.bits[3] = 0b00000000000101100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_31) {
  s21_decimal in1, in2, origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 0.68985125146545154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010111001001010100110000000010;
  in2.bits[1] = 0b00000000111101010001010110011011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111100011000000110000010011111;
  origin.bits[1] = 0b00110010101101100111001011100101;
  origin.bits[2] = 0b00011001100011101011000001111010;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_32) {
  s21_decimal in1, in2, origin;
  // in1 = -0.77545545454546589781;
  // in2 = 87894515154546456456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100001010000001100001010101;
  in1.bits[1] = 0b00110100001010010001111010111100;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010011111011011111011110001000;
  in2.bits[1] = 0b11000011110010000000101111011001;
  in2.bits[2] = 0b00000000000000000000000000000100;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000101010000100011011110011101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_33) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_34) {
  s21_decimal in1, in2, origin;
  // in1 = 32323465788987654;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011000010000110001100100000110;
  in1.bits[1] = 0b00000000011100101101011000000101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000111000101101000010100101100;
  origin.bits[1] = 0b10011100110000101101111000110000;
  origin.bits[2] = 0b10011010101000010111111111010101;
  origin.bits[3] = 0b00000000000101000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_35) {
  s21_decimal in1, in2, origin;
  // in1 = -784515454.7989898652154545652;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110001001110110100010111110100;
  in1.bits[1] = 0b00111000100000111010110010000001;
  in1.bits[2] = 0b00011001010110010101110000011000;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000010000110000000100111101110;
  origin.bits[1] = 0b10111011101111110010001011011011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_36) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -37986322154988653.784354545765;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001111101101000110000001100101;
  in2.bits[1] = 0b01000010001101101011011001100001;
  in2.bits[2] = 0b01111010101111011000110010011010;
  in2.bits[3] = 0b10000000000011000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_37) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_38) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_39) {
  s21_decimal in1, in2, origin;
  // in1 = 5746454564654544565.5476768;
  // in2 = 0.00000000000000009;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111010010101001111101000100000;
  in1.bits[1] = 0b01000010111101001000100110101011;
  in1.bits[2] = 0b00000000001011111000100010010111;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_40) {
  s21_decimal in1, in2, origin;
  // in1 = -7986567986895452.79851547;
  // in2 = 0.000000000000038;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001111001110010100110000011011;
  in1.bits[1] = 0b01000101100101010101111100010001;
  in1.bits[2] = 0b00000000000000001010100100011111;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000100110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_41) {
  s21_decimal in1, in2, origin;
  // in1 = 5;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_42) {
  s21_decimal in1, in2, origin;
  // in1 = 158;
  // in2 = -0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000010011110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_43) {
  s21_decimal in1, in2, origin;
  // in1 = 789254686.567486745;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101110001010101101010100011001;
  in1.bits[1] = 0b00001010111100111111111011110100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010010000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_44) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 79855615454;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10010111110000111111110111011110;
  in2.bits[1] = 0b00000000000000000000000000010010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_45) {
  s21_decimal in1, in2, origin;
  // in1 = -inf;
  // in2 = inf;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_46) {
  s21_decimal in1, in2, origin;
  // in1 = inf;
  // in2 = -inf;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_47) {
  s21_decimal in1, in2, origin;
  // in1 = inf;
  // in2 = 5456423134;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01000101001110100110100011011110;
  in2.bits[1] = 0b00000000000000000000000000000001;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_48) {
  s21_decimal in1, in2, origin;
  // in1 = inf;
  // in2 = -99854254.57454;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101001101111001100000100101110;
  in2.bits[1] = 0b00000000000000000000100100010100;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_49) {
  s21_decimal in1, in2, origin;
  // in1 = -inf;
  // in2 = 85746;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000010100111011110010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_50) {
  s21_decimal in1, in2, origin;
  // in1 = inf;
  // in2 = -798836.57876467886465768764;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110010110000101110100111100;
  in2.bits[1] = 0b11000101010100100101100011001010;
  in2.bits[2] = 0b00000000010000100001010000000101;
  in2.bits[3] = 0b10000000000101000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
} END_TEST

START_TEST(s21_div_51) {
  s21_decimal in1, in2, origin;
  // in1 = 522638974;
  // in2 = inf;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011111001001101101011001111110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_52) {
  s21_decimal in1, in2, origin;
  // in1 = -12593241.8952445425;
  // in2 = inf;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001010111011011110111110001;
  in1.bits[1] = 0b00000001101111110110011011011110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000010100000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_53) {
  s21_decimal in1, in2, origin;
  // in1 = 984536125;
  // in2 = -inf;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00111010101011101101010000111101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_54) {
  s21_decimal in1, in2, origin;
  // in1 = -74568146596326654.9845631;
  // in2 = -inf;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01101101101110011000111001111111;
  in1.bits[1] = 0b01111001001010000010011111011100;
  in1.bits[2] = 0b00000000000000001001110111100111;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_55) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000000001;
  // in2 = 0.01;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000110100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_56) {
  s21_decimal in1, in2, origin;
  // in1 = 0.00000000000000000005;
  // in2 = 0.0000000000345;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000101011001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000011010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01100111011001100111111000100101;
  origin.bits[1] = 0b11001001001000001001101010100010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_57) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000001567;
  // in2 = 0.000800090769;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000011000011111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00101111101100000110101010010001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000011000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000111011110001010000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_58) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000000001;
  // in2 = 0.0000000000000000000000000001;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000111000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_div_59) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
} END_TEST

START_TEST(s21_div_60) {
  s21_decimal in1, in2, origin;
  // in1 = -0.0;
  // in2 = -0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_div(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_1) {
  s21_decimal in1, in2, origin;
  // in1 = 5;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_2) {
  s21_decimal in1, in2, origin;
  // in1 = 3;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_3) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_4) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = 0.1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_5) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_6) {
  s21_decimal in1, in2, origin;
  // in1 = 2;
  // in2 = -0.45;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000101101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000100000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000010100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_7) {
  s21_decimal in1, in2, origin;
  // in1 = 6521;
  // in2 = 74121;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000001100101111001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000010010000110001001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000001100101111001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_8) {
  s21_decimal in1, in2, origin;
  // in1 = 4;
  // in2 = 97623323;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101110100011001110100011011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_9) {
  s21_decimal in1, in2, origin;
  // in1 = 65658654;
  // in2 = 5;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000011111010011101111100011110;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_10) {
  s21_decimal in1, in2, origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_11) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 98745654321;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111101101100110001110000110001;
  in2.bits[1] = 0b00000000000000000000000000010110;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_12) {
  s21_decimal in1, in2, origin;
  // in1 = -9878798789;
  // in2 = -3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001100110100101000000111000101;
  in1.bits[1] = 0b00000000000000000000000000000010;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_13) {
  s21_decimal in1, in2, origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_14) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_15) {
  s21_decimal in1, in2, origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101010000010000011011000010110;
  origin.bits[1] = 0b00000000000000000000000000000001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_16) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = 54564654;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011010000001001011100101110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111101010000100101101011101101;
  origin.bits[1] = 0b00001001111110101010011110000010;
  origin.bits[2] = 0b00000000000000000000000011011001;
  origin.bits[3] = 0b10000000000011100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_17) {
  s21_decimal in1, in2, origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01110011110011100101101100100000;
  origin.bits[1] = 0b00000100110001110101111011101100;
  origin.bits[2] = 0b00000000000000001110001000111110;
  origin.bits[3] = 0b10000000000110000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_18) {
  s21_decimal in1, in2, origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = -0.78;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000100000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001100110001100111100101110110;
  origin.bits[1] = 0b00000000000000011110101011100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_19) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010001000010101111010011001010;
  origin.bits[1] = 0b11000000010001011101010111110010;
  origin.bits[2] = 0b00100111111001000001101100000000;
  origin.bits[3] = 0b00000000000101010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_20) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010001000010101111010011001010;
  origin.bits[1] = 0b11000000010001011101010111110010;
  origin.bits[2] = 0b00100111111001000001101100000000;
  origin.bits[3] = 0b10000000000101010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_21) {
  s21_decimal in1, in2, origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010001000010101111010011001010;
  origin.bits[1] = 0b11000000010001011101010111110010;
  origin.bits[2] = 0b00100111111001000001101100000000;
  origin.bits[3] = 0b00000000000101010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_22) {
  s21_decimal in1, in2, origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = -87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010001000010101111010011001010;
  origin.bits[1] = 0b11000000010001011101010111110010;
  origin.bits[2] = 0b00100111111001000001101100000000;
  origin.bits[3] = 0b10000000000101010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_23) {
  s21_decimal in1, in2, origin;
  // in1 = 336565445454313.859865545;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00111110111111000101101111001001;
  in1.bits[1] = 0b00111111110101011110000010001011;
  in1.bits[2] = 0b00000000000000000100011101000101;
  in1.bits[3] = 0b00000000000010010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00011100100110100010101011001001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000010010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_24) {
  s21_decimal in1, in2, origin;
  // in1 = -15456451234534;
  // in2 = 0.8;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111100010010010000101011100110;
  in1.bits[1] = 0b00000000000000000000111000001110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_25) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -0.42354543545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11011100100001110000101110111001;
  in2.bits[1] = 0b00000000000000000000000000001001;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_26) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_27) {
  s21_decimal in1, in2, origin;
  // in1 = 7922816251427554395;
  // in2 = -65645646;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011111000010000000010001011011;
  in1.bits[1] = 0b01101101111100110111111101100111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011111010011010110001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001001111101101001101110111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_28) {
  s21_decimal in1, in2, origin;
  // in1 = -7922816251427554395;
  // in2 = -65645646;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011111000010000000010001011011;
  in1.bits[1] = 0b01101101111100110111111101100111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000011111010011010110001001110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000001001111101101001101110111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_29) {
  s21_decimal in1, in2, origin;
  // in1 = 2.7986531268974139743;
  // in2 = 9.979623121254565121244554;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11010100101011100011110110001010;
  in2.bits[1] = 0b01110100000101000010011110100011;
  in2.bits[2] = 0b00000000000010000100000101000100;
  in2.bits[3] = 0b00000000000110000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111110100100001101100101011111;
  origin.bits[1] = 0b10000100011001000010000111101000;
  origin.bits[2] = 0b00000000000000000000000000000001;
  origin.bits[3] = 0b00000000000100110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_30) {
  s21_decimal in1, in2, origin;
  // in1 = -9798956154578676.797564534156;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010100010000000011110110001100;
  in1.bits[1] = 0b10001011010100100000010101011001;
  in1.bits[2] = 0b00011111101010011000000110101101;
  in1.bits[3] = 0b10000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101100101110100101000010001100;
  origin.bits[1] = 0b11010010101110000010010011000101;
  origin.bits[2] = 0b00000000000000000000000000100100;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_31) {
  s21_decimal in1, in2, origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 0.68985125146545154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010111001001010100110000000010;
  in2.bits[1] = 0b00000000111101010001010110011011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001011000011110111000010001101;
  origin.bits[1] = 0b10010110101100000101100101010001;
  origin.bits[2] = 0b00010001101000010111101110000001;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_32) {
  s21_decimal in1, in2, origin;
  // in1 = -0.77545545454546589781;
  // in2 = 87894515154546456456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100001010000001100001010101;
  in1.bits[1] = 0b00110100001010010001111010111100;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010011111011011111011110001000;
  in2.bits[1] = 0b11000011110010000000101111011001;
  in2.bits[2] = 0b00000000000000000000000000000100;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101100001010000001100001010101;
  origin.bits[1] = 0b00110100001010010001111010111100;
  origin.bits[2] = 0b00000000000000000000000000000100;
  origin.bits[3] = 0b10000000000101000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_33) {
  s21_decimal in1, in2, origin;
  // in1 = -79228162514264337593543950335;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_34) {
  s21_decimal in1, in2, origin;
  // in1 = 32323465788987654;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011000010000110001100100000110;
  in1.bits[1] = 0b00000000011100101101011000000101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001100101110011010010011101010;
  origin.bits[1] = 0b00110111110001011011011011011111;
  origin.bits[2] = 0b00000000000000101101000101110010;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_35) {
  s21_decimal in1, in2, origin;
  // in1 = -784515454.7989898652154545652;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110001001110110100010111110100;
  in1.bits[1] = 0b00111000100000111010110010000001;
  in1.bits[2] = 0b00011001010110010101110000011000;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10110001001110110100010111110100;
  origin.bits[1] = 0b00111000100000111010110010000001;
  origin.bits[2] = 0b00011001010110010101110000011000;
  origin.bits[3] = 0b10000000000100110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_36) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -37986322154988653.784354545765;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001111101101000110000001100101;
  in2.bits[1] = 0b01000010001101101011011001100001;
  in2.bits[2] = 0b01111010101111011000110010011010;
  in2.bits[3] = 0b10000000000011000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_37) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_38) {
  s21_decimal in1, in2, origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_39) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_40) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_41) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_42) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_43) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_44) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_45) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_46) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_47) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_48) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_49) {
  s21_decimal in1, in2, origin;
  // in1 = 1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_50) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_51) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_52) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = -1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_53) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = inf;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_54) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = -inf;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_55) {
  s21_decimal in1, in2, origin;
  // in1 = -1;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_56) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_57) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_58) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_59) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_60) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_61) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_62) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_63) {
  s21_decimal in1, in2, origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_64) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000000001;
  // in2 = 0.0000000000000050505050505051;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00011111100110000011111101011011;
  in2.bits[1] = 0b00000000000000000010110111101111;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000111000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_65) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000000001;
  // in2 = 0.00000000001000010001;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111011100110101111000100010001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000101000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_66) {
  s21_decimal in1, in2, origin;
  // in1 = 0.00000000000000000005;
  // in2 = 0.0000000000000000000000345;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000101000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000101011001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000110010000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000001011111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000110010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_67) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000001567;
  // in2 = 0.0000000000000000000000000080;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000011000011111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001010000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000111000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000101111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_mod_68) {
  s21_decimal in1, in2, origin;
  // in1 = 0.0000000000000000000000000001;
  // in2 = 0.0000000000000000000000000001;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000111000000000000000000;
  s21_decimal result = s21_mod(in1, in2);
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_equal_1) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_2) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2.00;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000011001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_3) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_4) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.000000000000000000000000000;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_5) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -3;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_6) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_7) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.22221200000000000;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010000000000000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_8) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 3.2222121;
  // in2 = 3.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000001111010111010101110101001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001100010010101011000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_9) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = -2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_10) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_11) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 987456543210.0;
  // in2 = 98745654321.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101000111111110001100111101010;
  in2.bits[1] = 0b00000000000000000000000011100101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_12) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -9878798789.5867800;
  // in2 = -9878798789.58678;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110101010001000001111001010110;
  in2.bits[1] = 0b00000000000000111000001001111000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_13) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_14) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615;
  // in2 = 18446744073709551615.000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11000100011001010011011000000000;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00111011100110101100100111111111;
  in2.bits[3] = 0b00000000000010010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_15) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_16) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10000010111000100101101011101101;
  in2.bits[1] = 0b11111001111010000010010110101101;
  in2.bits[2] = 0b10110000001111101111000010010100;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_17) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_18) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 7961327.845421879754123131254;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110111001000011100101110110;
  in2.bits[1] = 0b01001011001101011010000111011001;
  in2.bits[2] = 0b00011001101110010111010010111111;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_19) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 12345677.987654000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100111110001110000000000000000;
  in2.bits[1] = 0b11000000010001001001101110001101;
  in2.bits[2] = 0b00100111111001000001101100000000;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_20) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_21) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876531;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110011;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_22) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110010;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_23) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_24) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -69.1234567;
  // in2 = -69.12345670000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100100001110011001110110000000;
  in2.bits[1] = 0b00000000000110001000111010111101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_25) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 13436577854.000000000000;
  // in2 = 13436577854;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00100000111000011110100000111110;
  in2.bits[1] = 0b00000000000000000000000000000011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_26) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_27) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_28) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_29) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.7986531268974139743;
  // in2 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111110100100001101100101011111;
  in2.bits[1] = 0b10000100011001000010000111101000;
  in2.bits[2] = 0b00000000000000000000000000000001;
  in2.bits[3] = 0b00000000000100110000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_30) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2156878451.8547640000000000;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_31) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 5.4564654654864768465454654846;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01101110100110100110010101111110;
  in2.bits[1] = 0b11100010111000110111110100101010;
  in2.bits[2] = 0b10110000010011101101001100001111;
  in2.bits[3] = 0b00000000000111000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_32) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -7.7545545454546589781677545545;
  // in2 = -7.7545545454546589781677545545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000101101101111001100001001001;
  in1.bits[1] = 0b01101011011011011010110110010010;
  in1.bits[2] = 0b11111010100100000010101111111010;
  in1.bits[3] = 0b10000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101101101111001100001001001;
  in2.bits[1] = 0b01101011011011011010110110010010;
  in2.bits[2] = 0b11111010100100000010101111111010;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_33) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -79228162514264337593543950335;
  // in2 = -792281625.14264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000101000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_34) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 675432788976.5424354657687;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_35) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -579895323215489956.67897455465;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_36) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 1844674407370955161.50;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111110110;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00000000000000000000000000001001;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_37) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 44073709551615.0;
  // in2 = 44073709551615.00000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011010000001000111111111110110;
  in1.bits[1] = 0b00000000000000011001000011011001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111010010100001111100000000;
  in2.bits[1] = 0b11101100100011110001010001110111;
  in2.bits[2] = 0b00000000000000000000000011101110;
  in2.bits[3] = 0b00000000000010000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_38) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 228162514264337.5935439503;
  // in2 = 228162514264337.59354395030000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010010111101011100001010001111;
  in1.bits[1] = 0b00100101100101100010101000001101;
  in1.bits[2] = 0b00000000000000011110001100100111;
  in1.bits[3] = 0b00000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111111111111111000111110000;
  in2.bits[1] = 0b00111001110010101010100001111000;
  in2.bits[2] = 0b01001001101110010010100100101100;
  in2.bits[3] = 0b00000000000011100000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_39) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -754554545454658.97816770;
  // in2 = -754554545454658.9781677;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100000101101101001001011000010;
  in1.bits[1] = 0b01110010110010011000000011111000;
  in1.bits[2] = 0b00000000000000000000111111111010;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011100110111110000111010101101;
  in2.bits[1] = 0b00001011011110101000110011100101;
  in2.bits[2] = 0b00000000000000000000000110011001;
  in2.bits[3] = 0b10000000000001110000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_40) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2.514264337593543;
  // in2 = -2.5142643375935430000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001000101101101011010011000111;
  in1.bits[1] = 0b00000000000010001110111010110101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01010011100110100110000000000000;
  in2.bits[1] = 0b10000010110010001001101110001011;
  in2.bits[2] = 0b01010001001111011000000111010100;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_41) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_42) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_43) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_44) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_45) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_46) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_47) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_48) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_49) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_equal_50) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST
START_TEST(s21_not_equal_1) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_2) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2.00;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000011001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_3) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_4) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.000000000000000000000000000;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_5) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -3;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_6) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_7) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.22221200000000000;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010000000000000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_8) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 3.2222121;
  // in2 = 3.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000001111010111010101110101001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001100010010101011000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_9) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = -2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_10) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_11) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 987456543210.0;
  // in2 = 98745654321.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101000111111110001100111101010;
  in2.bits[1] = 0b00000000000000000000000011100101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_12) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -9878798789.5867800;
  // in2 = -9878798789.58678;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110101010001000001111001010110;
  in2.bits[1] = 0b00000000000000111000001001111000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_13) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_14) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615;
  // in2 = 18446744073709551615.000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11000100011001010011011000000000;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00111011100110101100100111111111;
  in2.bits[3] = 0b00000000000010010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_15) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_16) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10000010111000100101101011101101;
  in2.bits[1] = 0b11111001111010000010010110101101;
  in2.bits[2] = 0b10110000001111101111000010010100;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_17) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_18) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 7961327.845421879754123131254;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110111001000011100101110110;
  in2.bits[1] = 0b01001011001101011010000111011001;
  in2.bits[2] = 0b00011001101110010111010010111111;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_19) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 12345677.987654000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100111110001110000000000000000;
  in2.bits[1] = 0b11000000010001001001101110001101;
  in2.bits[2] = 0b00100111111001000001101100000000;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_20) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_21) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876531;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110011;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_22) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110010;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_23) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_24) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -69.1234567;
  // in2 = -69.12345670000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100100001110011001110110000000;
  in2.bits[1] = 0b00000000000110001000111010111101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_25) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 13436577854.000000000000;
  // in2 = 13436577854;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00100000111000011110100000111110;
  in2.bits[1] = 0b00000000000000000000000000000011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_26) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_27) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_28) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_29) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.7986531268974139743;
  // in2 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111110100100001101100101011111;
  in2.bits[1] = 0b10000100011001000010000111101000;
  in2.bits[2] = 0b00000000000000000000000000000001;
  in2.bits[3] = 0b00000000000100110000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_30) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2156878451.8547640000000000;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_31) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 5.4564654654864768465454654846;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01101110100110100110010101111110;
  in2.bits[1] = 0b11100010111000110111110100101010;
  in2.bits[2] = 0b10110000010011101101001100001111;
  in2.bits[3] = 0b00000000000111000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_32) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -7.7545545454546589781677545545;
  // in2 = -7.7545545454546589781677545545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000101101101111001100001001001;
  in1.bits[1] = 0b01101011011011011010110110010010;
  in1.bits[2] = 0b11111010100100000010101111111010;
  in1.bits[3] = 0b10000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101101101111001100001001001;
  in2.bits[1] = 0b01101011011011011010110110010010;
  in2.bits[2] = 0b11111010100100000010101111111010;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_33) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -79228162514264337593543950335;
  // in2 = -792281625.14264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000101000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_34) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 675432788976.5424354657687;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_35) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -579895323215489956.67897455465;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_36) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 1844674407370955161.50;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111110110;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00000000000000000000000000001001;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_37) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 44073709551615.0;
  // in2 = 44073709551615.00000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011010000001000111111111110110;
  in1.bits[1] = 0b00000000000000011001000011011001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111010010100001111100000000;
  in2.bits[1] = 0b11101100100011110001010001110111;
  in2.bits[2] = 0b00000000000000000000000011101110;
  in2.bits[3] = 0b00000000000010000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_38) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 228162514264337.5935439503;
  // in2 = 228162514264337.59354395030000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010010111101011100001010001111;
  in1.bits[1] = 0b00100101100101100010101000001101;
  in1.bits[2] = 0b00000000000000011110001100100111;
  in1.bits[3] = 0b00000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111111111111111000111110000;
  in2.bits[1] = 0b00111001110010101010100001111000;
  in2.bits[2] = 0b01001001101110010010100100101100;
  in2.bits[3] = 0b00000000000011100000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_39) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -754554545454658.97816770;
  // in2 = -754554545454658.9781677;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100000101101101001001011000010;
  in1.bits[1] = 0b01110010110010011000000011111000;
  in1.bits[2] = 0b00000000000000000000111111111010;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011100110111110000111010101101;
  in2.bits[1] = 0b00001011011110101000110011100101;
  in2.bits[2] = 0b00000000000000000000000110011001;
  in2.bits[3] = 0b10000000000001110000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_40) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2.514264337593543;
  // in2 = -2.5142643375935430000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001000101101101011010011000111;
  in1.bits[1] = 0b00000000000010001110111010110101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01010011100110100110000000000000;
  in2.bits[1] = 0b10000010110010001001101110001011;
  in2.bits[2] = 0b01010001001111011000000111010100;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_41) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_42) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_43) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_44) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_45) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_46) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_47) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_48) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_49) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_not_equal_50) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_not_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST
START_TEST(s21_less_1) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_2) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2.00;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000011001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_3) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_4) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -0.000000000000000000000000000;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_5) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -3;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_6) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_7) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.22221200000001000;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010001111101000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_8) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 3.2222121;
  // in2 = 3.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000001111010111010101110101001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001100010010101011000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_9) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = -2.2222120002;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00101100100010101010010001000010;
  in2.bits[1] = 0b00000000000000000000000000000101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000010100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_10) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_11) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 987456543210.0;
  // in2 = 98745654321.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101000111111110001100111101010;
  in2.bits[1] = 0b00000000000000000000000011100101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_12) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -9878798789.5867800;
  // in2 = -9878798789.58678;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110101010001000001111001010110;
  in2.bits[1] = 0b00000000000000111000001001111000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_13) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_14) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615;
  // in2 = 18446744073709551615.000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11000100011001010011011000000000;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00111011100110101100100111111111;
  in2.bits[3] = 0b00000000000010010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_15) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_16) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10000010111000100101101011101101;
  in2.bits[1] = 0b11111001111010000010010110101101;
  in2.bits[2] = 0b10110000001111101111000010010100;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_17) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_18) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 7961327.845421879754123131254;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110111001000011100101110110;
  in2.bits[1] = 0b01001011001101011010000111011001;
  in2.bits[2] = 0b00011001101110010111010010111111;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_19) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 12345677.987654000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100111110001110000000000000000;
  in2.bits[1] = 0b11000000010001001001101110001101;
  in2.bits[2] = 0b00100111111001000001101100000000;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_20) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_21) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876531;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110011;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_22) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110010;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_23) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_24) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -69.1234567;
  // in2 = -69.12345670000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100100001110011001110110000000;
  in2.bits[1] = 0b00000000000110001000111010111101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_25) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 13436577854.000000000000;
  // in2 = 13436577854;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00100000111000011110100000111110;
  in2.bits[1] = 0b00000000000000000000000000000011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_26) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_27) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_28) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_29) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.7986531268974139743;
  // in2 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111110100100001101100101011111;
  in2.bits[1] = 0b10000100011001000010000111101000;
  in2.bits[2] = 0b00000000000000000000000000000001;
  in2.bits[3] = 0b00000000000100110000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_30) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2156878451.8547640000000000;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_31) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 5.4564654654864768465454654846;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01101110100110100110010101111110;
  in2.bits[1] = 0b11100010111000110111110100101010;
  in2.bits[2] = 0b10110000010011101101001100001111;
  in2.bits[3] = 0b00000000000111000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_32) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -7.7545545454546589781677545545;
  // in2 = -7.7545545454546589781677545545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000101101101111001100001001001;
  in1.bits[1] = 0b01101011011011011010110110010010;
  in1.bits[2] = 0b11111010100100000010101111111010;
  in1.bits[3] = 0b10000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101101101111001100001001001;
  in2.bits[1] = 0b01101011011011011010110110010010;
  in2.bits[2] = 0b11111010100100000010101111111010;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_33) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -79228162514264337593543950335;
  // in2 = -792281625.14264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000101000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_34) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 675432788976.5424354657687;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_35) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -579895323215489956.67897455465;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_36) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 1844674407370955161.50;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111110110;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00000000000000000000000000001001;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_37) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 44073709551615.0;
  // in2 = 44073709551615.00000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011010000001000111111111110110;
  in1.bits[1] = 0b00000000000000011001000011011001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111010010100001111100000000;
  in2.bits[1] = 0b11101100100011110001010001110111;
  in2.bits[2] = 0b00000000000000000000000011101110;
  in2.bits[3] = 0b00000000000010000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_38) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 228162514264337.5935439503;
  // in2 = 228162514264337.59354395030000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010010111101011100001010001111;
  in1.bits[1] = 0b00100101100101100010101000001101;
  in1.bits[2] = 0b00000000000000011110001100100111;
  in1.bits[3] = 0b00000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111111111111111000111110000;
  in2.bits[1] = 0b00111001110010101010100001111000;
  in2.bits[2] = 0b01001001101110010010100100101100;
  in2.bits[3] = 0b00000000000011100000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_39) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -754554545454658.97816770;
  // in2 = -754554545454658.9781677;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100000101101101001001011000010;
  in1.bits[1] = 0b01110010110010011000000011111000;
  in1.bits[2] = 0b00000000000000000000111111111010;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011100110111110000111010101101;
  in2.bits[1] = 0b00001011011110101000110011100101;
  in2.bits[2] = 0b00000000000000000000000110011001;
  in2.bits[3] = 0b10000000000001110000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_40) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2.514264337593543;
  // in2 = -2.514264337593542;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001000101101101011010011000111;
  in1.bits[1] = 0b00000000000010001110111010110101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11001000101101101011010011000110;
  in2.bits[1] = 0b00000000000010001110111010110101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_41) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_42) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_43) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_44) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_45) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_46) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_47) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_48) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_49) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_50) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST
START_TEST(s21_less_or_equal_1) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_2) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2.00;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000011001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_3) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_4) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.000000000000000000000000000;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_5) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -3;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_6) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_7) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.22221200000001000;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010001111101000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_8) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 3.2222121;
  // in2 = 3.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000001111010111010101110101001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001100010010101011000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_9) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = -2.2222120002;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00101100100010101010010001000010;
  in2.bits[1] = 0b00000000000000000000000000000101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000010100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_10) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_11) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 987456543210.0;
  // in2 = 98745654321.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101000111111110001100111101010;
  in2.bits[1] = 0b00000000000000000000000011100101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_12) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -9878798789.5867800;
  // in2 = -9878798789.58678;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110101010001000001111001010110;
  in2.bits[1] = 0b00000000000000111000001001111000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_13) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_14) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615;
  // in2 = 18446744073709551615.000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11000100011001010011011000000000;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00111011100110101100100111111111;
  in2.bits[3] = 0b00000000000010010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_15) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_16) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10000010111000100101101011101101;
  in2.bits[1] = 0b11111001111010000010010110101101;
  in2.bits[2] = 0b10110000001111101111000010010100;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_17) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_18) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 7961327845421.879754123131254;
  // in2 = 7961327.845421879754123131254;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001110111001000011100101110110;
  in1.bits[1] = 0b01001011001101011010000111011001;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b00000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110111001000011100101110110;
  in2.bits[1] = 0b01001011001101011010000111011001;
  in2.bits[2] = 0b00011001101110010111010010111111;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_19) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 12345677.987654000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100111110001110000000000000000;
  in2.bits[1] = 0b11000000010001001001101110001101;
  in2.bits[2] = 0b00100111111001000001101100000000;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_20) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -12345677.987654345678987654346;
  // in2 = 87654323456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b10000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010001110011011101000110000101;
  in2.bits[1] = 0b11110101101111000110111111000000;
  in2.bits[2] = 0b00000010110101010000111100111111;
  in2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_21) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876531;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110011;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_22) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b10000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110010;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_23) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_24) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -69.1234567;
  // in2 = -69.12345670000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100100001110011001110110000000;
  in2.bits[1] = 0b00000000000110001000111010111101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_25) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 13436577854.000000000000;
  // in2 = 13436577854;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00100000111000011110100000111110;
  in2.bits[1] = 0b00000000000000000000000000000011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_26) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_27) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_28) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_29) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.7986531268974139743;
  // in2 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111110100100001101100101011111;
  in2.bits[1] = 0b10000100011001000010000111101000;
  in2.bits[2] = 0b00000000000000000000000000000001;
  in2.bits[3] = 0b00000000000100110000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_30) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2156878451.8547640000000000;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_31) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 5.4564654654864768465454654846;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01101110100110100110010101111110;
  in2.bits[1] = 0b11100010111000110111110100101010;
  in2.bits[2] = 0b10110000010011101101001100001111;
  in2.bits[3] = 0b00000000000111000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_32) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -7.7545545454546589781677545545;
  // in2 = -7.7545545454546589781677545545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000101101101111001100001001001;
  in1.bits[1] = 0b01101011011011011010110110010010;
  in1.bits[2] = 0b11111010100100000010101111111010;
  in1.bits[3] = 0b10000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101101101111001100001001001;
  in2.bits[1] = 0b01101011011011011010110110010010;
  in2.bits[2] = 0b11111010100100000010101111111010;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_33) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -79228162514264337593543950335;
  // in2 = -792281625.14264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000101000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_34) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 675432788976.5424354657687;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_35) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -579895323215489956.67897455465;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_36) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 1844674407370955161.50;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111110110;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00000000000000000000000000001001;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_37) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 44073709551615.0;
  // in2 = 44073709551615.00000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011010000001000111111111110110;
  in1.bits[1] = 0b00000000000000011001000011011001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111010010100001111100000000;
  in2.bits[1] = 0b11101100100011110001010001110111;
  in2.bits[2] = 0b00000000000000000000000011101110;
  in2.bits[3] = 0b00000000000010000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_38) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 228162514264337.5935439503;
  // in2 = 228162514264337.59354395030000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01010010111101011100001010001111;
  in1.bits[1] = 0b00100101100101100010101000001101;
  in1.bits[2] = 0b00000000000000011110001100100111;
  in1.bits[3] = 0b00000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111111111111111000111110000;
  in2.bits[1] = 0b00111001110010101010100001111000;
  in2.bits[2] = 0b01001001101110010010100100101100;
  in2.bits[3] = 0b00000000000011100000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_39) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -754554545454658.97816770;
  // in2 = -754554545454658.9781677;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100000101101101001001011000010;
  in1.bits[1] = 0b01110010110010011000000011111000;
  in1.bits[2] = 0b00000000000000000000111111111010;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011100110111110000111010101101;
  in2.bits[1] = 0b00001011011110101000110011100101;
  in2.bits[2] = 0b00000000000000000000000110011001;
  in2.bits[3] = 0b10000000000001110000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_40) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2.514264337593543;
  // in2 = -2.514264337593542;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001000101101101011010011000111;
  in1.bits[1] = 0b00000000000010001110111010110101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11001000101101101011010011000110;
  in2.bits[1] = 0b00000000000010001110111010110101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_41) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_42) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_43) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_44) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_45) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_46) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_47) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_48) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_49) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_less_or_equal_50) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_less_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST
START_TEST(s21_greater_1) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_2) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 457;
  // in2 = 2.00;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000111001001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000011001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_3) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 54;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000110110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_4) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.000000000000000000000000000;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_5) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -3;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_6) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_7) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.22221200000001000;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010001111101000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_8) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 3.745754741;
  // in2 = 3.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11011111010000111010111001110101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001100010010101011000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_9) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = -2.2222120002;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00101100100010101010010001000010;
  in2.bits[1] = 0b00000000000000000000000000000101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000010100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_10) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_11) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 987456543210.0;
  // in2 = 98745654321.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101000111111110001100111101010;
  in2.bits[1] = 0b00000000000000000000000011100101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_12) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -9878798789.5867800;
  // in2 = -9878798789.58678;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110101010001000001111001010110;
  in2.bits[1] = 0b00000000000000111000001001111000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_13) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_14) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615;
  // in2 = 434345343551615.00000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01000110001111010001100000000000;
  in2.bits[1] = 0b11010011010011111110100110011101;
  in2.bits[2] = 0b00000000001000111110110110011110;
  in2.bits[3] = 0b00000000000010110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_15) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_16) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -796214545.3526545454564545456;
  // in2 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111111111111101001001110110000;
  in1.bits[1] = 0b11101010111111101111100111101000;
  in1.bits[2] = 0b00011001101110100010000111100001;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10000010111000100101101011101101;
  in2.bits[1] = 0b11111001111010000010010110101101;
  in2.bits[2] = 0b10110000001111101111000010010100;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_17) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_18) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -7961327845421.843434341378545;
  // in2 = 7961327.845421879754123131254;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11110011001100111010100111110001;
  in1.bits[1] = 0b01001011001101011000000011010000;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110111001000011100101110110;
  in2.bits[1] = 0b01001011001101011010000111011001;
  in2.bits[2] = 0b00011001101110010111010010111111;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_19) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 12345677.987654000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100111110001110000000000000000;
  in2.bits[1] = 0b11000000010001001001101110001101;
  in2.bits[2] = 0b00100111111001000001101100000000;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_20) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 145752736456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10001101100101011101000110000101;
  in2.bits[1] = 0b11000001100101010111000111101011;
  in2.bits[2] = 0b00000100101101011010001101101100;
  in2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_21) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876531;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110011;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_22) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -854764561465456456.9876545679;
  // in2 = -87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000100000001000100000010001111;
  in1.bits[1] = 0b01000000100100100110001100010101;
  in1.bits[2] = 0b00011011100111100111001001011101;
  in1.bits[3] = 0b10000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110010;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_23) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_24) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -69.1234567;
  // in2 = -69.12345670000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100100001110011001110110000000;
  in2.bits[1] = 0b00000000000110001000111010111101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_25) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 13436577854.000000000000;
  // in2 = 13436577854;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00100000111000011110100000111110;
  in2.bits[1] = 0b00000000000000000000000000000011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_26) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_27) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_28) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_29) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.7986531268974139743;
  // in2 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111110100100001101100101011111;
  in2.bits[1] = 0b10000100011001000010000111101000;
  in2.bits[2] = 0b00000000000000000000000000000001;
  in2.bits[3] = 0b00000000000100110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_30) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2156878451.8547640000000000;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_31) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 45645405.456456345684654546548;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01000110110111011101111001110100;
  in2.bits[1] = 0b11111110010110110111101101110010;
  in2.bits[2] = 0b10010011011111001111111010010011;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_32) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -776890.75455454213415678965898;
  // in2 = -7.7545545454546589781677545545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000010010111101111100010001010;
  in1.bits[1] = 0b01011100000101000111000011011000;
  in1.bits[2] = 0b11111011000001101110010110100011;
  in1.bits[3] = 0b10000000000101110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101101101111001100001001001;
  in2.bits[1] = 0b01101011011011011010110110010010;
  in2.bits[2] = 0b11111010100100000010101111111010;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_33) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -732123534337593543950335.12;
  // in2 = -792281625.14264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000011000110111111111110101000;
  in1.bits[1] = 0b10100001110111010100101100101110;
  in1.bits[2] = 0b00000000001111001000111101010001;
  in1.bits[3] = 0b10000000000000100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000101000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_34) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 675432788976.5424354657687;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_35) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -579895323215489956.67897455465;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_36) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 123523543453453453.0;
  // in2 = 1844674407370955161.50;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001001011001111111110110000010;
  in1.bits[1] = 0b00010001001001000111000000010101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111110110;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00000000000000000000000000001001;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_37) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 31231232456315.0;
  // in2 = 44073709551615.00000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100001001010100010000011001110;
  in1.bits[1] = 0b00000000000000010001110000001011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111010010100001111100000000;
  in2.bits[1] = 0b11101100100011110001010001110111;
  in2.bits[2] = 0b00000000000000000000000011101110;
  in2.bits[3] = 0b00000000000010000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_38) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 78987543557678337.5935439503;
  // in2 = 228162514264337.59354395030000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00111011110001111000001010001111;
  in1.bits[1] = 0b00101001100010100010010001100011;
  in1.bits[2] = 0b00000010100011010101111010100001;
  in1.bits[3] = 0b00000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111111111111111000111110000;
  in2.bits[1] = 0b00111001110010101010100001111000;
  in2.bits[2] = 0b01001001101110010010100100101100;
  in2.bits[3] = 0b00000000000011100000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_39) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -754567488438.97816770;
  // in2 = -754554545454658.9781677;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011010011001011000011011000010;
  in1.bits[1] = 0b00010111001011000011100101001001;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011100110111110000111010101101;
  in2.bits[1] = 0b00001011011110101000110011100101;
  in2.bits[2] = 0b00000000000000000000000110011001;
  in2.bits[3] = 0b10000000000001110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_40) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2.514475768684753643;
  // in2 = -2.514264337593542;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100110010000011001011101011;
  in1.bits[1] = 0b00100010111001010011011001100011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000100100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11001000101101101011010011000110;
  in2.bits[1] = 0b00000000000010001110111010110101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_41) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_42) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_43) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_44) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_45) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_46) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_47) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_48) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_49) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_50) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST
START_TEST(s21_greater_or_equal_1) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 2;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_2) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 457;
  // in2 = 2.00;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000111001001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000011001000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_3) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2;
  // in2 = 54;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000110110;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_4) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.000000000000000000000000000;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_5) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -3;
  // in2 = 3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000011;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_6) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_7) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.22221200000001000;
  // in2 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010001111101000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001000011110100010000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_8) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 3.745754741;
  // in2 = 3.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11011111010000111010111001110101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000001100010010101011000100;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000001100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_9) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.222212;
  // in2 = -2.2222120002;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00101100100010101010010001000010;
  in2.bits[1] = 0b00000000000000000000000000000101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000010100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_10) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -364748;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_11) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 987456543210.0;
  // in2 = 98745654321.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101000111111110001100111101010;
  in2.bits[1] = 0b00000000000000000000000011100101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_12) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -9878798789.5867800;
  // in2 = -9878798789.58678;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110101010001000001111001010110;
  in2.bits[1] = 0b00000000000000111000001001111000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_13) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 9999999999999999999;
  // in2 = 1;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000000000001;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_14) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615;
  // in2 = 434345343551615.00000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01000110001111010001100000000000;
  in2.bits[1] = 0b11010011010011111110100110011101;
  in2.bits[2] = 0b00000000001000111110110110011110;
  in2.bits[3] = 0b00000000000010110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_15) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 18446744073709551615.0;
  // in2 = 965453154;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00111001100010111010010101100010;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_16) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -796214545.3526545454564545456;
  // in2 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111111111111101001001110110000;
  in1.bits[1] = 0b11101010111111101111100111101000;
  in1.bits[2] = 0b00011001101110100010000111100001;
  in1.bits[3] = 0b10000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10000010111000100101101011101101;
  in2.bits[1] = 0b11111001111010000010010110101101;
  in2.bits[2] = 0b10110000001111101111000010010100;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_17) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -545454512454545.35265454545645;
  // in2 = -5.352654545456454545645464;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001000000110110001111110011000;
  in2.bits[1] = 0b11111011111111011000100101101101;
  in2.bits[2] = 0b00000000000001000110110101110111;
  in2.bits[3] = 0b10000000000110000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_18) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -7961327845421.843434341378545;
  // in2 = 7961327.845421879754123131254;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11110011001100111010100111110001;
  in1.bits[1] = 0b01001011001101011000000011010000;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b10000000000011110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01001110111001000011100101110110;
  in2.bits[1] = 0b01001011001101011010000111011001;
  in2.bits[2] = 0b00011001101110010111010010111111;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_19) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 12345677.987654000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100111110001110000000000000000;
  in2.bits[1] = 0b11000000010001001001101110001101;
  in2.bits[2] = 0b00100111111001000001101100000000;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_20) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 12345677.987654345678987654346;
  // in2 = 145752736456.9876545678987653;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10001101100101011101000110000101;
  in2.bits[1] = 0b11000001100101010111000111101011;
  in2.bits[2] = 0b00000100101101011010001101101100;
  in2.bits[3] = 0b00000000000100000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_21) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87654323456.98765456789876530;
  // in2 = -87654323456.98765456789876531;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b00000000000100010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110011;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_22) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -854764561465456456.9876545679;
  // in2 = -87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000100000001000100000010001111;
  in1.bits[1] = 0b01000000100100100110001100010101;
  in1.bits[2] = 0b00011011100111100111001001011101;
  in1.bits[3] = 0b10000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10110010000010100010111100110010;
  in2.bits[1] = 0b10011001010111000101110110000000;
  in2.bits[2] = 0b00011100010100101001100001111111;
  in2.bits[3] = 0b10000000000100010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_23) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.0;
  // in2 = 0.69;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000000000000000000000001000101;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_24) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -69.1234567;
  // in2 = -69.12345670000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100100001110011001110110000000;
  in2.bits[1] = 0b00000000000110001000111010111101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_25) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 13436577854.000000000000;
  // in2 = 13436577854;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00100000111000011110100000111110;
  in2.bits[1] = 0b00000000000000000000000000000011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_26) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_27) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 79228162514264337593543950335;
  // in2 = -79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_28) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 665464545;
  // in2 = 8798232189789785;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00010000010100101110011001011001;
  in2.bits[1] = 0b00000000000111110100000111110010;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_29) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 2.7986531268974139743;
  // in2 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111110100100001101100101011111;
  in2.bits[1] = 0b10000100011001000010000111101000;
  in2.bits[2] = 0b00000000000000000000000000000001;
  in2.bits[3] = 0b00000000000100110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_30) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2156878451.8547640000000000;
  // in2 = -2156878451.854764;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01100101111100100100110110101100;
  in2.bits[1] = 0b00000000000001111010100110101011;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000001100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_31) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0.5456465465486476846545465485;
  // in2 = 45645405.456456345684654546548;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b01000110110111011101111001110100;
  in2.bits[1] = 0b11111110010110110111101101110010;
  in2.bits[2] = 0b10010011011111001111111010010011;
  in2.bits[3] = 0b00000000000101010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_32) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -776890.75455454213415678965898;
  // in2 = -7.7545545454546589781677545545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000010010111101111100010001010;
  in1.bits[1] = 0b01011100000101000111000011011000;
  in1.bits[2] = 0b11111011000001101110010110100011;
  in1.bits[3] = 0b10000000000101110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b00000101101101111001100001001001;
  in2.bits[1] = 0b01101011011011011010110110010010;
  in2.bits[2] = 0b11111010100100000010101111111010;
  in2.bits[3] = 0b10000000000111000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_33) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -732123534337593543950335.12;
  // in2 = -792281625.14264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000011000110111111111110101000;
  in1.bits[1] = 0b10100001110111010100101100101110;
  in1.bits[2] = 0b00000000001111001000111101010001;
  in1.bits[3] = 0b10000000000000100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111111111;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b11111111111111111111111111111111;
  in2.bits[3] = 0b10000000000101000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_34) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 675432788976.5424354657687;
  // in2 = 67543278.89765424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10111110000100011000010110010111;
  in2.bits[1] = 0b11011001001111010001001011000110;
  in2.bits[2] = 0b00000000000001011001011001001000;
  in2.bits[3] = 0b00000000000100010000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_35) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -579895323215489956.67897455465;
  // in2 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11100110001001011001001101101001;
  in2.bits[1] = 0b00111000110110101110001010110100;
  in2.bits[2] = 0b10111011010111111101000100011110;
  in2.bits[3] = 0b10000000000010110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_36) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 123523543453453453.0;
  // in2 = 1844674407370955161.50;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001001011001111111110110000010;
  in1.bits[1] = 0b00010001001001000111000000010101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11111111111111111111111111110110;
  in2.bits[1] = 0b11111111111111111111111111111111;
  in2.bits[2] = 0b00000000000000000000000000001001;
  in2.bits[3] = 0b00000000000000100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_37) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 31231232456315.0;
  // in2 = 44073709551615.00000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100001001010100010000011001110;
  in1.bits[1] = 0b00000000000000010001110000001011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111010010100001111100000000;
  in2.bits[1] = 0b11101100100011110001010001110111;
  in2.bits[2] = 0b00000000000000000000000011101110;
  in2.bits[3] = 0b00000000000010000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_38) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 78987543557678337.5935439503;
  // in2 = 228162514264337.59354395030000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00111011110001111000001010001111;
  in1.bits[1] = 0b00101001100010100010010001100011;
  in1.bits[2] = 0b00000010100011010101111010100001;
  in1.bits[3] = 0b00000000000010100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011111111111111111000111110000;
  in2.bits[1] = 0b00111001110010101010100001111000;
  in2.bits[2] = 0b01001001101110010010100100101100;
  in2.bits[3] = 0b00000000000011100000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_39) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -754567488438.97816770;
  // in2 = -754554545454658.9781677;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011010011001011000011011000010;
  in1.bits[1] = 0b00010111001011000011100101001001;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000010000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b10011100110111110000111010101101;
  in2.bits[1] = 0b00001011011110101000110011100101;
  in2.bits[2] = 0b00000000000000000000000110011001;
  in2.bits[3] = 0b10000000000001110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_40) {
  s21_decimal in1, in2;
  int origin;
  // in1 = -2.514475768684753643;
  // in2 = -2.514264337593542;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100110010000011001011101011;
  in1.bits[1] = 0b00100010111001010011011001100011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000100100000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11001000101101101011010011000110;
  in2.bits[1] = 0b00000000000010001110111010110101;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_41) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_42) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 87551564864.57676545;
  // in2 = 0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001000010001000101001100000001;
  in1.bits[1] = 0b01111001100000001001000001110000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_43) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_44) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = -23565454545435.156764546545455;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NORMAL_VALUE;
  in2.bits[0] = 0b11101101000010111011011100101111;
  in2.bits[1] = 0b10110000001111101110110000010010;
  in2.bits[2] = 0b01001100001001001110001100011010;
  in2.bits[3] = 0b10000000000011110000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_45) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_46) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NAN;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_47) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_48) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 0;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_49) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_greater_or_equal_50) {
  s21_decimal in1, in2;
  int origin;
  // in1 = 0;
  // in2 = 0;
  in1.value_type = s21_NAN;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  in2.value_type = s21_NEGATIVE_INFINITY;
  in2.bits[0] = 0b00000000000000000000000000000000;
  in2.bits[1] = 0b00000000000000000000000000000000;
  in2.bits[2] = 0b00000000000000000000000000000000;
  in2.bits[3] = 0b00000000000000000000000000000000;
  int result = s21_is_greater_or_equal(in1, in2);
  origin = 1;
  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_truncate_1) {
  s21_decimal in1, origin;
  // in1 = 2.1234;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000101001011110010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001000000000000000000;
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_2) {
  s21_decimal in1, origin;
  // in1 = 457.000001;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011011001111010100010001000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  // origin = 457;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000111001001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_3) {
  s21_decimal in1, origin;
  // in1 = 2.000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000011111010000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000110000000000000000;
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_4) {
  s21_decimal in1, origin;
  // in1 = 0.000000000000000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_5) {
  s21_decimal in1, origin;
  // in1 = -3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  // origin = -3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_6) {
  s21_decimal in1, origin;
  // in1 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_7) {
  s21_decimal in1, origin;
  // in1 = 2.22221200000001000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010001111101000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_8) {
  s21_decimal in1, origin;
  // in1 = 3.745754741;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11011111010000111010111001110101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010010000000000000000;
  // origin = 3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_9) {
  s21_decimal in1, origin;
  // in1 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_10) {
  s21_decimal in1, origin;
  // in1 = -364748;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  // origin = -364748;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_11) {
  s21_decimal in1, origin;
  // in1 = 987456543210.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = 987456543210;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11101000111111110001100111101010;
  origin.bits[1] = 0b00000000000000000000000011100101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_12) {
  s21_decimal in1, origin;
  // in1 = -9878798789.5867800;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  // origin = -9878798789;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001100110100101000000111000101;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_13) {
  s21_decimal in1, origin;
  // in1 = 9999999999999999999;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 9999999999999999999;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001001111001111111111111111111;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_14) {
  s21_decimal in1, origin;
  // in1 = 18446744073709551615;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 18446744073709551615;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_15) {
  s21_decimal in1, origin;
  // in1 = 18446744073709551615.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = 18446744073709551615;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_16) {
  s21_decimal in1, origin;
  // in1 = -796214545.3526545454564545456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111111111111101001001110110000;
  in1.bits[1] = 0b11101010111111101111100111101000;
  in1.bits[2] = 0b00011001101110100010000111100001;
  in1.bits[3] = 0b10000000000100110000000000000000;
  // origin = -796214545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101111011101010100010100010001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_17) {
  s21_decimal in1, origin;
  // in1 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  // origin = -545454512454545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000110011101001011101110010001;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_18) {
  s21_decimal in1, origin;
  // in1 = -7961327845421.843434341378545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11110011001100111010100111110001;
  in1.bits[1] = 0b01001011001101011000000011010000;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b10000000000011110000000000000000;
  // origin = -7961327845421;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10100100000111100100000000101101;
  origin.bits[1] = 0b00000000000000000000011100111101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_19) {
  s21_decimal in1, origin;
  // in1 = 12345677.987654345678987654346;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  // origin = 12345677;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000101111000110000101001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_20) {
  s21_decimal in1, origin;
  // in1 = 12345677.987654345678987654346;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  // origin = 12345677;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000101111000110000101001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_21) {
  s21_decimal in1, origin;
  // in1 = 87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b00000000000100010000000000000000;
  // origin = 87654323456;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01101000100110101101010100000000;
  origin.bits[1] = 0b00000000000000000000000000010100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_22) {
  s21_decimal in1, origin;
  // in1 = -854764561465456456.9876545679;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000100000001000100000010001111;
  in1.bits[1] = 0b01000000100100100110001100010101;
  in1.bits[2] = 0b00011011100111100111001001011101;
  in1.bits[3] = 0b10000000000010100000000000000000;
  // origin = -854764561465456456;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000100101111011011011101001000;
  origin.bits[1] = 0b00001011110111001011101111010111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_23) {
  s21_decimal in1, origin;
  // in1 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_24) {
  s21_decimal in1, origin;
  // in1 = -69.1234567;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  // origin = -69;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000001000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_25) {
  s21_decimal in1, origin;
  // in1 = 13436577854.000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  // origin = 13436577854;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100000111000011110100000111110;
  origin.bits[1] = 0b00000000000000000000000000000011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_26) {
  s21_decimal in1, origin;
  // in1 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_27) {
  s21_decimal in1, origin;
  // in1 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_28) {
  s21_decimal in1, origin;
  // in1 = 665464545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 665464545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100111101010100010111011100001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_29) {
  s21_decimal in1, origin;
  // in1 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_30) {
  s21_decimal in1, origin;
  // in1 = -2156878451.8547640000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  // origin = -2156878451;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000000100011110101101001110011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_31) {
  s21_decimal in1, origin;
  // in1 = 0.5456465465486476846545465485;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_32) {
  s21_decimal in1, origin;
  // in1 = -776890.75455454213415678965898;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000010010111101111100010001010;
  in1.bits[1] = 0b01011100000101000111000011011000;
  in1.bits[2] = 0b11111011000001101110010110100011;
  in1.bits[3] = 0b10000000000101110000000000000000;
  // origin = -776890;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000010111101101010111010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_33) {
  s21_decimal in1, origin;
  // in1 = -732123534337593543950335.12;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000011000110111111111110101000;
  in1.bits[1] = 0b10100001110111010100101100101110;
  in1.bits[2] = 0b00000000001111001000111101010001;
  in1.bits[3] = 0b10000000000000100000000000000000;
  // origin = -732123534337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010011110111101111111111111111;
  origin.bits[1] = 0b01111111000011110000001101001111;
  origin.bits[2] = 0b00000000000000001001101100001000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_34) {
  s21_decimal in1, origin;
  // in1 = 675432788976.5424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  // origin = 675432788976;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01000010111011100111001111110000;
  origin.bits[1] = 0b00000000000000000000000010011101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_35) {
  s21_decimal in1, origin;
  // in1 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  // origin = -579895323215489956;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01011011001010110110101110100100;
  origin.bits[1] = 0b00001000000011000011001110111001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_36) {
  s21_decimal in1, origin;
  // in1 = 123523543453453453.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001001011001111111110110000010;
  in1.bits[1] = 0b00010001001001000111000000010101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = 123523543453453453;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100000111100001100110010001101;
  origin.bits[1] = 0b00000001101101101101100000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_37) {
  s21_decimal in1, origin;
  // in1 = 31231232456315.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100001001010100010000011001110;
  in1.bits[1] = 0b00000000000000010001110000001011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = 31231232456315;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010110100001000011011001111011;
  origin.bits[1] = 0b00000000000000000001110001100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_38) {
  s21_decimal in1, origin;
  // in1 = 78987543557678337.5935439503;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00111011110001111000001010001111;
  in1.bits[1] = 0b00101001100010100010010001100011;
  in1.bits[2] = 0b00000010100011010101111010100001;
  in1.bits[3] = 0b00000000000010100000000000000000;
  // origin = 78987543557678337;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10011011011011111010010100000001;
  origin.bits[1] = 0b00000001000110001001111011000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_39) {
  s21_decimal in1, origin;
  // in1 = -754567488438.97816770;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011010011001011000011011000010;
  in1.bits[1] = 0b00010111001011000011100101001001;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000010000000000000000000;
  // origin = -754567488438;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101111101110100010001110110110;
  origin.bits[1] = 0b00000000000000000000000010101111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_40) {
  s21_decimal in1, origin;
  // in1 = -2.514475768684753643;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100110010000011001011101011;
  in1.bits[1] = 0b00100010111001010011011001100011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000100100000000000000000;
  // origin = -2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_41) {
  s21_decimal in1, origin;
  // in1 = -0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  // origin = -0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_42) {
  s21_decimal in1, origin;
  // in1 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_43) {
  s21_decimal in1, origin;
  // in1 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_44) {
  s21_decimal in1, origin;
  // in1 = 123143;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000011110000100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_45) {
  s21_decimal in1, origin;
  // in1 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_46) {
  s21_decimal in1, origin;
  // in1 = -9876;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000010011010010100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_truncate_47) {
  s21_decimal in1, origin;
  // in1 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_truncate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST
START_TEST(s21_negate_1) {
  s21_decimal in1, origin;
  // in1 = 2.1234;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000101001011110010;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001000000000000000000;
  // origin = -2.1234;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000101001011110010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000001000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_2) {
  s21_decimal in1, origin;
  // in1 = 457.000001;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011011001111010100010001000001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  // origin = -457.000001;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00011011001111010100010001000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_3) {
  s21_decimal in1, origin;
  // in1 = 2.000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000011111010000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000110000000000000000;
  // origin = -2.000;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000011111010000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_4) {
  s21_decimal in1, origin;
  // in1 = 0.000000000000000000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000110110000000000000000;
  // origin = 0.000000000000000000000000000;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000110110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_5) {
  s21_decimal in1, origin;
  // in1 = -3;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000011;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  // origin = 3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_6) {
  s21_decimal in1, origin;
  // in1 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  // origin = -2.222212;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000001000011110100010000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_7) {
  s21_decimal in1, origin;
  // in1 = 2.22221200000001000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000111100011111010001111101000;
  in1.bits[1] = 0b00000011000101010111110100000001;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000100010000000000000000;
  // origin = -2.22221200000001000;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000111100011111010001111101000;
  origin.bits[1] = 0b00000011000101010111110100000001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000100010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_8) {
  s21_decimal in1, origin;
  // in1 = 3.745754741;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11011111010000111010111001110101;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000010010000000000000000;
  // origin = -3.745754741;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11011111010000111010111001110101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000010010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_9) {
  s21_decimal in1, origin;
  // in1 = 2.222212;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000001000011110100010000100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000001100000000000000000;
  // origin = -2.222212;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000001000011110100010000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_10) {
  s21_decimal in1, origin;
  // in1 = -364748;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000001011001000011001100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  // origin = 364748;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_11) {
  s21_decimal in1, origin;
  // in1 = 987456543210.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00011001111101110000001100100100;
  in1.bits[1] = 0b00000000000000000000100011111011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = -987456543210.0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00011001111101110000001100100100;
  origin.bits[1] = 0b00000000000000000000100011111011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_12) {
  s21_decimal in1, origin;
  // in1 = -9878798789.5867800;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11001110100110111101100110011000;
  in1.bits[1] = 0b00000001010111101111011100100110;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  // origin = 9878798789.5867800;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11001110100110111101100110011000;
  origin.bits[1] = 0b00000001010111101111011100100110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000001110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_13) {
  s21_decimal in1, origin;
  // in1 = 9999999999999999999;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10001001111001111111111111111111;
  in1.bits[1] = 0b10001010110001110010001100000100;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = -9999999999999999999;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10001001111001111111111111111111;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_14) {
  s21_decimal in1, origin;
  // in1 = 18446744073709551615;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = -18446744073709551615;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_15) {
  s21_decimal in1, origin;
  // in1 = 18446744073709551615.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111110110;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b00000000000000000000000000001001;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = -18446744073709551615.0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111110110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000001001;
  origin.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_16) {
  s21_decimal in1, origin;
  // in1 = -796214545.3526545454564545456;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111111111111101001001110110000;
  in1.bits[1] = 0b11101010111111101111100111101000;
  in1.bits[2] = 0b00011001101110100010000111100001;
  in1.bits[3] = 0b10000000000100110000000000000000;
  // origin = 796214545.3526545454564545456;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111111111111101001001110110000;
  origin.bits[1] = 0b11101010111111101111100111101000;
  origin.bits[2] = 0b00011001101110100010000111100001;
  origin.bits[3] = 0b00000000000100110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_17) {
  s21_decimal in1, origin;
  // in1 = -545454512454545.35265454545645;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10000010111000100101101011101101;
  in1.bits[1] = 0b11111001111010000010010110101101;
  in1.bits[2] = 0b10110000001111101111000010010100;
  in1.bits[3] = 0b10000000000011100000000000000000;
  // origin = 545454512454545.35265454545645;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000010111000100101101011101101;
  origin.bits[1] = 0b11111001111010000010010110101101;
  origin.bits[2] = 0b10110000001111101111000010010100;
  origin.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_18) {
  s21_decimal in1, origin;
  // in1 = -7961327845421.843434341378545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11110011001100111010100111110001;
  in1.bits[1] = 0b01001011001101011000000011010000;
  in1.bits[2] = 0b00011001101110010111010010111111;
  in1.bits[3] = 0b10000000000011110000000000000000;
  // origin = 7961327845421.843434341378545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11110011001100111010100111110001;
  origin.bits[1] = 0b01001011001101011000000011010000;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_19) {
  s21_decimal in1, origin;
  // in1 = 12345677.987654345678987654346;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  // origin = -12345677.987654345678987654346;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010001000010101111010011001010;
  origin.bits[1] = 0b11000000010001011101010111110010;
  origin.bits[2] = 0b00100111111001000001101100000000;
  origin.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_20) {
  s21_decimal in1, origin;
  // in1 = 12345677.987654345678987654346;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010001000010101111010011001010;
  in1.bits[1] = 0b11000000010001011101010111110010;
  in1.bits[2] = 0b00100111111001000001101100000000;
  in1.bits[3] = 0b00000000000101010000000000000000;
  // origin = -12345677.987654345678987654346;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010001000010101111010011001010;
  origin.bits[1] = 0b11000000010001011101010111110010;
  origin.bits[2] = 0b00100111111001000001101100000000;
  origin.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_21) {
  s21_decimal in1, origin;
  // in1 = 87654323456.98765456789876530;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10110010000010100010111100110010;
  in1.bits[1] = 0b10011001010111000101110110000000;
  in1.bits[2] = 0b00011100010100101001100001111111;
  in1.bits[3] = 0b00000000000100010000000000000000;
  // origin = -87654323456.98765456789876530;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10110010000010100010111100110010;
  origin.bits[1] = 0b10011001010111000101110110000000;
  origin.bits[2] = 0b00011100010100101001100001111111;
  origin.bits[3] = 0b10000000000100010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_22) {
  s21_decimal in1, origin;
  // in1 = -854764561465456456.9876545679;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000100000001000100000010001111;
  in1.bits[1] = 0b01000000100100100110001100010101;
  in1.bits[2] = 0b00011011100111100111001001011101;
  in1.bits[3] = 0b10000000000010100000000000000000;
  // origin = 854764561465456456.9876545679;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000100000001000100000010001111;
  origin.bits[1] = 0b01000000100100100110001100010101;
  origin.bits[2] = 0b00011011100111100111001001011101;
  origin.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_23) {
  s21_decimal in1, origin;
  // in1 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = -79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_24) {
  s21_decimal in1, origin;
  // in1 = -69.1234567;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00101001001100110110011100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000001110000000000000000;
  // origin = 69.1234567;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101001001100110110011100000111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000001110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_25) {
  s21_decimal in1, origin;
  // in1 = 13436577854.000000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100110011110011110000000000000;
  in1.bits[1] = 0b01100101111110011111000000101100;
  in1.bits[2] = 0b00000000000000000000001011011000;
  in1.bits[3] = 0b00000000000011000000000000000000;
  // origin = -13436577854.000000000000;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100110011110011110000000000000;
  origin.bits[1] = 0b01100101111110011111000000101100;
  origin.bits[2] = 0b00000000000000000000001011011000;
  origin.bits[3] = 0b10000000000011000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_26) {
  s21_decimal in1, origin;
  // in1 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = -79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_27) {
  s21_decimal in1, origin;
  // in1 = 79228162514264337593543950335;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111111111111111111111111111111;
  in1.bits[1] = 0b11111111111111111111111111111111;
  in1.bits[2] = 0b11111111111111111111111111111111;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = -79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_28) {
  s21_decimal in1, origin;
  // in1 = 665464545;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00100111101010100010111011100001;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = -665464545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100111101010100010111011100001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_29) {
  s21_decimal in1, origin;
  // in1 = 2.7986531268974139743;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11111110100100001101100101011111;
  in1.bits[1] = 0b10000100011001000010000111101000;
  in1.bits[2] = 0b00000000000000000000000000000001;
  in1.bits[3] = 0b00000000000100110000000000000000;
  // origin = -2.7986531268974139743;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111110100100001101100101011111;
  origin.bits[1] = 0b10000100011001000010000111101000;
  origin.bits[2] = 0b00000000000000000000000000000001;
  origin.bits[3] = 0b10000000000100110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_30) {
  s21_decimal in1, origin;
  // in1 = -2156878451.8547640000000000;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10010011100100010011000000000000;
  in1.bits[1] = 0b00100110110100100010010100001001;
  in1.bits[2] = 0b00000000000100011101011101011110;
  in1.bits[3] = 0b10000000000100000000000000000000;
  // origin = 2156878451.8547640000000000;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010011100100010011000000000000;
  origin.bits[1] = 0b00100110110100100010010100001001;
  origin.bits[2] = 0b00000000000100011101011101011110;
  origin.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_31) {
  s21_decimal in1, origin;
  // in1 = 0.5456465465486476846545465485;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00001011000011110111000010001101;
  in1.bits[1] = 0b10010110101100000101100101010001;
  in1.bits[2] = 0b00010001101000010111101110000001;
  in1.bits[3] = 0b00000000000111000000000000000000;
  // origin = -0.5456465465486476846545465485;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001011000011110111000010001101;
  origin.bits[1] = 0b10010110101100000101100101010001;
  origin.bits[2] = 0b00010001101000010111101110000001;
  origin.bits[3] = 0b10000000000111000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_32) {
  s21_decimal in1, origin;
  // in1 = -776890.75455454213415678965898;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000010010111101111100010001010;
  in1.bits[1] = 0b01011100000101000111000011011000;
  in1.bits[2] = 0b11111011000001101110010110100011;
  in1.bits[3] = 0b10000000000101110000000000000000;
  // origin = 776890.75455454213415678965898;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000010010111101111100010001010;
  origin.bits[1] = 0b01011100000101000111000011011000;
  origin.bits[2] = 0b11111011000001101110010110100011;
  origin.bits[3] = 0b00000000000101110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_33) {
  s21_decimal in1, origin;
  // in1 = -732123534337593543950335.12;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11000011000110111111111110101000;
  in1.bits[1] = 0b10100001110111010100101100101110;
  in1.bits[2] = 0b00000000001111001000111101010001;
  in1.bits[3] = 0b10000000000000100000000000000000;
  // origin = 732123534337593543950335.12;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000011000110111111111110101000;
  origin.bits[1] = 0b10100001110111010100101100101110;
  origin.bits[2] = 0b00000000001111001000111101010001;
  origin.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_34) {
  s21_decimal in1, origin;
  // in1 = 675432788976.5424354657687;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10111110000100011000010110010111;
  in1.bits[1] = 0b11011001001111010001001011000110;
  in1.bits[2] = 0b00000000000001011001011001001000;
  in1.bits[3] = 0b00000000000011010000000000000000;
  // origin = -675432788976.5424354657687;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111110000100011000010110010111;
  origin.bits[1] = 0b11011001001111010001001011000110;
  origin.bits[2] = 0b00000000000001011001011001001000;
  origin.bits[3] = 0b10000000000011010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_35) {
  s21_decimal in1, origin;
  // in1 = -579895323215489956.67897455465;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100110001001011001001101101001;
  in1.bits[1] = 0b00111000110110101110001010110100;
  in1.bits[2] = 0b10111011010111111101000100011110;
  in1.bits[3] = 0b10000000000010110000000000000000;
  // origin = 579895323215489956.67897455465;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100110001001011001001101101001;
  origin.bits[1] = 0b00111000110110101110001010110100;
  origin.bits[2] = 0b10111011010111111101000100011110;
  origin.bits[3] = 0b00000000000010110000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_36) {
  s21_decimal in1, origin;
  // in1 = 123523543453453453.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01001001011001111111110110000010;
  in1.bits[1] = 0b00010001001001000111000000010101;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = -123523543453453453.0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01001001011001111111110110000010;
  origin.bits[1] = 0b00010001001001000111000000010101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_37) {
  s21_decimal in1, origin;
  // in1 = 31231232456315.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b11100001001010100010000011001110;
  in1.bits[1] = 0b00000000000000010001110000001011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = -31231232456315.0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100001001010100010000011001110;
  origin.bits[1] = 0b00000000000000010001110000001011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_38) {
  s21_decimal in1, origin;
  // in1 = 78987543557678337.5935439503;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00111011110001111000001010001111;
  in1.bits[1] = 0b00101001100010100010010001100011;
  in1.bits[2] = 0b00000010100011010101111010100001;
  in1.bits[3] = 0b00000000000010100000000000000000;
  // origin = -78987543557678337.5935439503;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00111011110001111000001010001111;
  origin.bits[1] = 0b00101001100010100010010001100011;
  origin.bits[2] = 0b00000010100011010101111010100001;
  origin.bits[3] = 0b10000000000010100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_39) {
  s21_decimal in1, origin;
  // in1 = -754567488438.97816770;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b01011010011001011000011011000010;
  in1.bits[1] = 0b00010111001011000011100101001001;
  in1.bits[2] = 0b00000000000000000000000000000100;
  in1.bits[3] = 0b10000000000010000000000000000000;
  // origin = 754567488438.97816770;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01011010011001011000011011000010;
  origin.bits[1] = 0b00010111001011000011100101001001;
  origin.bits[2] = 0b00000000000000000000000000000100;
  origin.bits[3] = 0b00000000000010000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_40) {
  s21_decimal in1, origin;
  // in1 = -2.514475768684753643;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b10101100110010000011001011101011;
  in1.bits[1] = 0b00100010111001010011011001100011;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000100100000000000000000;
  // origin = 2.514475768684753643;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101100110010000011001011101011;
  origin.bits[1] = 0b00100010111001010011011001100011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000100100000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_41) {
  s21_decimal in1, origin;
  // in1 = -0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000010000000000000000;
  // origin = 0.0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_42) {
  s21_decimal in1, origin;
  // in1 = 0.0;
  in1.value_type = s21_NORMAL_VALUE;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000010000000000000000;
  // origin = -0.0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_43) {
  s21_decimal in1, origin;
  // in1 = 0;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_44) {
  s21_decimal in1, origin;
  // in1 = 123143;
  in1.value_type = s21_INFINITY;
  in1.bits[0] = 0b00000000000000011110000100000111;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_45) {
  s21_decimal in1, origin;
  // in1 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_46) {
  s21_decimal in1, origin;
  // in1 = -9876;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000010011010010100;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b10000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_negate_47) {
  s21_decimal in1, origin;
  // in1 = 0;
  in1.value_type = s21_NEGATIVE_INFINITY;
  in1.bits[0] = 0b00000000000000000000000000000000;
  in1.bits[1] = 0b00000000000000000000000000000000;
  in1.bits[2] = 0b00000000000000000000000000000000;
  in1.bits[3] = 0b00000000000000000000000000000000;
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_negate(in1);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_1) {
  s21_decimal in, origin;
  // in = 5.0;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000110010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 5;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_2) {
  s21_decimal in, origin;
  // in = 3.4;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000100010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_3) {
  s21_decimal in, origin;
  // in = 0.0;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_4) {
  s21_decimal in, origin;
  // in = -2.4363463;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000001011100111100000111000111;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_5) {
  s21_decimal in, origin;
  // in = -0.0;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_6) {
  s21_decimal in, origin;
  // in = -0.45;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000101101;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000100000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -1;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_7) {
  s21_decimal in, origin;
  // in = 652.34631;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000011111000110110011011000111;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000001010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 652;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000001010001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_8) {
  s21_decimal in, origin;
  // in = 4.97623323;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00011101101010010010000100011011;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000010000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 4;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_9) {
  s21_decimal in, origin;
  // in = 65658654.59;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000111010110110010011111110011;
  in.bits[1] = 0b00000000000000000000000000000001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 65658654;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000011111010011101111100011110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_10) {
  s21_decimal in, origin;
  // in = -364748.110;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010101101111011001110101001110;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -364749;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_11) {
  s21_decimal in, origin;
  // in = 1.9874565432111;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01101000011010011010001100101111;
  in.bits[1] = 0b00000000000000000001001000010011;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000011010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 1;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_12) {
  s21_decimal in, origin;
  // in = -98.78798789312;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010110010010101110101011000000;
  in.bits[1] = 0b00000000000000000000100011111100;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -99;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000001100011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_13) {
  s21_decimal in, origin;
  // in = 999999999999999999911.3;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10110010001111111111110010001001;
  in.bits[1] = 0b00011001111000001100100110111010;
  in.bits[2] = 0b00000000000000000000001000011110;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 999999999999999999911;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11011110100111111111111110100111;
  origin.bits[1] = 0b00110101110010011010110111000101;
  origin.bits[2] = 0b00000000000000000000000000110110;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_14) {
  s21_decimal in, origin;
  // in = -545454512454545.35265454545645;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000010111000100101101011101101;
  in.bits[1] = 0b11111001111010000010010110101101;
  in.bits[2] = 0b10110000001111101111000010010100;
  in.bits[3] = 0b10000000000011100000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -545454512454546;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000110011101001011101110010010;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_15) {
  s21_decimal in, origin;
  // in = 545454512454545.35265454545645;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000010111000100101101011101101;
  in.bits[1] = 0b11111001111010000010010110101101;
  in.bits[2] = 0b10110000001111101111000010010100;
  in.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 545454512454545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000110011101001011101110010001;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_16) {
  s21_decimal in, origin;
  // in = 7961327845421.879754123131254;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01001110111001000011100101110110;
  in.bits[1] = 0b01001011001101011010000111011001;
  in.bits[2] = 0b00011001101110010111010010111111;
  in.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 7961327845421;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10100100000111100100000000101101;
  origin.bits[1] = 0b00000000000000000000011100111101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_17) {
  s21_decimal in, origin;
  // in = 12345677.987654345678987654346;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10010001000010101111010011001010;
  in.bits[1] = 0b11000000010001011101010111110010;
  in.bits[2] = 0b00100111111001000001101100000000;
  in.bits[3] = 0b00000000000101010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 12345677;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000101111000110000101001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_18) {
  s21_decimal in, origin;
  // in = -12345677.987654345678987654346;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10010001000010101111010011001010;
  in.bits[1] = 0b11000000010001011101010111110010;
  in.bits[2] = 0b00100111111001000001101100000000;
  in.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -12345678;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000101111000110000101001110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_19) {
  s21_decimal in, origin;
  // in = 87654323456.9876545678987653;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010001110011011101000110000101;
  in.bits[1] = 0b11110101101111000110111111000000;
  in.bits[2] = 0b00000010110101010000111100111111;
  in.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 87654323456;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01101000100110101101010100000000;
  origin.bits[1] = 0b00000000000000000000000000010100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_20) {
  s21_decimal in, origin;
  // in = 336565445454313.859865545;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00111110111111000101101111001001;
  in.bits[1] = 0b00111111110101011110000010001011;
  in.bits[2] = 0b00000000000000000100011101000101;
  in.bits[3] = 0b00000000000010010000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 336565445454313;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111111110100011110100111101001;
  origin.bits[1] = 0b00000000000000010011001000011010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_21) {
  s21_decimal in, origin;
  // in = -15456451234534;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10111100010010010000101011100110;
  in.bits[1] = 0b00000000000000000000111000001110;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -15456451234534;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111100010010010000101011100110;
  origin.bits[1] = 0b00000000000000000000111000001110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_22) {
  s21_decimal in, origin;
  // in = -0.42354543545;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11011100100001110000101110111001;
  in.bits[1] = 0b00000000000000000000000000001001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = -1;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_23) {
  s21_decimal in, origin;
  // in = 79228162514264337593543950335;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11111111111111111111111111111111;
  in.bits[1] = 0b11111111111111111111111111111111;
  in.bits[2] = 0b11111111111111111111111111111111;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_24) {
  s21_decimal in, origin;
  // in = 2.7986531268974139743;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11111110100100001101100101011111;
  in.bits[1] = 0b10000100011001000010000111101000;
  in.bits[2] = 0b00000000000000000000000000000001;
  in.bits[3] = 0b00000000000100110000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_25) {
  s21_decimal in, origin;
  // in = 0;
  in.value_type = s21_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 0;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_26) {
  s21_decimal in, origin;
  // in = 0;
  in.value_type = s21_NEGATIVE_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_floor_27) {
  s21_decimal in, origin;
  // in = 0;
  in.value_type = s21_NAN;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_floor(in);
  // origin = 0;
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_1) {
  s21_decimal in, origin;
  // in = 5.0;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000110010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 5;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_2) {
  s21_decimal in, origin;
  // in = 3.4;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000100010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_3) {
  s21_decimal in, origin;
  // in = 0.0;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_4) {
  s21_decimal in, origin;
  // in = -2.4363463;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000001011100111100000111000111;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal result = s21_round(in);
  // origin = -2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_5) {
  s21_decimal in, origin;
  // in = -0.0;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_6) {
  s21_decimal in, origin;
  // in = -0.45;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000101101;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000100000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_7) {
  s21_decimal in, origin;
  // in = 652.34631;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000011111000110110011011000111;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000001010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 652;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000001010001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_8) {
  s21_decimal in, origin;
  // in = 4.97623323;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00011101101010010010000100011011;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000010000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 5;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_9) {
  s21_decimal in, origin;
  // in = 65658654.59;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000111010110110010011111110011;
  in.bits[1] = 0b00000000000000000000000000000001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 65658655;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000011111010011101111100011111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_10) {
  s21_decimal in, origin;
  // in = -364748.110;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010101101111011001110101001110;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = s21_round(in);
  // origin = -364748;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000001011001000011001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_11) {
  s21_decimal in, origin;
  // in = 1.9874565432111;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01101000011010011010001100101111;
  in.bits[1] = 0b00000000000000000001001000010011;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000011010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 2;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_12) {
  s21_decimal in, origin;
  // in = -98.78798789312;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010110010010101110101011000000;
  in.bits[1] = 0b00000000000000000000100011111100;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_round(in);
  // origin = -99;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000001100011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_13) {
  s21_decimal in, origin;
  // in = 999999999999999999911.3;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10110010001111111111110010001001;
  in.bits[1] = 0b00011001111000001100100110111010;
  in.bits[2] = 0b00000000000000000000001000011110;
  in.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 999999999999999999911;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11011110100111111111111110100111;
  origin.bits[1] = 0b00110101110010011010110111000101;
  origin.bits[2] = 0b00000000000000000000000000110110;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_14) {
  s21_decimal in, origin;
  // in = -545454512454545.35265454545645;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000010111000100101101011101101;
  in.bits[1] = 0b11111001111010000010010110101101;
  in.bits[2] = 0b10110000001111101111000010010100;
  in.bits[3] = 0b10000000000011100000000000000000;
  s21_decimal result = s21_round(in);
  // origin = -545454512454545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000110011101001011101110010001;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_15) {
  s21_decimal in, origin;
  // in = 545454512454545.35265454545645;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000010111000100101101011101101;
  in.bits[1] = 0b11111001111010000010010110101101;
  in.bits[2] = 0b10110000001111101111000010010100;
  in.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 545454512454545;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10000110011101001011101110010001;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_16) {
  s21_decimal in, origin;
  // in = 7961327845421.879754123131254;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01001110111001000011100101110110;
  in.bits[1] = 0b01001011001101011010000111011001;
  in.bits[2] = 0b00011001101110010111010010111111;
  in.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 7961327845422;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10100100000111100100000000101110;
  origin.bits[1] = 0b00000000000000000000011100111101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_17) {
  s21_decimal in, origin;
  // in = 12345677.987654345678987654346;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10010001000010101111010011001010;
  in.bits[1] = 0b11000000010001011101010111110010;
  in.bits[2] = 0b00100111111001000001101100000000;
  in.bits[3] = 0b00000000000101010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 12345678;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000101111000110000101001110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_18) {
  s21_decimal in, origin;
  // in = -12345677.987654345678987654346;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10010001000010101111010011001010;
  in.bits[1] = 0b11000000010001011101010111110010;
  in.bits[2] = 0b00100111111001000001101100000000;
  in.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = -12345678;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000101111000110000101001110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_19) {
  s21_decimal in, origin;
  // in = 87654323456.9876545678987653;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010001110011011101000110000101;
  in.bits[1] = 0b11110101101111000110111111000000;
  in.bits[2] = 0b00000010110101010000111100111111;
  in.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 87654323457;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01101000100110101101010100000001;
  origin.bits[1] = 0b00000000000000000000000000010100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_20) {
  s21_decimal in, origin;
  // in = 336565445454313.859865545;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00111110111111000101101111001001;
  in.bits[1] = 0b00111111110101011110000010001011;
  in.bits[2] = 0b00000000000000000100011101000101;
  in.bits[3] = 0b00000000000010010000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 336565445454314;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111111110100011110100111101010;
  origin.bits[1] = 0b00000000000000010011001000011010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_21) {
  s21_decimal in, origin;
  // in = -15456451234534;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10111100010010010000101011100110;
  in.bits[1] = 0b00000000000000000000111000001110;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = -15456451234534;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111100010010010000101011100110;
  origin.bits[1] = 0b00000000000000000000111000001110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_22) {
  s21_decimal in, origin;
  // in = -0.42354543545;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11011100100001110000101110111001;
  in.bits[1] = 0b00000000000000000000000000001001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000010110000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_23) {
  s21_decimal in, origin;
  // in = 79228162514264337593543950335;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11111111111111111111111111111111;
  in.bits[1] = 0b11111111111111111111111111111111;
  in.bits[2] = 0b11111111111111111111111111111111;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 79228162514264337593543950335;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_24) {
  s21_decimal in, origin;
  // in = 2.7986531268974139743;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11111110100100001101100101011111;
  in.bits[1] = 0b10000100011001000010000111101000;
  in.bits[2] = 0b00000000000000000000000000000001;
  in.bits[3] = 0b00000000000100110000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 3;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_25) {
  s21_decimal in, origin;
  // in = 0;
  in.value_type = s21_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_26) {
  s21_decimal in, origin;
  // in = 0;
  in.value_type = s21_NEGATIVE_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_27) {
  s21_decimal in, origin;
  // in = 0;
  in.value_type = s21_NAN;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_round_28) {
  s21_decimal in, origin;
  // in = 2;
  in.value_type = s21_NEGATIVE_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = s21_round(in);
  // origin = 0;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(s21_float_to_dec_1) {
  float in = 1;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_2) {
  float in = -3;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_3) {
  float in = 5.289365;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000010100001011010110010101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000001100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_4) {
  float in = 0.2364752;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000001001000001010101010000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000001110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_5) {
  float in = 7.34865E+13;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11101000101110100111000100000000;
  origin.bits[1] = 0b00000000000000000100001011010101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_6) {
  float in = 8.942386E+16;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100001101111101000100000000000;
  origin.bits[1] = 0b00000001001111011011001010000110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_7) {
  float in = -7.922816E+28;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100000000000000000000000000000;
  origin.bits[1] = 0b10110011100100101011001000011010;
  origin.bits[2] = 0b11111111111111111111111101110111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_8) {
  float in = -9.798956E+15;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00111011100011001011100000000000;
  origin.bits[1] = 0b00000000001000101101000000011001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_9) {
  float in = 7.655466E+08;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00101101101000010101000001101000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_10) {
  float in = -1.988766;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000111100101100010011110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000001100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_11) {
  float in = 1.928318;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000111010110110001111110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000001100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_12) {
  float in = 6.567899E+15;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100110110100001100111000000000;
  origin.bits[1] = 0b00000000000101110101010101111000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_13) {
  float in = -1098765;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000100001100010000001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_14) {
  float in = 9.832476E+17;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010100010000010110000000000000;
  origin.bits[1] = 0b00001101101001010011001001111011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_15) {
  float in = -6.873655E+14;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11000000011101010101011100000000;
  origin.bits[1] = 0b00000000000000100111000100100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_16) {
  float in = 7.678588E+10;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100000110010111000101111000000;
  origin.bits[1] = 0b00000000000000000000000000010001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_17) {
  float in = 9.876654E+13;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100000100010000100101100000000;
  origin.bits[1] = 0b00000000000000000101100111010011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_18) {
  float in = 7.667553E+14;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100001010010010100000100000000;
  origin.bits[1] = 0b00000000000000101011100101011100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_19) {
  float in = -8.769068E+24;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00111101001100000000000000000000;
  origin.bits[1] = 0b00100000111110011110111010000111;
  origin.bits[2] = 0b00000000000001110100000011101100;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_20) {
  float in = 3.243512E+23;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11111111101100000000000000000000;
  origin.bits[1] = 0b00011101001000001111100110110000;
  origin.bits[2] = 0b00000000000000000100010010101111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_21) {
  float in = -1.345256E+17;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001001001100100100000000000000;
  origin.bits[1] = 0b00000001110111011110111001010010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_22) {
  float in = 0;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_23) {
  float in = 0;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_24) {
  float in = 8.978979E+14;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100101010111111100001100000000;
  origin.bits[1] = 0b00000000000000110011000010100010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_25) {
  float in = 9.813097E+18;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111111011100111001000000000000;
  origin.bits[1] = 0b10001000001011110001111110111010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_26) {
  float in = 5.473424E+10;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10111110011010100011100100000000;
  origin.bits[1] = 0b00000000000000000000000000001100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_27) {
  float in = 4.224676E+08;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00011001001011100101100000010000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_28) {
  float in = 9.999999E+27;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00110001011000000000000000000000;
  origin.bits[1] = 0b00001000010110110101010010011011;
  origin.bits[2] = 0b00100000010011111100111000101000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_29) {
  float in = -8.778567E+17;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01111111001100100101100000000000;
  origin.bits[1] = 0b00001100001011101100011000000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_30) {
  float in = 1.111111E+27;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00111110011000000000000000000000;
  origin.bits[1] = 0b00000000111011011011010000010001;
  origin.bits[2] = 0b00000011100101110001011011101000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_31) {
  float in = 0.1111111;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000100001111010001000111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000001110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_32) {
  float in = 9.08325E+20;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11100110101100001000000000000000;
  origin.bits[1] = 0b00111101100010101010011011111100;
  origin.bits[2] = 0b00000000000000000000000000110001;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_33) {
  float in = -5.217636E+12;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b11010011010101110010000100000000;
  origin.bits[1] = 0b00000000000000000000010010111110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_34) {
  float in = -2.364783E+16;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01111010110110111101110000000000;
  origin.bits[1] = 0b00000000010101000000001110010011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_35) {
  float in = -3.497858E+11;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01110000110110111011110101000000;
  origin.bits[1] = 0b00000000000000000000000001010001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_36) {
  float in = 0;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_37) {
  float in = 0;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_38) {
  float in = 8.974568E+15;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01110001101001110001000000000000;
  origin.bits[1] = 0b00000000000111111110001001010010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_39) {
  float in = 2.345679E+25;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10010010100110000000000000000000;
  origin.bits[1] = 0b00100010010001011100000000110100;
  origin.bits[2] = 0b00000000000100110110011100101011;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(s21_float_to_dec_40) {
  float in = 3.14E+28;
  s21_decimal result, origin;
  int s21_error = s21_from_float_to_decimal(in, &result);
  int origin_error = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b10101000000000000000000000000000;
  origin.bits[1] = 0b11001101010111111011101010101011;
  origin.bits[2] = 0b01100101011101010111100010100010;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(float_to_dec_41) {
  float in = 3.14E-38;
  s21_decimal result = DEC_ZERO;
  s21_from_float_to_decimal(in, &result);
  s21_decimal origin = DEC_ZERO;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(float_to_dec_42) {
  float in = 7.922816E+28;
  s21_decimal result = DEC_ZERO;
  s21_from_float_to_decimal(in, &result);
  s21_decimal origin = DEC_ZERO;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00100000000000000000000000000000;
  origin.bits[1] = 0b10110011100100101011001000011010;
  origin.bits[2] = 0b11111111111111111111111101110111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(float_to_dec_43) {
  float in = INFINITY;
  s21_decimal result = DEC_ZERO;
  s21_from_float_to_decimal(in, &result);
  s21_decimal origin = DEC_ZERO;
  origin.value_type = s21_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(float_to_dec_44) {
  float in = -INFINITY;
  s21_decimal result = DEC_ZERO;
  s21_from_float_to_decimal(in, &result);
  s21_decimal origin = DEC_ZERO;
  origin.value_type = s21_NEGATIVE_INFINITY;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST

START_TEST(float_to_dec_45) {
  float in = NAN;
  s21_decimal result = DEC_ZERO;
  s21_from_float_to_decimal(in, &result);
  s21_decimal origin = DEC_ZERO;
  origin.value_type = s21_NAN;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
}
END_TEST
START_TEST(dec_to_float_1) {
  s21_decimal number;
  // decimal: 2.0
  // float: 2
  // int: 1073741824
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000010100;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000010000000000000000;
  int result_int = 1073741824;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_2) {
  s21_decimal number;
  // decimal: -0.8
  // float: -0.8
  // int: -1085485875
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000001000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b10000000000000010000000000000000;
  int result_int = -1085485875;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_3) {
  s21_decimal number;
  // decimal: 0
  // float: 0
  // int: 0
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 0;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_4) {
  s21_decimal number;
  // decimal: 1
  // float: 1
  // int: 1065353216
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000001;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1065353216;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_5) {
  s21_decimal number;
  // decimal: 0.0
  // float: 0
  // int: -2147483648
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b10000000000000010000000000000000;
  int result_int = -2147483648;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_6) {
  s21_decimal number;
  // decimal: -1.75
  // float: -1.75
  // int: -1075838976
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000010101111;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b10000000000000100000000000000000;
  int result_int = -1075838976;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_7) {
  s21_decimal number;
  // decimal: 6521
  // float: 6521
  // int: 1170982912
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000001100101111001;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1170982912;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_8) {
  s21_decimal number;
  // decimal: 4
  // float: 4
  // int: 1082130432
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000100;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1082130432;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_9) {
  s21_decimal number;
  // decimal: 65658654
  // float: 6.565866E+07
  // int: 1283094472
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000011111010011101111100011110;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1283094472;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_10) {
  s21_decimal number;
  // decimal: -364748
  // float: -364748
  // int: -927852160
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000001011001000011001100;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b10000000000000000000000000000000;
  int result_int = -927852160;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_11) {
  s21_decimal number;
  // decimal: 0.003
  // float: 0.003
  // int: 994352038
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000011;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000110000000000000000;
  int result_int = 994352038;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_12) {
  s21_decimal number;
  // decimal: -9878798789
  // float: -9.878798E+09
  // int: -804047712
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b01001100110100101000000111000101;
  number.bits[1] = 0b00000000000000000000000000000010;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b10000000000000000000000000000000;
  int result_int = -804047712;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_13) {
  s21_decimal number;
  // decimal: 9959999999999999999
  // float: 9.96E+18
  // int: 1594505479
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11001010111000111111111111111111;
  number.bits[1] = 0b10001010001110010000011100111010;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1594505479;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_14) {
  s21_decimal number;
  // decimal: 18446744073709551615
  // float: 1.844674E+19
  // int: 1602224128
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111111111111111111111111111111;
  number.bits[1] = 0b11111111111111111111111111111111;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1602224128;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_15) {
  s21_decimal number;
  // decimal: 18445744073709551615.353534
  // float: 1.844574E+19
  // int: 1602223219
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00100001010101100010001010111110;
  number.bits[1] = 0b11001010001101100101001000111010;
  number.bits[2] = 0b00000000000011110100001000001001;
  number.bits[3] = 0b00000000000001100000000000000000;
  int result_int = 1602223219;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_16) {
  s21_decimal number;
  // decimal: -5.4543453434545454535265454546
  // float: -5.454345
  // int: -1062303233
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b10101111010001111000100111010010;
  number.bits[1] = 0b01101110000001111100110010011000;
  number.bits[2] = 0b10110000001111010100100110000111;
  number.bits[3] = 0b10000000000111000000000000000000;
  int result_int = -1062303233;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_17) {
  s21_decimal number;
  // decimal: -5454545545352456454545645464
  // float: -5.454546E+27
  // int: -309526744
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b10001000100000001001111110011000;
  number.bits[1] = 0b10000010011101100000001010011001;
  number.bits[2] = 0b00010001100111111110010011110010;
  number.bits[3] = 0b10000000000000000000000000000000;
  int result_int = -309526744;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_18) {
  s21_decimal number;
  // decimal: 79228162514264337593543950335
  // float: 7.922816E+28
  // int: 1870659584
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111111111111111111111111111111;
  number.bits[1] = 0b11111111111111111111111111111111;
  number.bits[2] = 0b11111111111111111111111111111111;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1870659584;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_19) {
  s21_decimal number;
  // decimal: 1234.5677987654345678987654346
  // float: 1234.568
  // int: 1150964267
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b10010001000010101111010011001010;
  number.bits[1] = 0b11000000010001011101010111110010;
  number.bits[2] = 0b00100111111001000001101100000000;
  number.bits[3] = 0b00000000000110010000000000000000;
  int result_int = 1150964267;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_20) {
  s21_decimal number;
  // decimal: -123458677.98765434567898765435
  // float: -1.234587E+08
  // int: -856982897
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b10111001000000010001100001111011;
  number.bits[1] = 0b01101110100110001001011011101100;
  number.bits[2] = 0b00100111111001000100001100110010;
  number.bits[3] = 0b10000000000101000000000000000000;
  int result_int = -856982897;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_21) {
  s21_decimal number;
  // decimal: 123445677.98765434567898765435
  // float: 1.234457E+08
  // int: 1290499126
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00110100100000010001100001111011;
  number.bits[1] = 0b01001010011100100010011000011110;
  number.bits[2] = 0b00100111111000110010111111101001;
  number.bits[3] = 0b00000000000101000000000000000000;
  int result_int = 1290499126;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_22) {
  s21_decimal number;
  // decimal: -12345677.987654533456789876543
  // float: -1.234568E+07
  // int: -885235378
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111110001111011010111100111111;
  number.bits[1] = 0b11000000010001101000000010111010;
  number.bits[2] = 0b00100111111001000001101100000000;
  number.bits[3] = 0b10000000000101010000000000000000;
  int result_int = -885235378;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_23) {
  s21_decimal number;
  // decimal: 0.0000000000000000001
  // float: 1E-19
  // int: 535567946
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000001;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000100110000000000000000;
  int result_int = 535567946;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_24) {
  s21_decimal number;
  // decimal: 0.0000000000000000000000000001
  // float: 1E-28
  // int: 285050806
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000001;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000111000000000000000000;
  int result_int = 285050806;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_25) {
  s21_decimal number;
  // decimal: 0.0000000000000000000000000000
  // float: 0
  // int: -2147483648
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000000000000000000000000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b10000000000111000000000000000000;
  int result_int = -2147483648;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_26) {
  s21_decimal number;
  // decimal: -79228162514264337593543950335
  // float: -7.922816E+28
  // int: -276824064
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111111111111111111111111111111;
  number.bits[1] = 0b11111111111111111111111111111111;
  number.bits[2] = 0b11111111111111111111111111111111;
  number.bits[3] = 0b10000000000000000000000000000000;
  int result_int = -276824064;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_27) {
  s21_decimal number;
  // decimal: -792.28162514264337593543950335
  // float: -792.2816
  // int: -1002040826
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111111111111111111111111111111;
  number.bits[1] = 0b11111111111111111111111111111111;
  number.bits[2] = 0b11111111111111111111111111111111;
  number.bits[3] = 0b10000000000110100000000000000000;
  int result_int = -1002040826;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_28) {
  s21_decimal number;
  // decimal: -79228162514264337593543950335
  // float: -7.922816E+28
  // int: -276824064
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111111111111111111111111111111;
  number.bits[1] = 0b11111111111111111111111111111111;
  number.bits[2] = 0b11111111111111111111111111111111;
  number.bits[3] = 0b10000000000000000000000000000000;
  int result_int = -276824064;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_29) {
  s21_decimal number;
  // decimal: 2.7986531268974139743
  // float: 2.798653
  // int: 1077091618
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111110100100001101100101011111;
  number.bits[1] = 0b10000100011001000010000111101000;
  number.bits[2] = 0b00000000000000000000000000000001;
  number.bits[3] = 0b00000000000100110000000000000000;
  int result_int = 1077091618;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_30) {
  s21_decimal number;
  // decimal: -9798956154578676.797564534156
  // float: -9.798956E+15
  // int: -636796827
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b01010100010000000011110110001100;
  number.bits[1] = 0b10001011010100100000010101011001;
  number.bits[2] = 0b00011111101010011000000110101101;
  number.bits[3] = 0b10000000000011000000000000000000;
  int result_int = -636796827;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_31) {
  s21_decimal number;
  // decimal: 5.4564654654864768465454654846
  // float: 5.456465
  // int: 1085184861
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b01101110100110100110010101111110;
  number.bits[1] = 0b11100010111000110111110100101010;
  number.bits[2] = 0b10110000010011101101001100001111;
  number.bits[3] = 0b00000000000111000000000000000000;
  int result_int = 1085184861;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_32) {
  s21_decimal number;
  // decimal: -0.67877545545454546589781
  // float: -0.6787754
  // int: -1087519686
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00001000100010000001100001010101;
  number.bits[1] = 0b10100110001011001000101011110001;
  number.bits[2] = 0b00000000000000000000111001011111;
  number.bits[3] = 0b10000000000101110000000000000000;
  int result_int = -1087519686;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_33) {
  s21_decimal number;
  // decimal: -79228162514264337593543950330
  // float: -7.922816E+28
  // int: -276824064
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b11111111111111111111111111111010;
  number.bits[1] = 0b11111111111111111111111111111111;
  number.bits[2] = 0b11111111111111111111111111111111;
  number.bits[3] = 0b10000000000000000000000000000000;
  int result_int = -276824064;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_34) {
  s21_decimal number;
  // decimal: 32323465785678987654
  // float: 3.232346E+19
  // int: 1608534530
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000111000111000000110000110;
  number.bits[1] = 0b11000000100101000000010011100000;
  number.bits[2] = 0b00000000000000000000000000000001;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_int = 1608534530;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_35) {
  s21_decimal number;
  // decimal: -784510454.7989898652154545652
  // float: -7.845105E+08
  // int: -834991432
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00110101111110110100010111110100;
  number.bits[1] = 0b10110111000111111011101111011100;
  number.bits[2] = 0b00011001010110010101000110000001;
  number.bits[3] = 0b10000000000100110000000000000000;
  int result_int = -834991432;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_36) {
  s21_decimal number;
  // decimal: 0.324524
  // float: 0.324524
  // int: 1051076610
  number.value_type = s21_NORMAL_VALUE;
  number.bits[0] = 0b00000000000001001111001110101100;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000001100000000000000000;
  int result_int = 1051076610;
  int result_error = 0;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  int s21_int = *(int *)&s21_float;
  ck_assert_int_eq(result_int, s21_int);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_37) {
  s21_decimal number;
  // decimal: 0
  // float: 0
  // int: 0
  number.value_type = s21_INFINITY;
  number.bits[0] = 0b00000000000000000000000000000000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 1;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_38) {
  s21_decimal number;
  // decimal: 0
  // float: 0
  // int: 0
  number.value_type = s21_NEGATIVE_INFINITY;
  number.bits[0] = 0b00000000000000000000000000000000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 1;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(dec_to_float_39) {
  s21_decimal number;
  // decimal: 0
  // float: 0
  // int: 0
  number.value_type = s21_NAN;
  number.bits[0] = 0b00000000000000000000000000000000;
  number.bits[1] = 0b00000000000000000000000000000000;
  number.bits[2] = 0b00000000000000000000000000000000;
  number.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 1;
  float s21_float;
  int s21_error = s21_from_decimal_to_float(number, &s21_float);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST
START_TEST(int_to_dec_1) {
  s21_decimal result, origin;
  int in = 1;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_2) {
  s21_decimal result, origin;
  int in = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_3) {
  s21_decimal result, origin;
  int in = -1;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_4) {
  s21_decimal result, origin;
  int in = 2147483647;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01111111111111111111111111111111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_5) {
  s21_decimal result, origin;
  int in = -2147483647;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b01111111111111111111111111111111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_6) {
  s21_decimal result, origin;
  int in = -12345;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000011000000111001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_7) {
  s21_decimal result, origin;
  int in = -12345;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000011000000111001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_8) {
  s21_decimal result, origin;
  int in = 0;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_9) {
  s21_decimal result, origin;
  int in = 45678;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000001011001001101110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_10) {
  s21_decimal result, origin;
  int in = -45678;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000001011001001101110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_11) {
  s21_decimal result, origin;
  int in = 5555555;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000010101001100010101100011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_12) {
  s21_decimal result, origin;
  int in = -5555555;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000010101001100010101100011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_13) {
  s21_decimal result, origin;
  int in = 127;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000001111111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_14) {
  s21_decimal result, origin;
  int in = -127;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000000001111111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_15) {
  s21_decimal result, origin;
  int in = 34567898;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000010000011110111011011011010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_16) {
  s21_decimal result, origin;
  int in = -34567898;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000010000011110111011011011010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_17) {
  s21_decimal result, origin;
  int in = 999;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000001111100111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_18) {
  s21_decimal result, origin;
  int in = -999;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000000000000000001111100111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_19) {
  s21_decimal result, origin;
  int in = -3254754;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000001100011010100111100010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_20) {
  s21_decimal result, origin;
  int in = 3436425;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00000000001101000110111110001001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST

START_TEST(int_to_dec_21) {
  s21_decimal result, origin;
  int in = 222222222;
  origin.value_type = s21_NORMAL_VALUE;
  origin.bits[0] = 0b00001101001111101101011110001110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int result_error = 0;
  int s21_error = s21_from_int_to_decimal(in, &result);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.value_type, result.value_type);
  ck_assert_int_eq(result_error, s21_error);
}
END_TEST
START_TEST(dec_to_int_1) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000110010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int origin = 5;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_2) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000100010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int origin = 3;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_3) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_4) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000001011100111100000111000111;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000001110000000000000000;
  int result = 0;
  int origin = -2;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_5) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000010000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_6) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000000000000000000000000101101;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000100000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_7) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00000011111000110110011011000111;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000001010000000000000000;
  int result = 0;
  int origin = 652;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_8) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00011101101010010010000100011011;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000010000000000000000000;
  int result = 0;
  int origin = 4;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_9) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10000111010110110010011111110011;
  in.bits[1] = 0b00000000000000000000000000000001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000100000000000000000;
  int result = 0;
  int origin = 65658654;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_10) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010101101111011001110101001110;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000110000000000000000;
  int result = 0;
  int origin = -364748;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_11) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01101000011010011010001100101111;
  in.bits[1] = 0b00000000000000000001001000010011;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000011010000000000000000;
  int result = 0;
  int origin = 1;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_12) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00010110010010101110101011000000;
  in.bits[1] = 0b00000000000000000000100011111100;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000010110000000000000000;
  int result = 0;
  int origin = -98;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_13) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b00111011100110101100100111111001;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int origin = 99999999;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_14) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11001010011010010001110011000010;
  in.bits[1] = 0b10011001110101001010110100100110;
  in.bits[2] = 0b10110000001111100010111010011101;
  in.bits[3] = 0b10000000000101110000000000000000;
  int result = 0;
  int origin = -545445;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_15) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11101010011100001110100101000111;
  in.bits[1] = 0b10100010011001110000111100001010;
  in.bits[2] = 0b10110000001111101111000100010000;
  in.bits[3] = 0b00000000000101100000000000000000;
  int result = 0;
  int origin = 5454545;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_16) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11101010001011100110110001010100;
  in.bits[1] = 0b00100111000110111110101011111001;
  in.bits[2] = 0b00011001101111000001110101101001;
  in.bits[3] = 0b00000000000101000000000000000000;
  int result = 0;
  int origin = 79645421;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_17) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10010001000010101111010011001010;
  in.bits[1] = 0b11000000010001011101010111110010;
  in.bits[2] = 0b00100111111001000001101100000000;
  in.bits[3] = 0b00000000000101010000000000000000;
  int result = 0;
  int origin = 12345677;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_18) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10010001000010101111010011001010;
  in.bits[1] = 0b11000000010001011101010111110010;
  in.bits[2] = 0b00100111111001000001101100000000;
  in.bits[3] = 0b10000000000101010000000000000000;
  int result = 0;
  int origin = -12345677;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_19) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10011100101100011101000110000101;
  in.bits[1] = 0b01100001100101011101011101110110;
  in.bits[2] = 0b00000000000000000000000011101010;
  in.bits[3] = 0b00000000000100000000000000000000;
  int result = 0;
  int origin = 432356;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_20) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01100001011111010111001111001001;
  in.bits[1] = 0b00000000100111100100000111010001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000010010000000000000000;
  int result = 0;
  int origin = 44545413;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_21) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b01011100000110001011011001101010;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000000000000000000000000;
  int result = 0;
  int origin = -1545123434;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_22) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11011100100001110000101110111001;
  in.bits[1] = 0b00000000000000000000000000001001;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b10000000000010110000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_23) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b10101001101110110110011111111111;
  in.bits[1] = 0b00001010111111101100000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000011000000000000000000;
  int result = 0;
  int origin = 792281;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_24) {
  s21_decimal in;
  in.value_type = s21_NORMAL_VALUE;
  in.bits[0] = 0b11111110100100001101100101011111;
  in.bits[1] = 0b10000100011001000010000111101000;
  in.bits[2] = 0b00000000000000000000000000000001;
  in.bits[3] = 0b00000000000100110000000000000000;
  int result = 0;
  int origin = 2;
  int origin_error = 0;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_25) {
  s21_decimal in;
  in.value_type = s21_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 1;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_26) {
  s21_decimal in;
  in.value_type = s21_NEGATIVE_INFINITY;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 1;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

START_TEST(dec_to_int_27) {
  s21_decimal in;
  in.value_type = s21_NAN;
  in.bits[0] = 0b00000000000000000000000000000000;
  in.bits[1] = 0b00000000000000000000000000000000;
  in.bits[2] = 0b00000000000000000000000000000000;
  in.bits[3] = 0b00000000000000000000000000000000;
  int result = 0;
  int origin = 0;
  int origin_error = 1;
  int s21_error = s21_from_decimal_to_int(in, &result);
  ck_assert_int_eq(origin, result);
  ck_assert_int_eq(origin_error, s21_error);
}
END_TEST

Suite *AriphmeticFunctions() {
  Suite *s1 = suite_create("AriphmeticFunctions");
  TCase *tc_1 = tcase_create("s21_add");
  TCase *tc_2 = tcase_create("s21_sub");
  TCase *tc_3 = tcase_create("s21_mul");
  TCase *tc_4 = tcase_create("s21_div");
  TCase *tc_5 = tcase_create("s21_mod");

  suite_add_tcase(s1, tc_1);
  tcase_add_test(tc_1, s21_add_1);
  tcase_add_test(tc_1, s21_add_2);
  tcase_add_test(tc_1, s21_add_3);
  tcase_add_test(tc_1, s21_add_4);
  tcase_add_test(tc_1, s21_add_5);
  tcase_add_test(tc_1, s21_add_6);
  tcase_add_test(tc_1, s21_add_7);
  tcase_add_test(tc_1, s21_add_8);
  tcase_add_test(tc_1, s21_add_9);
  tcase_add_test(tc_1, s21_add_10);
  tcase_add_test(tc_1, s21_add_11);
  tcase_add_test(tc_1, s21_add_12);
  tcase_add_test(tc_1, s21_add_13);
  tcase_add_test(tc_1, s21_add_14);
  tcase_add_test(tc_1, s21_add_15);
  tcase_add_test(tc_1, s21_add_16);
  tcase_add_test(tc_1, s21_add_17);
  tcase_add_test(tc_1, s21_add_18);
  tcase_add_test(tc_1, s21_add_19);
  tcase_add_test(tc_1, s21_add_20);
  tcase_add_test(tc_1, s21_add_21);
  tcase_add_test(tc_1, s21_add_22);
  tcase_add_test(tc_1, s21_add_23);
  tcase_add_test(tc_1, s21_add_24);
  tcase_add_test(tc_1, s21_add_25);
  tcase_add_test(tc_1, s21_add_26);
  tcase_add_test(tc_1, s21_add_27);
  tcase_add_test(tc_1, s21_add_28);
  tcase_add_test(tc_1, s21_add_29);
  tcase_add_test(tc_1, s21_add_30);
  tcase_add_test(tc_1, s21_add_31);
  tcase_add_test(tc_1, s21_add_32);
  tcase_add_test(tc_1, s21_add_33);
  tcase_add_test(tc_1, s21_add_34);
  tcase_add_test(tc_1, s21_add_35);
  tcase_add_test(tc_1, s21_add_36);
  tcase_add_test(tc_1, s21_add_37);
  tcase_add_test(tc_1, s21_add_38);
  tcase_add_test(tc_1, s21_add_39);
  tcase_add_test(tc_1, s21_add_40);
  tcase_add_test(tc_1, s21_add_41);
  tcase_add_test(tc_1, s21_add_42);
  tcase_add_test(tc_1, s21_add_43);
  tcase_add_test(tc_1, s21_add_44);
  tcase_add_test(tc_1, s21_add_45);
  tcase_add_test(tc_1, s21_add_46);
  tcase_add_test(tc_1, s21_add_47);
  tcase_add_test(tc_1, s21_add_48);
  tcase_add_test(tc_1, s21_add_49);
  tcase_add_test(tc_1, s21_add_50);
  tcase_add_test(tc_1, s21_add_51);
  tcase_add_test(tc_1, s21_add_52);

  suite_add_tcase(s1, tc_2);
  tcase_add_test(tc_2, s21_sub_1);
  tcase_add_test(tc_2, s21_sub_2);
  tcase_add_test(tc_2, s21_sub_3);
  tcase_add_test(tc_2, s21_sub_4);
  tcase_add_test(tc_2, s21_sub_5);
  tcase_add_test(tc_2, s21_sub_6);
  tcase_add_test(tc_2, s21_sub_7);
  tcase_add_test(tc_2, s21_sub_8);
  tcase_add_test(tc_2, s21_sub_9);
  tcase_add_test(tc_2, s21_sub_10);
  tcase_add_test(tc_2, s21_sub_11);
  tcase_add_test(tc_2, s21_sub_12);
  tcase_add_test(tc_2, s21_sub_13);
  tcase_add_test(tc_2, s21_sub_14);
  tcase_add_test(tc_2, s21_sub_15);
  tcase_add_test(tc_2, s21_sub_16);
  tcase_add_test(tc_2, s21_sub_17);
  tcase_add_test(tc_2, s21_sub_18);
  tcase_add_test(tc_2, s21_sub_19);
  tcase_add_test(tc_2, s21_sub_20);
  tcase_add_test(tc_2, s21_sub_21);
  tcase_add_test(tc_2, s21_sub_22);
  tcase_add_test(tc_2, s21_sub_23);
  tcase_add_test(tc_2, s21_sub_24);
  tcase_add_test(tc_2, s21_sub_25);
  tcase_add_test(tc_2, s21_sub_26);
  tcase_add_test(tc_2, s21_sub_27);
  tcase_add_test(tc_2, s21_sub_28);
  tcase_add_test(tc_2, s21_sub_29);
  tcase_add_test(tc_2, s21_sub_30);
  tcase_add_test(tc_2, s21_sub_31);
  tcase_add_test(tc_2, s21_sub_32);
  tcase_add_test(tc_2, s21_sub_33);
  tcase_add_test(tc_2, s21_sub_34);
  tcase_add_test(tc_2, s21_sub_35);
  tcase_add_test(tc_2, s21_sub_36);
  tcase_add_test(tc_2, s21_sub_37);
  tcase_add_test(tc_2, s21_sub_38);
  tcase_add_test(tc_2, s21_sub_39);
  tcase_add_test(tc_2, s21_sub_40);
  tcase_add_test(tc_2, s21_sub_41);
  tcase_add_test(tc_2, s21_sub_42);
  tcase_add_test(tc_2, s21_sub_43);
  tcase_add_test(tc_2, s21_sub_44);
  tcase_add_test(tc_2, s21_sub_45);
  tcase_add_test(tc_2, s21_sub_46);
  tcase_add_test(tc_2, s21_sub_47);
  tcase_add_test(tc_2, s21_sub_48);
  tcase_add_test(tc_2, s21_sub_49);
  tcase_add_test(tc_2, s21_sub_50);
  tcase_add_test(tc_2, s21_sub_51);
  tcase_add_test(tc_2, s21_sub_52);
  tcase_add_test(tc_2, s21_sub_53);

  suite_add_tcase(s1, tc_3);
  tcase_add_test(tc_3, s21_mul_1);
  tcase_add_test(tc_3, s21_mul_2);
  tcase_add_test(tc_3, s21_mul_3);
  tcase_add_test(tc_3, s21_mul_4);
  tcase_add_test(tc_3, s21_mul_5);
  tcase_add_test(tc_3, s21_mul_6);
  tcase_add_test(tc_3, s21_mul_7);
  tcase_add_test(tc_3, s21_mul_8);
  tcase_add_test(tc_3, s21_mul_9);
  tcase_add_test(tc_3, s21_mul_10);
  tcase_add_test(tc_3, s21_mul_11);
  tcase_add_test(tc_3, s21_mul_12);
  tcase_add_test(tc_3, s21_mul_13);
  tcase_add_test(tc_3, s21_mul_14);
  tcase_add_test(tc_3, s21_mul_15);
  tcase_add_test(tc_3, s21_mul_16);
  tcase_add_test(tc_3, s21_mul_17);
  tcase_add_test(tc_3, s21_mul_18);
  tcase_add_test(tc_3, s21_mul_19);
  tcase_add_test(tc_3, s21_mul_20);
  tcase_add_test(tc_3, s21_mul_21);
  tcase_add_test(tc_3, s21_mul_22);
  tcase_add_test(tc_3, s21_mul_23);
  tcase_add_test(tc_3, s21_mul_24);
  tcase_add_test(tc_3, s21_mul_25);
  tcase_add_test(tc_3, s21_mul_26);
  tcase_add_test(tc_3, s21_mul_27);
  tcase_add_test(tc_3, s21_mul_28);
  tcase_add_test(tc_3, s21_mul_29);
  tcase_add_test(tc_3, s21_mul_30);
  tcase_add_test(tc_3, s21_mul_31);
  tcase_add_test(tc_3, s21_mul_32);
  tcase_add_test(tc_3, s21_mul_33);
  tcase_add_test(tc_3, s21_mul_34);
  tcase_add_test(tc_3, s21_mul_35);
  tcase_add_test(tc_3, s21_mul_36);
  tcase_add_test(tc_3, s21_mul_37);
  tcase_add_test(tc_3, s21_mul_38);
  tcase_add_test(tc_3, s21_mul_39);
  tcase_add_test(tc_3, s21_mul_40);
  tcase_add_test(tc_3, s21_mul_41);
  tcase_add_test(tc_3, s21_mul_42);
  tcase_add_test(tc_3, s21_mul_43);
  tcase_add_test(tc_3, s21_mul_44);
  tcase_add_test(tc_3, s21_mul_45);
  tcase_add_test(tc_3, s21_mul_46);
  tcase_add_test(tc_3, s21_mul_47);
  tcase_add_test(tc_3, s21_mul_48);
  tcase_add_test(tc_3, s21_mul_49);
  tcase_add_test(tc_3, s21_mul_50);
  tcase_add_test(tc_3, s21_mul_51);

  suite_add_tcase(s1, tc_4);
  tcase_add_test(tc_4, s21_div_1);
  tcase_add_test(tc_4, s21_div_2);
  tcase_add_test(tc_4, s21_div_3);
  tcase_add_test(tc_4, s21_div_4);
  tcase_add_test(tc_4, s21_div_5);
  tcase_add_test(tc_4, s21_div_6);
  tcase_add_test(tc_4, s21_div_7);
  tcase_add_test(tc_4, s21_div_8);
  tcase_add_test(tc_4, s21_div_9);
  tcase_add_test(tc_4, s21_div_10);
  tcase_add_test(tc_4, s21_div_11);
  tcase_add_test(tc_4, s21_div_12);
  tcase_add_test(tc_4, s21_div_13);
  tcase_add_test(tc_4, s21_div_14);
  tcase_add_test(tc_4, s21_div_15);
  tcase_add_test(tc_4, s21_div_16);
  tcase_add_test(tc_4, s21_div_17);
  tcase_add_test(tc_4, s21_div_18);
  tcase_add_test(tc_4, s21_div_19);
  tcase_add_test(tc_4, s21_div_20);
  tcase_add_test(tc_4, s21_div_21);
  tcase_add_test(tc_4, s21_div_22);
  tcase_add_test(tc_4, s21_div_23);
  tcase_add_test(tc_4, s21_div_24);
  tcase_add_test(tc_4, s21_div_25);
  tcase_add_test(tc_4, s21_div_26);
  tcase_add_test(tc_4, s21_div_27);
  tcase_add_test(tc_4, s21_div_28);
  tcase_add_test(tc_4, s21_div_29);
  tcase_add_test(tc_4, s21_div_30);
  tcase_add_test(tc_4, s21_div_31);
  tcase_add_test(tc_4, s21_div_32);
  tcase_add_test(tc_4, s21_div_33);
  tcase_add_test(tc_4, s21_div_34);
  tcase_add_test(tc_4, s21_div_35);
  tcase_add_test(tc_4, s21_div_36);
  tcase_add_test(tc_4, s21_div_37);
  tcase_add_test(tc_4, s21_div_38);
  tcase_add_test(tc_4, s21_div_39);
  tcase_add_test(tc_4, s21_div_40);
  tcase_add_test(tc_4, s21_div_41);
  tcase_add_test(tc_4, s21_div_42);
  tcase_add_test(tc_4, s21_div_43);
  tcase_add_test(tc_4, s21_div_44);
  tcase_add_test(tc_4, s21_div_45);
  tcase_add_test(tc_4, s21_div_46);
  tcase_add_test(tc_4, s21_div_47);
  tcase_add_test(tc_4, s21_div_48);
  tcase_add_test(tc_4, s21_div_49);
  tcase_add_test(tc_4, s21_div_50);
  tcase_add_test(tc_4, s21_div_51);
  tcase_add_test(tc_4, s21_div_52);
  tcase_add_test(tc_4, s21_div_53);
  tcase_add_test(tc_4, s21_div_54);
  tcase_add_test(tc_4, s21_div_55);
  tcase_add_test(tc_4, s21_div_56);
  tcase_add_test(tc_4, s21_div_57);
  tcase_add_test(tc_4, s21_div_58);
  tcase_add_test(tc_4, s21_div_59);
  tcase_add_test(tc_4, s21_div_60);

  suite_add_tcase(s1, tc_5);
  tcase_add_test(tc_5, s21_mod_1);
  tcase_add_test(tc_5, s21_mod_2);
  tcase_add_test(tc_5, s21_mod_3);
  tcase_add_test(tc_5, s21_mod_4);
  tcase_add_test(tc_5, s21_mod_5);
  tcase_add_test(tc_5, s21_mod_6);
  tcase_add_test(tc_5, s21_mod_7);
  tcase_add_test(tc_5, s21_mod_8);
  tcase_add_test(tc_5, s21_mod_9);
  tcase_add_test(tc_5, s21_mod_10);
  tcase_add_test(tc_5, s21_mod_11);
  tcase_add_test(tc_5, s21_mod_12);
  tcase_add_test(tc_5, s21_mod_13);
  tcase_add_test(tc_5, s21_mod_14);
  tcase_add_test(tc_5, s21_mod_15);
  tcase_add_test(tc_5, s21_mod_16);
  tcase_add_test(tc_5, s21_mod_17);
  tcase_add_test(tc_5, s21_mod_18);
  tcase_add_test(tc_5, s21_mod_19);
  tcase_add_test(tc_5, s21_mod_20);
  tcase_add_test(tc_5, s21_mod_21);
  tcase_add_test(tc_5, s21_mod_22);
  tcase_add_test(tc_5, s21_mod_23);
  tcase_add_test(tc_5, s21_mod_24);
  tcase_add_test(tc_5, s21_mod_25);
  tcase_add_test(tc_5, s21_mod_26);
  tcase_add_test(tc_5, s21_mod_27);
  tcase_add_test(tc_5, s21_mod_28);
  tcase_add_test(tc_5, s21_mod_29);
  tcase_add_test(tc_5, s21_mod_30);
  tcase_add_test(tc_5, s21_mod_31);
  tcase_add_test(tc_5, s21_mod_32);
  tcase_add_test(tc_5, s21_mod_33);
  tcase_add_test(tc_5, s21_mod_34);
  tcase_add_test(tc_5, s21_mod_35);
  tcase_add_test(tc_5, s21_mod_36);
  tcase_add_test(tc_5, s21_mod_37);
  tcase_add_test(tc_5, s21_mod_38);
  tcase_add_test(tc_5, s21_mod_39);
  tcase_add_test(tc_5, s21_mod_40);
  tcase_add_test(tc_5, s21_mod_41);
  tcase_add_test(tc_5, s21_mod_42);
  tcase_add_test(tc_5, s21_mod_43);
  tcase_add_test(tc_5, s21_mod_44);
  tcase_add_test(tc_5, s21_mod_45);
  tcase_add_test(tc_5, s21_mod_46);
  tcase_add_test(tc_5, s21_mod_47);
  tcase_add_test(tc_5, s21_mod_48);
  tcase_add_test(tc_5, s21_mod_49);
  tcase_add_test(tc_5, s21_mod_50);
  tcase_add_test(tc_5, s21_mod_51);
  tcase_add_test(tc_5, s21_mod_52);
  tcase_add_test(tc_5, s21_mod_53);
  tcase_add_test(tc_5, s21_mod_54);
  tcase_add_test(tc_5, s21_mod_55);
  tcase_add_test(tc_5, s21_mod_56);
  tcase_add_test(tc_5, s21_mod_57);
  tcase_add_test(tc_5, s21_mod_58);
  tcase_add_test(tc_5, s21_mod_59);
  tcase_add_test(tc_5, s21_mod_60);
  tcase_add_test(tc_5, s21_mod_61);
  tcase_add_test(tc_5, s21_mod_62);
  tcase_add_test(tc_5, s21_mod_63);
  tcase_add_test(tc_5, s21_mod_64);
  tcase_add_test(tc_5, s21_mod_65);
  tcase_add_test(tc_5, s21_mod_66);
  tcase_add_test(tc_5, s21_mod_67);
  tcase_add_test(tc_5, s21_mod_68);
  return s1;
}

Suite *CompareFunctions() {
  Suite *s1 = suite_create("CompareFunctions");
  TCase *tc_6 = tcase_create("s21_equal");
  TCase *tc_7 = tcase_create("s21_not_equal");
  TCase *tc_8 = tcase_create("s21_less");
  TCase *tc_9 = tcase_create("s21_less_or_equal");
  TCase *tc_10 = tcase_create("s21_greater");
  TCase *tc_11 = tcase_create("s21_greater_or_equal");

  suite_add_tcase(s1, tc_6);
  tcase_add_test(tc_6, s21_equal_1);
  tcase_add_test(tc_6, s21_equal_2);
  tcase_add_test(tc_6, s21_equal_3);
  tcase_add_test(tc_6, s21_equal_4);
  tcase_add_test(tc_6, s21_equal_5);
  tcase_add_test(tc_6, s21_equal_6);
  tcase_add_test(tc_6, s21_equal_7);
  tcase_add_test(tc_6, s21_equal_8);
  tcase_add_test(tc_6, s21_equal_9);
  tcase_add_test(tc_6, s21_equal_10);
  tcase_add_test(tc_6, s21_equal_11);
  tcase_add_test(tc_6, s21_equal_12);
  tcase_add_test(tc_6, s21_equal_13);
  tcase_add_test(tc_6, s21_equal_14);
  tcase_add_test(tc_6, s21_equal_15);
  tcase_add_test(tc_6, s21_equal_16);
  tcase_add_test(tc_6, s21_equal_17);
  tcase_add_test(tc_6, s21_equal_18);
  tcase_add_test(tc_6, s21_equal_19);
  tcase_add_test(tc_6, s21_equal_20);
  tcase_add_test(tc_6, s21_equal_21);
  tcase_add_test(tc_6, s21_equal_22);
  tcase_add_test(tc_6, s21_equal_23);
  tcase_add_test(tc_6, s21_equal_24);
  tcase_add_test(tc_6, s21_equal_25);
  tcase_add_test(tc_6, s21_equal_26);
  tcase_add_test(tc_6, s21_equal_27);
  tcase_add_test(tc_6, s21_equal_28);
  tcase_add_test(tc_6, s21_equal_29);
  tcase_add_test(tc_6, s21_equal_30);
  tcase_add_test(tc_6, s21_equal_31);
  tcase_add_test(tc_6, s21_equal_32);
  tcase_add_test(tc_6, s21_equal_33);
  tcase_add_test(tc_6, s21_equal_34);
  tcase_add_test(tc_6, s21_equal_35);
  tcase_add_test(tc_6, s21_equal_36);
  tcase_add_test(tc_6, s21_equal_37);
  tcase_add_test(tc_6, s21_equal_38);
  tcase_add_test(tc_6, s21_equal_39);
  tcase_add_test(tc_6, s21_equal_40);
  tcase_add_test(tc_6, s21_equal_41);
  tcase_add_test(tc_6, s21_equal_42);
  tcase_add_test(tc_6, s21_equal_43);
  tcase_add_test(tc_6, s21_equal_44);
  tcase_add_test(tc_6, s21_equal_45);
  tcase_add_test(tc_6, s21_equal_46);
  tcase_add_test(tc_6, s21_equal_47);
  tcase_add_test(tc_6, s21_equal_48);
  tcase_add_test(tc_6, s21_equal_49);
  tcase_add_test(tc_6, s21_equal_50);

  suite_add_tcase(s1, tc_7);
  tcase_add_test(tc_7, s21_not_equal_1);
  tcase_add_test(tc_7, s21_not_equal_2);
  tcase_add_test(tc_7, s21_not_equal_3);
  tcase_add_test(tc_7, s21_not_equal_4);
  tcase_add_test(tc_7, s21_not_equal_5);
  tcase_add_test(tc_7, s21_not_equal_6);
  tcase_add_test(tc_7, s21_not_equal_7);
  tcase_add_test(tc_7, s21_not_equal_8);
  tcase_add_test(tc_7, s21_not_equal_9);
  tcase_add_test(tc_7, s21_not_equal_10);
  tcase_add_test(tc_7, s21_not_equal_11);
  tcase_add_test(tc_7, s21_not_equal_12);
  tcase_add_test(tc_7, s21_not_equal_13);
  tcase_add_test(tc_7, s21_not_equal_14);
  tcase_add_test(tc_7, s21_not_equal_15);
  tcase_add_test(tc_7, s21_not_equal_16);
  tcase_add_test(tc_7, s21_not_equal_17);
  tcase_add_test(tc_7, s21_not_equal_18);
  tcase_add_test(tc_7, s21_not_equal_19);
  tcase_add_test(tc_7, s21_not_equal_20);
  tcase_add_test(tc_7, s21_not_equal_21);
  tcase_add_test(tc_7, s21_not_equal_22);
  tcase_add_test(tc_7, s21_not_equal_23);
  tcase_add_test(tc_7, s21_not_equal_24);
  tcase_add_test(tc_7, s21_not_equal_25);
  tcase_add_test(tc_7, s21_not_equal_26);
  tcase_add_test(tc_7, s21_not_equal_27);
  tcase_add_test(tc_7, s21_not_equal_28);
  tcase_add_test(tc_7, s21_not_equal_29);
  tcase_add_test(tc_7, s21_not_equal_30);
  tcase_add_test(tc_7, s21_not_equal_31);
  tcase_add_test(tc_7, s21_not_equal_32);
  tcase_add_test(tc_7, s21_not_equal_33);
  tcase_add_test(tc_7, s21_not_equal_34);
  tcase_add_test(tc_7, s21_not_equal_35);
  tcase_add_test(tc_7, s21_not_equal_36);
  tcase_add_test(tc_7, s21_not_equal_37);
  tcase_add_test(tc_7, s21_not_equal_38);
  tcase_add_test(tc_7, s21_not_equal_39);
  tcase_add_test(tc_7, s21_not_equal_40);
  tcase_add_test(tc_7, s21_not_equal_41);
  tcase_add_test(tc_7, s21_not_equal_42);
  tcase_add_test(tc_7, s21_not_equal_43);
  tcase_add_test(tc_7, s21_not_equal_44);
  tcase_add_test(tc_7, s21_not_equal_45);
  tcase_add_test(tc_7, s21_not_equal_46);
  tcase_add_test(tc_7, s21_not_equal_47);
  tcase_add_test(tc_7, s21_not_equal_48);
  tcase_add_test(tc_7, s21_not_equal_49);
  tcase_add_test(tc_7, s21_not_equal_50);

  suite_add_tcase(s1, tc_8);
  tcase_add_test(tc_8, s21_less_1);
  tcase_add_test(tc_8, s21_less_2);
  tcase_add_test(tc_8, s21_less_3);
  tcase_add_test(tc_8, s21_less_4);
  tcase_add_test(tc_8, s21_less_5);
  tcase_add_test(tc_8, s21_less_6);
  tcase_add_test(tc_8, s21_less_7);
  tcase_add_test(tc_8, s21_less_8);
  tcase_add_test(tc_8, s21_less_9);
  tcase_add_test(tc_8, s21_less_10);
  tcase_add_test(tc_8, s21_less_11);
  tcase_add_test(tc_8, s21_less_12);
  tcase_add_test(tc_8, s21_less_13);
  tcase_add_test(tc_8, s21_less_14);
  tcase_add_test(tc_8, s21_less_15);
  tcase_add_test(tc_8, s21_less_16);
  tcase_add_test(tc_8, s21_less_17);
  tcase_add_test(tc_8, s21_less_18);
  tcase_add_test(tc_8, s21_less_19);
  tcase_add_test(tc_8, s21_less_20);
  tcase_add_test(tc_8, s21_less_21);
  tcase_add_test(tc_8, s21_less_22);
  tcase_add_test(tc_8, s21_less_23);
  tcase_add_test(tc_8, s21_less_24);
  tcase_add_test(tc_8, s21_less_25);
  tcase_add_test(tc_8, s21_less_26);
  tcase_add_test(tc_8, s21_less_27);
  tcase_add_test(tc_8, s21_less_28);
  tcase_add_test(tc_8, s21_less_29);
  tcase_add_test(tc_8, s21_less_30);
  tcase_add_test(tc_8, s21_less_31);
  tcase_add_test(tc_8, s21_less_32);
  tcase_add_test(tc_8, s21_less_33);
  tcase_add_test(tc_8, s21_less_34);
  tcase_add_test(tc_8, s21_less_35);
  tcase_add_test(tc_8, s21_less_36);
  tcase_add_test(tc_8, s21_less_37);
  tcase_add_test(tc_8, s21_less_38);
  tcase_add_test(tc_8, s21_less_39);
  tcase_add_test(tc_8, s21_less_40);
  tcase_add_test(tc_8, s21_less_41);
  tcase_add_test(tc_8, s21_less_42);
  tcase_add_test(tc_8, s21_less_43);
  tcase_add_test(tc_8, s21_less_44);
  tcase_add_test(tc_8, s21_less_45);
  tcase_add_test(tc_8, s21_less_46);
  tcase_add_test(tc_8, s21_less_47);
  tcase_add_test(tc_8, s21_less_48);
  tcase_add_test(tc_8, s21_less_49);
  tcase_add_test(tc_8, s21_less_50);

  suite_add_tcase(s1, tc_9);
  tcase_add_test(tc_9, s21_less_or_equal_1);
  tcase_add_test(tc_9, s21_less_or_equal_2);
  tcase_add_test(tc_9, s21_less_or_equal_3);
  tcase_add_test(tc_9, s21_less_or_equal_4);
  tcase_add_test(tc_9, s21_less_or_equal_5);
  tcase_add_test(tc_9, s21_less_or_equal_6);
  tcase_add_test(tc_9, s21_less_or_equal_7);
  tcase_add_test(tc_9, s21_less_or_equal_8);
  tcase_add_test(tc_9, s21_less_or_equal_9);
  tcase_add_test(tc_9, s21_less_or_equal_10);
  tcase_add_test(tc_9, s21_less_or_equal_11);
  tcase_add_test(tc_9, s21_less_or_equal_12);
  tcase_add_test(tc_9, s21_less_or_equal_13);
  tcase_add_test(tc_9, s21_less_or_equal_14);
  tcase_add_test(tc_9, s21_less_or_equal_15);
  tcase_add_test(tc_9, s21_less_or_equal_16);
  tcase_add_test(tc_9, s21_less_or_equal_17);
  tcase_add_test(tc_9, s21_less_or_equal_18);
  tcase_add_test(tc_9, s21_less_or_equal_19);
  tcase_add_test(tc_9, s21_less_or_equal_20);
  tcase_add_test(tc_9, s21_less_or_equal_21);
  tcase_add_test(tc_9, s21_less_or_equal_22);
  tcase_add_test(tc_9, s21_less_or_equal_23);
  tcase_add_test(tc_9, s21_less_or_equal_24);
  tcase_add_test(tc_9, s21_less_or_equal_25);
  tcase_add_test(tc_9, s21_less_or_equal_26);
  tcase_add_test(tc_9, s21_less_or_equal_27);
  tcase_add_test(tc_9, s21_less_or_equal_28);
  tcase_add_test(tc_9, s21_less_or_equal_29);
  tcase_add_test(tc_9, s21_less_or_equal_30);
  tcase_add_test(tc_9, s21_less_or_equal_31);
  tcase_add_test(tc_9, s21_less_or_equal_32);
  tcase_add_test(tc_9, s21_less_or_equal_33);
  tcase_add_test(tc_9, s21_less_or_equal_34);
  tcase_add_test(tc_9, s21_less_or_equal_35);
  tcase_add_test(tc_9, s21_less_or_equal_36);
  tcase_add_test(tc_9, s21_less_or_equal_37);
  tcase_add_test(tc_9, s21_less_or_equal_38);
  tcase_add_test(tc_9, s21_less_or_equal_39);
  tcase_add_test(tc_9, s21_less_or_equal_40);
  tcase_add_test(tc_9, s21_less_or_equal_41);
  tcase_add_test(tc_9, s21_less_or_equal_42);
  tcase_add_test(tc_9, s21_less_or_equal_43);
  tcase_add_test(tc_9, s21_less_or_equal_44);
  tcase_add_test(tc_9, s21_less_or_equal_45);
  tcase_add_test(tc_9, s21_less_or_equal_46);
  tcase_add_test(tc_9, s21_less_or_equal_47);
  tcase_add_test(tc_9, s21_less_or_equal_48);
  tcase_add_test(tc_9, s21_less_or_equal_49);
  tcase_add_test(tc_9, s21_less_or_equal_50);

  suite_add_tcase(s1, tc_10);
  tcase_add_test(tc_10, s21_greater_1);
  tcase_add_test(tc_10, s21_greater_2);
  tcase_add_test(tc_10, s21_greater_3);
  tcase_add_test(tc_10, s21_greater_4);
  tcase_add_test(tc_10, s21_greater_5);
  tcase_add_test(tc_10, s21_greater_6);
  tcase_add_test(tc_10, s21_greater_7);
  tcase_add_test(tc_10, s21_greater_8);
  tcase_add_test(tc_10, s21_greater_9);
  tcase_add_test(tc_10, s21_greater_10);
  tcase_add_test(tc_10, s21_greater_11);
  tcase_add_test(tc_10, s21_greater_12);
  tcase_add_test(tc_10, s21_greater_13);
  tcase_add_test(tc_10, s21_greater_14);
  tcase_add_test(tc_10, s21_greater_15);
  tcase_add_test(tc_10, s21_greater_16);
  tcase_add_test(tc_10, s21_greater_17);
  tcase_add_test(tc_10, s21_greater_18);
  tcase_add_test(tc_10, s21_greater_19);
  tcase_add_test(tc_10, s21_greater_20);
  tcase_add_test(tc_10, s21_greater_21);
  tcase_add_test(tc_10, s21_greater_22);
  tcase_add_test(tc_10, s21_greater_23);
  tcase_add_test(tc_10, s21_greater_24);
  tcase_add_test(tc_10, s21_greater_25);
  tcase_add_test(tc_10, s21_greater_26);
  tcase_add_test(tc_10, s21_greater_27);
  tcase_add_test(tc_10, s21_greater_28);
  tcase_add_test(tc_10, s21_greater_29);
  tcase_add_test(tc_10, s21_greater_30);
  tcase_add_test(tc_10, s21_greater_31);
  tcase_add_test(tc_10, s21_greater_32);
  tcase_add_test(tc_10, s21_greater_33);
  tcase_add_test(tc_10, s21_greater_34);
  tcase_add_test(tc_10, s21_greater_35);
  tcase_add_test(tc_10, s21_greater_36);
  tcase_add_test(tc_10, s21_greater_37);
  tcase_add_test(tc_10, s21_greater_38);
  tcase_add_test(tc_10, s21_greater_39);
  tcase_add_test(tc_10, s21_greater_40);
  tcase_add_test(tc_10, s21_greater_41);
  tcase_add_test(tc_10, s21_greater_42);
  tcase_add_test(tc_10, s21_greater_43);
  tcase_add_test(tc_10, s21_greater_44);
  tcase_add_test(tc_10, s21_greater_45);
  tcase_add_test(tc_10, s21_greater_46);
  tcase_add_test(tc_10, s21_greater_47);
  tcase_add_test(tc_10, s21_greater_48);
  tcase_add_test(tc_10, s21_greater_49);
  tcase_add_test(tc_10, s21_greater_50);

  suite_add_tcase(s1, tc_11);
  tcase_add_test(tc_11, s21_greater_or_equal_1);
  tcase_add_test(tc_11, s21_greater_or_equal_2);
  tcase_add_test(tc_11, s21_greater_or_equal_3);
  tcase_add_test(tc_11, s21_greater_or_equal_4);
  tcase_add_test(tc_11, s21_greater_or_equal_5);
  tcase_add_test(tc_11, s21_greater_or_equal_6);
  tcase_add_test(tc_11, s21_greater_or_equal_7);
  tcase_add_test(tc_11, s21_greater_or_equal_8);
  tcase_add_test(tc_11, s21_greater_or_equal_9);
  tcase_add_test(tc_11, s21_greater_or_equal_10);
  tcase_add_test(tc_11, s21_greater_or_equal_11);
  tcase_add_test(tc_11, s21_greater_or_equal_12);
  tcase_add_test(tc_11, s21_greater_or_equal_13);
  tcase_add_test(tc_11, s21_greater_or_equal_14);
  tcase_add_test(tc_11, s21_greater_or_equal_15);
  tcase_add_test(tc_11, s21_greater_or_equal_16);
  tcase_add_test(tc_11, s21_greater_or_equal_17);
  tcase_add_test(tc_11, s21_greater_or_equal_18);
  tcase_add_test(tc_11, s21_greater_or_equal_19);
  tcase_add_test(tc_11, s21_greater_or_equal_20);
  tcase_add_test(tc_11, s21_greater_or_equal_21);
  tcase_add_test(tc_11, s21_greater_or_equal_22);
  tcase_add_test(tc_11, s21_greater_or_equal_23);
  tcase_add_test(tc_11, s21_greater_or_equal_24);
  tcase_add_test(tc_11, s21_greater_or_equal_25);
  tcase_add_test(tc_11, s21_greater_or_equal_26);
  tcase_add_test(tc_11, s21_greater_or_equal_27);
  tcase_add_test(tc_11, s21_greater_or_equal_28);
  tcase_add_test(tc_11, s21_greater_or_equal_29);
  tcase_add_test(tc_11, s21_greater_or_equal_30);
  tcase_add_test(tc_11, s21_greater_or_equal_31);
  tcase_add_test(tc_11, s21_greater_or_equal_32);
  tcase_add_test(tc_11, s21_greater_or_equal_33);
  tcase_add_test(tc_11, s21_greater_or_equal_34);
  tcase_add_test(tc_11, s21_greater_or_equal_35);
  tcase_add_test(tc_11, s21_greater_or_equal_36);
  tcase_add_test(tc_11, s21_greater_or_equal_37);
  tcase_add_test(tc_11, s21_greater_or_equal_38);
  tcase_add_test(tc_11, s21_greater_or_equal_39);
  tcase_add_test(tc_11, s21_greater_or_equal_40);
  tcase_add_test(tc_11, s21_greater_or_equal_41);
  tcase_add_test(tc_11, s21_greater_or_equal_42);
  tcase_add_test(tc_11, s21_greater_or_equal_43);
  tcase_add_test(tc_11, s21_greater_or_equal_44);
  tcase_add_test(tc_11, s21_greater_or_equal_45);
  tcase_add_test(tc_11, s21_greater_or_equal_46);
  tcase_add_test(tc_11, s21_greater_or_equal_47);
  tcase_add_test(tc_11, s21_greater_or_equal_48);
  tcase_add_test(tc_11, s21_greater_or_equal_49);
  tcase_add_test(tc_11, s21_greater_or_equal_50);
  return s1;
}

Suite *AdditionFunctions() {
  Suite *s1 = suite_create("AdditionFunctions");
  TCase *tc_12 = tcase_create("s21_truncate");
  TCase *tc_13 = tcase_create("s21_negate");
  TCase *tc_14 = tcase_create("s21_floor");
  TCase *tc_15 = tcase_create("s21_round");

  suite_add_tcase(s1, tc_12);
  tcase_add_test(tc_12, s21_truncate_1);
  tcase_add_test(tc_12, s21_truncate_2);
  tcase_add_test(tc_12, s21_truncate_3);
  tcase_add_test(tc_12, s21_truncate_4);
  tcase_add_test(tc_12, s21_truncate_5);
  tcase_add_test(tc_12, s21_truncate_6);
  tcase_add_test(tc_12, s21_truncate_7);
  tcase_add_test(tc_12, s21_truncate_8);
  tcase_add_test(tc_12, s21_truncate_9);
  tcase_add_test(tc_12, s21_truncate_10);
  tcase_add_test(tc_12, s21_truncate_11);
  tcase_add_test(tc_12, s21_truncate_12);
  tcase_add_test(tc_12, s21_truncate_13);
  tcase_add_test(tc_12, s21_truncate_14);
  tcase_add_test(tc_12, s21_truncate_15);
  tcase_add_test(tc_12, s21_truncate_16);
  tcase_add_test(tc_12, s21_truncate_17);
  tcase_add_test(tc_12, s21_truncate_18);
  tcase_add_test(tc_12, s21_truncate_19);
  tcase_add_test(tc_12, s21_truncate_20);
  tcase_add_test(tc_12, s21_truncate_21);
  tcase_add_test(tc_12, s21_truncate_22);
  tcase_add_test(tc_12, s21_truncate_23);
  tcase_add_test(tc_12, s21_truncate_24);
  tcase_add_test(tc_12, s21_truncate_25);
  tcase_add_test(tc_12, s21_truncate_26);
  tcase_add_test(tc_12, s21_truncate_27);
  tcase_add_test(tc_12, s21_truncate_28);
  tcase_add_test(tc_12, s21_truncate_29);
  tcase_add_test(tc_12, s21_truncate_30);
  tcase_add_test(tc_12, s21_truncate_31);
  tcase_add_test(tc_12, s21_truncate_32);
  tcase_add_test(tc_12, s21_truncate_33);
  tcase_add_test(tc_12, s21_truncate_34);
  tcase_add_test(tc_12, s21_truncate_35);
  tcase_add_test(tc_12, s21_truncate_36);
  tcase_add_test(tc_12, s21_truncate_37);
  tcase_add_test(tc_12, s21_truncate_38);
  tcase_add_test(tc_12, s21_truncate_39);
  tcase_add_test(tc_12, s21_truncate_40);
  tcase_add_test(tc_12, s21_truncate_41);
  tcase_add_test(tc_12, s21_truncate_42);
  tcase_add_test(tc_12, s21_truncate_43);
  tcase_add_test(tc_12, s21_truncate_44);
  tcase_add_test(tc_12, s21_truncate_45);
  tcase_add_test(tc_12, s21_truncate_46);
  tcase_add_test(tc_12, s21_truncate_47);

  suite_add_tcase(s1, tc_13);
  tcase_add_test(tc_13, s21_negate_1);
  tcase_add_test(tc_13, s21_negate_2);
  tcase_add_test(tc_13, s21_negate_3);
  tcase_add_test(tc_13, s21_negate_4);
  tcase_add_test(tc_13, s21_negate_5);
  tcase_add_test(tc_13, s21_negate_6);
  tcase_add_test(tc_13, s21_negate_7);
  tcase_add_test(tc_13, s21_negate_8);
  tcase_add_test(tc_13, s21_negate_9);
  tcase_add_test(tc_13, s21_negate_10);
  tcase_add_test(tc_13, s21_negate_11);
  tcase_add_test(tc_13, s21_negate_12);
  tcase_add_test(tc_13, s21_negate_13);
  tcase_add_test(tc_13, s21_negate_14);
  tcase_add_test(tc_13, s21_negate_15);
  tcase_add_test(tc_13, s21_negate_16);
  tcase_add_test(tc_13, s21_negate_17);
  tcase_add_test(tc_13, s21_negate_18);
  tcase_add_test(tc_13, s21_negate_19);
  tcase_add_test(tc_13, s21_negate_20);
  tcase_add_test(tc_13, s21_negate_21);
  tcase_add_test(tc_13, s21_negate_22);
  tcase_add_test(tc_13, s21_negate_23);
  tcase_add_test(tc_13, s21_negate_24);
  tcase_add_test(tc_13, s21_negate_25);
  tcase_add_test(tc_13, s21_negate_26);
  tcase_add_test(tc_13, s21_negate_27);
  tcase_add_test(tc_13, s21_negate_28);
  tcase_add_test(tc_13, s21_negate_29);
  tcase_add_test(tc_13, s21_negate_30);
  tcase_add_test(tc_13, s21_negate_31);
  tcase_add_test(tc_13, s21_negate_32);
  tcase_add_test(tc_13, s21_negate_33);
  tcase_add_test(tc_13, s21_negate_34);
  tcase_add_test(tc_13, s21_negate_35);
  tcase_add_test(tc_13, s21_negate_36);
  tcase_add_test(tc_13, s21_negate_37);
  tcase_add_test(tc_13, s21_negate_38);
  tcase_add_test(tc_13, s21_negate_39);
  tcase_add_test(tc_13, s21_negate_40);
  tcase_add_test(tc_13, s21_negate_41);
  tcase_add_test(tc_13, s21_negate_42);
  tcase_add_test(tc_13, s21_negate_43);
  tcase_add_test(tc_13, s21_negate_44);
  tcase_add_test(tc_13, s21_negate_45);
  tcase_add_test(tc_13, s21_negate_46);
  tcase_add_test(tc_13, s21_negate_47);

  suite_add_tcase(s1, tc_14);
  tcase_add_test(tc_14, s21_floor_1);
  tcase_add_test(tc_14, s21_floor_2);
  tcase_add_test(tc_14, s21_floor_3);
  tcase_add_test(tc_14, s21_floor_4);
  tcase_add_test(tc_14, s21_floor_5);
  tcase_add_test(tc_14, s21_floor_6);
  tcase_add_test(tc_14, s21_floor_7);
  tcase_add_test(tc_14, s21_floor_8);
  tcase_add_test(tc_14, s21_floor_9);
  tcase_add_test(tc_14, s21_floor_10);
  tcase_add_test(tc_14, s21_floor_11);
  tcase_add_test(tc_14, s21_floor_12);
  tcase_add_test(tc_14, s21_floor_13);
  tcase_add_test(tc_14, s21_floor_14);
  tcase_add_test(tc_14, s21_floor_15);
  tcase_add_test(tc_14, s21_floor_16);
  tcase_add_test(tc_14, s21_floor_17);
  tcase_add_test(tc_14, s21_floor_18);
  tcase_add_test(tc_14, s21_floor_19);
  tcase_add_test(tc_14, s21_floor_20);
  tcase_add_test(tc_14, s21_floor_21);
  tcase_add_test(tc_14, s21_floor_22);
  tcase_add_test(tc_14, s21_floor_23);
  tcase_add_test(tc_14, s21_floor_24);
  tcase_add_test(tc_14, s21_floor_25);
  tcase_add_test(tc_14, s21_floor_26);
  tcase_add_test(tc_14, s21_floor_27);

  suite_add_tcase(s1, tc_15);
  tcase_add_test(tc_15, s21_round_1);
  tcase_add_test(tc_15, s21_round_2);
  tcase_add_test(tc_15, s21_round_3);
  tcase_add_test(tc_15, s21_round_4);
  tcase_add_test(tc_15, s21_round_5);
  tcase_add_test(tc_15, s21_round_6);
  tcase_add_test(tc_15, s21_round_7);
  tcase_add_test(tc_15, s21_round_8);
  tcase_add_test(tc_15, s21_round_9);
  tcase_add_test(tc_15, s21_round_10);
  tcase_add_test(tc_15, s21_round_11);
  tcase_add_test(tc_15, s21_round_12);
  tcase_add_test(tc_15, s21_round_13);
  tcase_add_test(tc_15, s21_round_14);
  tcase_add_test(tc_15, s21_round_15);
  tcase_add_test(tc_15, s21_round_16);
  tcase_add_test(tc_15, s21_round_17);
  tcase_add_test(tc_15, s21_round_18);
  tcase_add_test(tc_15, s21_round_19);
  tcase_add_test(tc_15, s21_round_20);
  tcase_add_test(tc_15, s21_round_21);
  tcase_add_test(tc_15, s21_round_22);
  tcase_add_test(tc_15, s21_round_23);
  tcase_add_test(tc_15, s21_round_24);
  tcase_add_test(tc_15, s21_round_25);
  tcase_add_test(tc_15, s21_round_26);
  tcase_add_test(tc_15, s21_round_27);
  tcase_add_test(tc_15, s21_round_28);

  return s1;
}

Suite *ConvertFunctions() {
  Suite *s1 = suite_create("ConvertFunctions");
  TCase *tc_16 = tcase_create("float_to_dec");
  TCase *tc_17 = tcase_create("dec_to_float");
  TCase *tc_18 = tcase_create("int_to_dec");
  TCase *tc_19 = tcase_create("dec_to_int");

  suite_add_tcase(s1, tc_16);
  tcase_add_test(tc_16, s21_float_to_dec_1);
  tcase_add_test(tc_16, s21_float_to_dec_2);
  tcase_add_test(tc_16, s21_float_to_dec_3);
  tcase_add_test(tc_16, s21_float_to_dec_4);
  tcase_add_test(tc_16, s21_float_to_dec_5);
  tcase_add_test(tc_16, s21_float_to_dec_6);
  tcase_add_test(tc_16, s21_float_to_dec_7);
  tcase_add_test(tc_16, s21_float_to_dec_8);
  tcase_add_test(tc_16, s21_float_to_dec_9);
  tcase_add_test(tc_16, s21_float_to_dec_10);
  tcase_add_test(tc_16, s21_float_to_dec_11);
  tcase_add_test(tc_16, s21_float_to_dec_12);
  tcase_add_test(tc_16, s21_float_to_dec_13);
  tcase_add_test(tc_16, s21_float_to_dec_14);
  tcase_add_test(tc_16, s21_float_to_dec_15);
  tcase_add_test(tc_16, s21_float_to_dec_16);
  tcase_add_test(tc_16, s21_float_to_dec_17);
  tcase_add_test(tc_16, s21_float_to_dec_18);
  tcase_add_test(tc_16, s21_float_to_dec_19);
  tcase_add_test(tc_16, s21_float_to_dec_20);
  tcase_add_test(tc_16, s21_float_to_dec_21);
  tcase_add_test(tc_16, s21_float_to_dec_22);
  tcase_add_test(tc_16, s21_float_to_dec_23);
  tcase_add_test(tc_16, s21_float_to_dec_24);
  tcase_add_test(tc_16, s21_float_to_dec_25);
  tcase_add_test(tc_16, s21_float_to_dec_26);
  tcase_add_test(tc_16, s21_float_to_dec_27);
  tcase_add_test(tc_16, s21_float_to_dec_28);
  tcase_add_test(tc_16, s21_float_to_dec_29);
  tcase_add_test(tc_16, s21_float_to_dec_30);
  tcase_add_test(tc_16, s21_float_to_dec_31);
  tcase_add_test(tc_16, s21_float_to_dec_32);
  tcase_add_test(tc_16, s21_float_to_dec_33);
  tcase_add_test(tc_16, s21_float_to_dec_34);
  tcase_add_test(tc_16, s21_float_to_dec_35);
  tcase_add_test(tc_16, s21_float_to_dec_36);
  tcase_add_test(tc_16, s21_float_to_dec_37);
  tcase_add_test(tc_16, s21_float_to_dec_38);
  tcase_add_test(tc_16, s21_float_to_dec_39);
  tcase_add_test(tc_16, s21_float_to_dec_40);
  tcase_add_test(tc_16, float_to_dec_41);
  tcase_add_test(tc_16, float_to_dec_42);
  tcase_add_test(tc_16, float_to_dec_43);
  tcase_add_test(tc_16, float_to_dec_44);
  tcase_add_test(tc_16, float_to_dec_45);

  suite_add_tcase(s1, tc_17);
  tcase_add_test(tc_17, dec_to_float_1);
  tcase_add_test(tc_17, dec_to_float_2);
  tcase_add_test(tc_17, dec_to_float_3);
  tcase_add_test(tc_17, dec_to_float_4);
  tcase_add_test(tc_17, dec_to_float_5);
  tcase_add_test(tc_17, dec_to_float_6);
  tcase_add_test(tc_17, dec_to_float_7);
  tcase_add_test(tc_17, dec_to_float_8);
  tcase_add_test(tc_17, dec_to_float_9);
  tcase_add_test(tc_17, dec_to_float_10);
  tcase_add_test(tc_17, dec_to_float_11);
  tcase_add_test(tc_17, dec_to_float_12);
  tcase_add_test(tc_17, dec_to_float_13);
  tcase_add_test(tc_17, dec_to_float_14);
  tcase_add_test(tc_17, dec_to_float_15);
  tcase_add_test(tc_17, dec_to_float_16);
  tcase_add_test(tc_17, dec_to_float_17);
  tcase_add_test(tc_17, dec_to_float_18);
  tcase_add_test(tc_17, dec_to_float_19);
  tcase_add_test(tc_17, dec_to_float_20);
  tcase_add_test(tc_17, dec_to_float_21);
  tcase_add_test(tc_17, dec_to_float_22);
  tcase_add_test(tc_17, dec_to_float_23);
  tcase_add_test(tc_17, dec_to_float_24);
  tcase_add_test(tc_17, dec_to_float_25);
  tcase_add_test(tc_17, dec_to_float_26);
  tcase_add_test(tc_17, dec_to_float_27);
  tcase_add_test(tc_17, dec_to_float_28);
  tcase_add_test(tc_17, dec_to_float_29);
  tcase_add_test(tc_17, dec_to_float_30);
  tcase_add_test(tc_17, dec_to_float_31);
  tcase_add_test(tc_17, dec_to_float_32);
  tcase_add_test(tc_17, dec_to_float_33);
  tcase_add_test(tc_17, dec_to_float_34);
  tcase_add_test(tc_17, dec_to_float_35);
  tcase_add_test(tc_17, dec_to_float_36);
  tcase_add_test(tc_17, dec_to_float_37);
  tcase_add_test(tc_17, dec_to_float_38);
  tcase_add_test(tc_17, dec_to_float_39);

  suite_add_tcase(s1, tc_18);
  tcase_add_test(tc_18, int_to_dec_1);
  tcase_add_test(tc_18, int_to_dec_2);
  tcase_add_test(tc_18, int_to_dec_3);
  tcase_add_test(tc_18, int_to_dec_4);
  tcase_add_test(tc_18, int_to_dec_5);
  tcase_add_test(tc_18, int_to_dec_6);
  tcase_add_test(tc_18, int_to_dec_7);
  tcase_add_test(tc_18, int_to_dec_8);
  tcase_add_test(tc_18, int_to_dec_9);
  tcase_add_test(tc_18, int_to_dec_10);
  tcase_add_test(tc_18, int_to_dec_11);
  tcase_add_test(tc_18, int_to_dec_12);
  tcase_add_test(tc_18, int_to_dec_13);
  tcase_add_test(tc_18, int_to_dec_14);
  tcase_add_test(tc_18, int_to_dec_15);
  tcase_add_test(tc_18, int_to_dec_16);
  tcase_add_test(tc_18, int_to_dec_17);
  tcase_add_test(tc_18, int_to_dec_18);
  tcase_add_test(tc_18, int_to_dec_19);
  tcase_add_test(tc_18, int_to_dec_20);
  tcase_add_test(tc_18, int_to_dec_21);

  suite_add_tcase(s1, tc_19);
  tcase_add_test(tc_19, dec_to_int_1);
  tcase_add_test(tc_19, dec_to_int_2);
  tcase_add_test(tc_19, dec_to_int_3);
  tcase_add_test(tc_19, dec_to_int_4);
  tcase_add_test(tc_19, dec_to_int_5);
  tcase_add_test(tc_19, dec_to_int_6);
  tcase_add_test(tc_19, dec_to_int_7);
  tcase_add_test(tc_19, dec_to_int_8);
  tcase_add_test(tc_19, dec_to_int_9);
  tcase_add_test(tc_19, dec_to_int_10);
  tcase_add_test(tc_19, dec_to_int_11);
  tcase_add_test(tc_19, dec_to_int_12);
  tcase_add_test(tc_19, dec_to_int_13);
  tcase_add_test(tc_19, dec_to_int_14);
  tcase_add_test(tc_19, dec_to_int_15);
  tcase_add_test(tc_19, dec_to_int_16);
  tcase_add_test(tc_19, dec_to_int_17);
  tcase_add_test(tc_19, dec_to_int_18);
  tcase_add_test(tc_19, dec_to_int_19);
  tcase_add_test(tc_19, dec_to_int_20);
  tcase_add_test(tc_19, dec_to_int_21);
  tcase_add_test(tc_19, dec_to_int_22);
  tcase_add_test(tc_19, dec_to_int_23);
  tcase_add_test(tc_19, dec_to_int_24);
  tcase_add_test(tc_19, dec_to_int_25);
  tcase_add_test(tc_19, dec_to_int_26);
  tcase_add_test(tc_19, dec_to_int_27);

  return s1;
}

int main(void) {
  int nf = 0;
  Suite *s1 = AriphmeticFunctions();
  Suite *s2 = CompareFunctions();
  Suite *s3 = AdditionFunctions();
  Suite *s4 = ConvertFunctions();

  SRunner *sr1 = srunner_create(s1);
  SRunner *sr2 = srunner_create(s2);
  SRunner *sr3 = srunner_create(s3);
  SRunner *sr4 = srunner_create(s4);

  srunner_run_all(sr1, CK_NORMAL);  // CK_NORMAL
  nf += srunner_ntests_failed(sr1);
  srunner_free(sr1);

  srunner_run_all(sr2, CK_NORMAL);
  nf += srunner_ntests_failed(sr2);
  srunner_free(sr2);

  srunner_run_all(sr3, CK_NORMAL);
  nf += srunner_ntests_failed(sr3);
  srunner_free(sr3);

  srunner_run_all(sr4, CK_NORMAL);
  nf += srunner_ntests_failed(sr4);
  srunner_free(sr4);

  return nf == 0 ? 0 : 1;
}
