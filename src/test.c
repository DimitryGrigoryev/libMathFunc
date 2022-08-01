#include "s21_math.h"
#include <check.h>
#include <stdio.h>
#include <limits.h>
// #include <stdlib.h>
#include <math.h>

#define eps 1e-6

START_TEST(s21_abs_test) {
    ck_assert(fabs(s21_abs(1) - fabs(1)) < eps);
    ck_assert(fabs(s21_abs(INT32_MAX) - fabs(INT32_MAX)) < eps);
    ck_assert(fabs(s21_abs(-1) - fabs(-1)) < eps);
    ck_assert(fabs(s21_abs(INT32_MIN) - fabs(INT32_MIN)) < eps);
}
END_TEST

START_TEST(s21_acos_test) {
    ck_assert(fabs(s21_acos(1) - acos(1)) < eps);
    ck_assert(fabs(s21_acos(0.9) - acos(0.9)) < eps);
    ck_assert(fabs(s21_acos(0.5) - acos(0.5)) < eps);
    ck_assert(fabs(s21_acos(0.1) - acos(0.1)) < eps);
    ck_assert(fabs(s21_acos(0.01) - acos(0.01)) < eps);
    ck_assert(fabs(s21_acos(0.001) - acos(0.001)) < eps);
    ck_assert(fabs(s21_acos(0.0001) - acos(0.0001)) < eps);
    ck_assert(fabs(s21_acos(-1) - acos(-1)) < eps);
    ck_assert(fabs(s21_acos(-0.9) - acos(-0.9)) < eps);
    ck_assert(fabs(s21_acos(-0.5) - acos(-0.5)) < eps);
    ck_assert(fabs(s21_acos(-0.1) - acos(-0.1)) < eps);
    ck_assert(fabs(s21_acos(-0.01) - acos(-0.01)) < eps);
    ck_assert(fabs(s21_acos(-0.001) - acos(-0.001)) < eps);
    ck_assert(fabs(s21_acos(-0.0001) - acos(-0.0001)) < eps);
}
END_TEST

START_TEST(s21_asin_test) {
    ck_assert(fabs(s21_asin(1) - asin(1)) < eps);
    ck_assert(fabs(s21_asin(0.9) - asin(0.9)) < eps);
    ck_assert(fabs(s21_asin(0.5) - asin(0.5)) < eps);
    ck_assert(fabs(s21_asin(0.1) - asin(0.1)) < eps);
    ck_assert(fabs(s21_asin(0.01) - asin(0.01)) < eps);
    ck_assert(fabs(s21_asin(0.001) - asin(0.001)) < eps);
    ck_assert(fabs(s21_asin(0.0001) - asin(0.0001)) < eps);
    ck_assert(fabs(s21_asin(-1) - asin(-1)) < eps);
    ck_assert(fabs(s21_asin(-0.9) - asin(-0.9)) < eps);
    ck_assert(fabs(s21_asin(-0.5) - asin(-0.5)) < eps);
    ck_assert(fabs(s21_asin(-0.1) - asin(-0.1)) < eps);
    ck_assert(fabs(s21_asin(-0.01) - asin(-0.01)) < eps);
    ck_assert(fabs(s21_asin(-0.001) - asin(-0.001)) < eps);
    ck_assert(fabs(s21_asin(-0.0001) - asin(-0.0001)) < eps);
}
END_TEST

START_TEST(s21_atan_test) {
    ck_assert(fabs(s21_atan(1) - atan(1)) < eps);
    ck_assert(fabs(s21_atan(2) - atan(2)) < eps);
    ck_assert(fabs(s21_atan(3) - atan(3)) < eps);
    ck_assert(fabs(s21_atan(4) - atan(4)) < eps);
    ck_assert(fabs(s21_atan(5) - atan(5)) < eps);
    ck_assert(fabs(s21_atan(10) - atan(10)) < eps);
    ck_assert(fabs(s21_atan(100) - atan(100)) < eps);
    ck_assert(fabs(s21_atan(1000) - atan(1000)) < eps);
}
END_TEST

