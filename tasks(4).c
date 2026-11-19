#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "tasks.h"

void task6(void)
{
    printf("C\tF\n");
    for (int c = 0; c <= 100; ++c) {
        double f = 9.0 * c / 5.0 + 32.0;
        printf("%d\t%.1f\n", c, f);
    }
}

void task9(void)
{
    double price = 20.4;
    printf("Quantity\tCost, UAH\n");
    for (int k = 2; k <= 20; ++k) {
        printf("%d\t\t%.2f\n", k, k * price);
    }
}

void task12(void)
{
    double r = 6350.0;
    printf("h, km\tDistance, km\n");
    for (int h = 1; h <= 10; ++h) {
        double hh = h;
        double d = sqrt(2.0 * r * hh + hh * hh);
        printf("%d\t%.3f\n", h, d);
    }
}

void task15(void)
{
    for (int i = 1; i <= 10; ++i) {
        printf("7 * %d = %d\n", i, 7 * i);
    }
}

void task18(void)
{
    for (int i = 2; i <= 20; ++i) {
        printf("sin(%d) = %.6f\n", i, sin(i));
    }
}

void task21(void)
{
    for (int i = 1; i <= 11; ++i) {
        double x = i / 10.0;
        printf("sin(%.6f) = %.6f\n", x, sin(x));
    }
}

void task24(void)
{
    for (int i = 21; i <= 28; ++i) {
        printf("%.1f\n", i / 10.0);
    }
}

void task27(void)
{
    double x;
    printf("Input x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input\n");
        return;
    }

    double S = 0.0;
    double term = x;
    int sign = 1;

    for (int k = 1; k <= 13; k += 2) {
        S += sign * term;
        term *= x * x / ((k + 1) * (k + 2));
        sign = -sign;
    }

    printf("S = %.10f\n", S);
}

void task30(void)
{
    double a;
    int n;

    printf("Input a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid input\n");
        return;
    }
    printf("Input n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return;
    }

    double P = 1.0;
    for (int i = 0; i <= n; ++i) {
        P *= (a - i * n);
    }

    printf("P = %.10f\n", P);
}

void task33(void)
{
    double P = 1.0;
    for (int i = 1; i <= 100; ++i) {
        double x = i / 10.0;
        P *= (1.0 + sin(x));
    }
    printf("P = %.10f\n", P);
}
