#include "s21_math.h"
#include <stdio.h>
#include <stdlib.h>



#define eps (1e-8)
#define circleRad (6.2831853071795865)
#define nan (0.0/0.0L)
#define pos_inf (1.0/0.0L)
#define neg_inf (-1.0/0.0L)
#define pi (3.1415926535897932)
#define pi12 (pi / 12.F)
#define pi6 (pi / 6.F)
#define pi2 (pi / 2.F)
#define sqrt3 (1.732050807569)

// вычисляет абсолютное значение целого числа
long int s21_abs(int x) {
    long int temp = x;
    if (temp < 0)
        temp = -temp;
    return temp;
}

// вычисляет арксинус
long double s21_asin(double x) {
    // x [-1; 1]
    long double s = x;
    if (x < -1.F) {
        s = nan;
    } else if (x == -1.F) {
        s = -pi2;
    } else if (x > 1.F) {
        s = nan;
    } else if (x == 1.F) {
        s = pi2;
    } else {
        s /= s21_sqrt(1.F - s * s);
        s = s21_atan(s);
    }
    return s;
}

// вычисляет арккосинус
long double s21_acos(double x) {
    long double y = s21_asin(x);
    y = pi2 - y;
    return y;
}

// вычисляет арктангенс
long double s21_atan(double x) {
    int temp1 = 0, temp2 = 0, sp = 0;
    long double x2, a;
    if (x < 0.F) {
        x = -x;
        temp1 = 1;
    }
    if (x > 1.F) {
        x = 1.F / x;
        temp2 = 2;
    }
    while (x > pi12) {
        sp++;
        a = x + sqrt3;
        a = 1.F / a;
        x *= sqrt3;
        x -= 1.F;
        x *= a;
    }
    x2 = x * x;
    a = x2 + 1.4087812F;
    a = 0.55913709F / a;
    a += 0.60310579F;
    a -= 0.05160454F * x2;
    a *= x;
    while (sp > 0) {
        a += pi6;
        sp--;
    }
    if (temp2 == 2)
        a = pi2 - a;
    if (temp1 == 1)
        a =- a;
    return(a);
}

// возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x) {
    long double temp = x;
    if (temp >= 0 && temp != (int)temp) {
        temp = (int)temp + 1;
    } else {
        temp = (int)temp;
    }
    return temp;
}

// вычисляет косинус
long double s21_cos(double x) {
    return s21_sin(x + pi2);
}

// возвращает значение e, возведенное в заданную степень
long double s21_exp(double x) {
    long double s = 1, d = 1;
    for (int n = 1; s21_fabs(d) > eps; n++) {
        d *= x / n;
        s += d;
    }
    return s;
}

// вычисляет абсолютное значение числа с плавающей точкой
long double s21_fabs(double x) {
    long double temp = x;
    if (temp < 0)
        temp = -temp;
    return temp;
}

// возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x) {
    long double result = x;
    if (x != pos_inf && x != neg_inf && x != nan) {
        if (result >= 0) {
            result = (long int)result;
        } else if (result < 0 && result != (long int)result) {
            result = (long int)result - 1;
        }
    }
    return result;
}

// остаток операции деления с плавающей точкой
long double s21_fmod(double x, double y) {
    long double temp;
    if (y != 0) {
        temp = x - ((int)(x / y)) * y;
    } else {
        temp = nan;
    }
    return temp;
}

// вычисляет натуральный логарифм
long double s21_log(double x) {
    double s;
    if (x > 0) {
        double sn = x - 1.0;
        s = sn;
        for (int i = 0; i == 0 || s21_fabs(sn - s) > eps; i++) {
            sn = s;
            s = sn + 2 * (x - s21_exp(sn)) / (x + s21_exp(sn));
        }
    } else if (x == 0) {
        s = neg_inf;
    } else {
        s = nan;
    }
    return s;
}

// возводит число в заданную степень
long double s21_pow(double base, double exp) {
    long double temp = 1;
    if (s21_fabs(s21_fmod(exp, 1.0)) < 1e-7) {
        if (exp >= 0) {
            for (int i = 0; i < (int)exp; ++i)
                temp *= base;
        } else {
            exp = -exp;
            for (int i = 0; i < (int)exp; ++i)
                temp /= base;
        }
    } else {
        temp = s21_exp(exp * s21_log(base));
    }
    return temp;
}

// вычисляет синус
long double s21_sin(double x) {
    long double s;
    if (x == neg_inf || x == pos_inf || x == nan) {
        s = nan;
    } else {
        x = s21_fmod(x, circleRad);
        s = x;
        long double d = x;
        for (int n = 3; s21_fabs(d) > eps; n += 2) {
            d *= -x * x / n / (n - 1);
            s += d;
        }
    }
    return s;
}

// вычисляет квадратный корень
long double s21_sqrt(double x) {
    long double s;
    if (x == nan || x == neg_inf) {
        s = nan;
    } else if (x == pos_inf) {
        s = pos_inf;
    } else {
        long double d;
        if (x >= 0) {
            s = x / 2;
            do {
                d = s;
                s = (d + (x / d)) / 2;
            } while ((d - s) != 0);
        } else {
            s = nan;
        }
    }
    return s;
}

// вычисляет тангенс
long double s21_tan(double x) {
    return s21_sin(x) / s21_cos(x);
}