START_TEST(s21_ceil_test) {
    ck_assert(fabs(s21_ceil(1.6) - ceil(1.6)) < eps);
    ck_assert(fabs(s21_ceil(1.9999) - ceil(1.999)) < eps);
    ck_assert(fabs(s21_ceil(123456.6789) - ceil(123456.6789)) < eps);
    ck_assert(fabs(s21_ceil(-1.6) - ceil(-1.6)) < eps);
    ck_assert(fabs(s21_ceil(-1.9999) - ceil(-1.999)) < eps);
    ck_assert(fabs(s21_ceil(-123456.6789) - ceil(-123456.6789)) < eps);
}
END_TEST

START_TEST(s21_cos_test) {
    ck_assert(fabs(s21_cos(1) - cos(1)) < eps);
    ck_assert(fabs(s21_cos(2) - cos(2)) < eps);
    ck_assert(fabs(s21_cos(3) - cos(3)) < eps);
    ck_assert(fabs(s21_cos(4) - cos(4)) < eps);
    ck_assert(fabs(s21_cos(5) - cos(5)) < eps);
    ck_assert(fabs(s21_cos(-1) - cos(-1)) < eps);
    ck_assert(fabs(s21_cos(-2) - cos(-2)) < eps);
    ck_assert(fabs(s21_cos(-3) - cos(-3)) < eps);
    ck_assert(fabs(s21_cos(-4) - cos(-4)) < eps);
    ck_assert(fabs(s21_cos(-5) - cos(-5)) < eps);
    ck_assert(fabs(s21_cos(100) - cos(100)) < eps);
    ck_assert(fabs(s21_cos(INT32_MAX) - cos(INT32_MAX)) < eps);
    ck_assert(fabs(s21_cos(0.1) - cos(0.1)) < eps);
    ck_assert(fabs(s21_cos(0.01) - cos(0.01)) < eps);
    ck_assert(fabs(s21_cos(0.001) - cos(0.001)) < eps);
    ck_assert(fabs(s21_cos(-0.1) - cos(-0.1)) < eps);
    ck_assert(fabs(s21_cos(-0.01) - cos(-0.01)) < eps);
    ck_assert(fabs(s21_cos(-0.001) - cos(-0.001)) < eps);
}
END_TEST

START_TEST(s21_exp_test) {
    ck_assert(fabs(s21_exp(1) - exp(1)) < eps);
    ck_assert(fabs(s21_exp(2) - exp(2)) < eps);
    ck_assert(fabs(s21_exp(3) - exp(3)) < eps);
    ck_assert(fabs(s21_exp(4) - exp(4)) < eps);
    ck_assert(fabs(s21_exp(5) - exp(5)) < eps);
    ck_assert(fabs(s21_exp(10) - exp(10)) < eps);
    ck_assert(fabs(s21_exp(0.1) - exp(0.1)) < eps);
    ck_assert(fabs(s21_exp(0.01) - exp(0.01)) < eps);
    ck_assert(fabs(s21_exp(0.001) - exp(0.001)) < eps);
    ck_assert(fabs(s21_exp(0.0001) - exp(0.0001)) < eps);
    ck_assert(fabs(s21_exp(-1) - exp(-1)) < eps);
    ck_assert(fabs(s21_exp(-2) - exp(-2)) < eps);
    ck_assert(fabs(s21_exp(-3) - exp(-3)) < eps);
    ck_assert(fabs(s21_exp(-4) - exp(-4)) < eps);
    ck_assert(fabs(s21_exp(-5) - exp(-5)) < eps);
    ck_assert(fabs(s21_exp(-10) - exp(-10)) < eps);
    ck_assert(fabs(s21_exp(-0.1) - exp(-0.1)) < eps);
    ck_assert(fabs(s21_exp(-0.01) - exp(-0.01)) < eps);
    ck_assert(fabs(s21_exp(-0.001) - exp(-0.001)) < eps);
    ck_assert(fabs(s21_exp(-0.0001) - exp(-0.0001)) < eps);
}
END_TEST

