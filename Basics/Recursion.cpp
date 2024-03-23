//
// Created by Adam Saher on 2023-01-31.
//
#include <cmath>
#include "Recursion.h"
unsigned summation(const unsigned& n) {
    if (n == 1u) return 1u;
    return summation(n - 1u) + n;
}


unsigned factorial(const unsigned& n) {
    if (n == 1u) return 1u;
    return factorial(n - 1) * n;
}


double harmonic_series(const unsigned& n) {
    if (n == 1u) return 1u;
    return harmonic_series(n - 1) + 1.0/n;
}

double series1(const unsigned& x) {
    if (x == 1u) return (1.0/2.0);
    return series1(x - 1) + x/(x + 1.0);
}

double series2(const unsigned& x) {
    if (x == 1u) return 1.0/3.0;
    return series1(x - 1) + x/(x + 2.0);
}

unsigned fibonacci(const unsigned& n) {
    if (n < 2) return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

unsigned sum_digits(const unsigned& num) {
    if (num < 10u) return num;
    return sum_digits(num / 10u) + num % 10u;
}

unsigned reverse_digits(const unsigned& num) {
    if (num < 10) return num;
    auto len = (int) std::log10(num);
    return (num % 10) * (unsigned) std::pow(10u, len) + reverse_digits(num / 10u);
}