START_TEST(s21_fabs_test) {
    ck_assert(fabs(s21_fabs(-1.7) - fabs(-1.7)) < eps);
    ck_assert(fabs(s21_fabs(1.7) - fabs(1.7)) < eps);
    ck_assert(fabs(s21_fabs(-0.00007) - fabs(-0.00007)) < eps);
    ck_assert(fabs(s21_fabs(0.00007) - fabs(0.00007)) < eps);
    ck_assert(fabs(s21_fabs(INT32_MAX) - fabs(INT32_MAX)) < eps);
    ck_assert(fabs(s21_fabs(INT32_MIN) - fabs(INT32_MIN)) < eps);
}
END_TEST

START_TEST(s21_floor_test) {
    ck_assert(fabs(s21_floor(-1.7) - floor(-1.7)) < eps);
    ck_assert(fabs(s21_floor(1.6) - floor(1.6)) < eps);
    ck_assert(fabs(s21_floor(1.9999) - floor(1.999)) < eps);
    ck_assert(fabs(s21_floor(123456.6789) - floor(123456.6789)) < eps);
    ck_assert(fabs(s21_floor(-1.6) - floor(-1.6)) < eps);
    ck_assert(fabs(s21_floor(-1.9999) - floor(-1.999)) < eps);
    ck_assert(fabs(s21_floor(-123456.6789) - floor(-123456.6789)) < eps);
}
END_TEST

START_TEST(s21_fmod_test) {
    ck_assert(fabs(s21_fmod(9.99, 7) - fmod(9.99, 7)) < eps);
    ck_assert(fabs(s21_fmod(0.000123, 0.07) - fmod(0.000123, 0.07)) < eps);
    ck_assert(fabs(s21_fmod(12345.678, 3.3) - fmod(12345.678, 3.3)) < eps);
    ck_assert(fabs(s21_fmod(-12345.678, 3.3) - fmod(-12345.678, 3.3)) < eps);
    ck_assert(fabs(s21_fmod(12345.678, -3.3) - fmod(12345.678, -3.3)) < eps);
    ck_assert(fabs(s21_fmod(-12345.678, -3.3) - fmod(-12345.678, -3.3)) < eps);
    ck_assert(fabs(s21_fmod(0, 7) - fmod(0, 7)) < eps);
    ck_assert(isnanl(s21_fmod(9.99, 0)) == isnanl(fmod(9.99, 0)));
    ck_assert(isnanl(s21_fmod(0, 0)) == isnanl(fmod(0, 0)));
}
END_TEST

START_TEST(s21_log_test) {
    ck_assert(fabs(s21_log(1.1) - log(1.1)) < eps);
    ck_assert(fabs(s21_log(123.4) - log(123.4)) < eps);
    ck_assert(fabs(s21_log(1234.4) - log(1234.4)) < eps);
    ck_assert(fabs(s21_log(1.1) - log(1.1)) < eps);
    ck_assert(fabs(s21_log(123.4) - log(123.4)) < eps);
    ck_assert(fabs(s21_log(1234.4) - log(1234.4)) < eps);
    ck_assert(isnanl(s21_log(-1)) == isnanl(log(-1)));
    ck_assert(isnanl(s21_log(-0.0001)) == isnanl(log(-0.0001)));
    ck_assert(fabs(s21_log(0.1) - log(0.1)) < eps);
    ck_assert(fabs(s21_log(0.01) - log(0.01)) < eps);
}
END_TEST

START_TEST(s21_pow_test) {
    ck_assert(fabs(s21_pow(2, 2.2) - pow(2, 2.2)) < eps);
    ck_assert(fabs(s21_pow(1, 2) - pow(1, 2)) < eps);
    ck_assert(fabs(s21_pow(10, 4) - pow(10, 4)) < eps);
    ck_assert(fabs(s21_pow(66, 5) - pow(66, 5)) < eps);
    ck_assert(fabs(s21_pow(0.12, 3) - pow(0.12, 3)) < eps);
    ck_assert(fabs(s21_pow(0.123, 3) - pow(0.123, 3)) < eps);
    ck_assert(isnanl(s21_pow(-2, 2.2)) == isnanl(pow(-2, 2.2)));
    ck_assert(fabs(s21_pow(-1, 2) - pow(-1, 2)) < eps);
    ck_assert(fabs(s21_pow(-10, 4) - pow(-10, 4)) < eps);
    ck_assert(fabs(s21_pow(66, -5) - pow(66, -5)) < eps);
    ck_assert(fabs(s21_pow(-0.12, 3) - pow(-0.12, 3)) < eps);
    ck_assert(fabs(s21_pow(0.123, -3) - pow(0.123, -3)) < eps);
    ck_assert(fabs(s21_pow(-66, -5) - pow(-66, -5)) < eps);
    ck_assert(fabs(s21_pow(-0.123, -3) - pow(-0.123, -3)) < eps);
}
END_TEST

START_TEST(s21_sin_test) {
    ck_assert(fabs(s21_sin(1) - sin(1)) < eps);
    ck_assert(fabs(s21_sin(2) - sin(2)) < eps);
    ck_assert(fabs(s21_sin(3) - sin(3)) < eps);
    ck_assert(fabs(s21_sin(4) - sin(4)) < eps);
    ck_assert(fabs(s21_sin(5) - sin(5)) < eps);
    ck_assert(fabs(s21_sin(-1) - sin(-1)) < eps);
    ck_assert(fabs(s21_sin(-2) - sin(-2)) < eps);
    ck_assert(fabs(s21_sin(-3) - sin(-3)) < eps);
    ck_assert(fabs(s21_sin(-4) - sin(-4)) < eps);
    ck_assert(fabs(s21_sin(-5) - sin(-5)) < eps);
    ck_assert(fabs(s21_sin(100) - sin(100)) < eps);
    ck_assert(fabs(s21_sin(INT32_MAX) - sin(INT32_MAX)) < eps);
    ck_assert(fabs(s21_sin(0.1) - sin(0.1)) < eps);
    ck_assert(fabs(s21_sin(0.01) - sin(0.01)) < eps);
    ck_assert(fabs(s21_sin(0.001) - sin(0.001)) < eps);
    ck_assert(fabs(s21_sin(-0.1) - sin(-0.1)) < eps);
    ck_assert(fabs(s21_sin(-0.01) - sin(-0.01)) < eps);
    ck_assert(fabs(s21_sin(-0.001) - sin(-0.001)) < eps);
}
END_TEST

START_TEST(s21_sqrt_test) {
    ck_assert(fabs(s21_sqrt(1) - sqrt(1)) < eps);
    ck_assert(fabs(s21_sqrt(2) - sqrt(2)) < eps);
    ck_assert(fabs(s21_sqrt(3) - sqrt(3)) < eps);
    ck_assert(fabs(s21_sqrt(4) - sqrt(4)) < eps);
    ck_assert(fabs(s21_sqrt(5) - sqrt(5)) < eps);
    ck_assert(fabs(s21_sqrt(100) - sqrt(100)) < eps);
    ck_assert(fabs(s21_sqrt(INT32_MAX) - sqrt(INT32_MAX)) < eps);
    ck_assert(fabs(s21_sqrt(0.1) - sqrt(0.1)) < eps);
    ck_assert(fabs(s21_sqrt(0.01) - sqrt(0.01)) < eps);
    ck_assert(fabs(s21_sqrt(0.001) - sqrt(0.001)) < eps);
    ck_assert(isnanl(s21_sqrt(-1)) == isnanl(sqrt(-1)));
    ck_assert(isnanl(s21_sqrt(-0.0001)) == isnanl(sqrt(-0.0001)));
}
END_TEST

START_TEST(s21_tan_test) {
    ck_assert(fabs(s21_tan(0) - tan(0)) < eps);
    ck_assert(fabs(s21_tan(0.7) - tan(0.7)) < eps);
    ck_assert(fabs(s21_tan(0.07) - tan(0.07)) < eps);
    ck_assert(fabs(s21_tan(0.007) - tan(0.007)) < eps);
    ck_assert(fabs(s21_tan(0.0007) - tan(0.0007)) < eps);
    ck_assert(fabs(s21_tan(1) - tan(1)) < eps);
    ck_assert(fabs(s21_tan(2) - tan(2)) < eps);
    ck_assert(fabs(s21_tan(3) - tan(3)) < eps);
    ck_assert(fabs(s21_tan(4) - tan(4)) < eps);
    ck_assert(fabs(s21_tan(5) - tan(5)) < eps);
    ck_assert(fabs(s21_tan(100) - tan(100)) < eps);
    ck_assert(fabs(s21_tan(-0.7) - tan(-0.7)) < eps);
    ck_assert(fabs(s21_tan(-0.07) - tan(-0.07)) < eps);
    ck_assert(fabs(s21_tan(-0.007) - tan(-0.007)) < eps);
    ck_assert(fabs(s21_tan(-0.0007) - tan(-0.0007)) < eps);
    ck_assert(fabs(s21_tan(-1) - tan(-1)) < eps);
    ck_assert(fabs(s21_tan(-2) - tan(-2)) < eps);
    ck_assert(fabs(s21_tan(-3) - tan(-3)) < eps);
    ck_assert(fabs(s21_tan(-4) - tan(-4)) < eps);
    ck_assert(fabs(s21_tan(-5) - tan(-5)) < eps);
    ck_assert(fabs(s21_tan(-100) - tan(-100)) < eps);
    ck_assert(fabs(s21_tan(UINT32_MAX) - tan(UINT32_MAX)) < eps);
}
END_TEST

START_TEST(test) {
    printf("%Lf\n", s21_cos(0));
    printf("%f\n",  cos(0));
    // printf("%Lf\n", s21_fabs(s21_fmod(4.0, 1.0)));
    // ck_assert(fabs(s21_pow(10, 4) - pow(10, 4)) < eps);
}
END_TEST

int main(void) {
    Suite *s1 = suite_create("Core");  // Объявляем сьюит
    SRunner *sr = srunner_create(s1);  // Лаунчер сьюита
    int failed_count;  // Статус тестов сьюита
    TCase *Case = tcase_create("Test");  // Новый кейс
    suite_add_tcase(s1, Case);  // Добавляем кейс

    tcase_add_test(Case, s21_abs_test);
    tcase_add_test(Case, s21_acos_test);
    tcase_add_test(Case, s21_asin_test);
    tcase_add_test(Case, s21_atan_test);
    tcase_add_test(Case, s21_ceil_test);
    tcase_add_test(Case, s21_cos_test);
    tcase_add_test(Case, s21_exp_test);
    tcase_add_test(Case, s21_fabs_test);
    tcase_add_test(Case, s21_floor_test);
    tcase_add_test(Case, s21_fmod_test);
    tcase_add_test(Case, s21_log_test);
    tcase_add_test(Case, s21_pow_test);
    tcase_add_test(Case, s21_sin_test);
    tcase_add_test(Case, s21_sqrt_test);
    tcase_add_test(Case, s21_tan_test);

    tcase_add_test(Case, test);

    srunner_run_all(sr, CK_ENV);
    failed_count = srunner_ntests_failed(sr);
    srunner_free(sr);

    return 0;
}
