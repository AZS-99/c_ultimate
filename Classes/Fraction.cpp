//
// Created by Adam Saher on 2024-03-19.
//

#include <numeric>
#include "Fraction.h"


Fraction::Fraction(const int& numerator, const int& denominator) {
    int gcd = std::gcd(std::abs(numerator), std::abs(denominator));
    this->numerator = ((numerator < 0) ^ (denominator < 0))? -std::abs(numerator) / gcd : numerator/gcd;
    this->denominator = std::abs(denominator/gcd);
}


bool Fraction::operator==(const Fraction& other) const {
    return numerator == other.numerator && denominator == other.denominator;
}


bool Fraction::operator!=(const Fraction& other) const {
    return !this->operator==(other);
}


bool Fraction::operator<(const Fraction& other) const {
    auto tmp = *this - other;
    return tmp.numerator < 0;
}


bool Fraction::operator>(const Fraction& other) const {
    auto tmp = *this - other;
    return tmp.numerator > 0;
}


Fraction Fraction::operator+(const Fraction& other) const {
    return {numerator * other.denominator + other.numerator * denominator, denominator * other.denominator};
}


Fraction Fraction::operator-(Fraction other) const {
    other.numerator = -other.numerator;
    return *this + other;
}


Fraction Fraction::operator*(const Fraction& other) const {
    return {numerator * other.numerator, denominator * other.denominator};
}


Fraction Fraction::operator/(Fraction other) const {
    std::swap(other.numerator, other.denominator);
    return *this * other ;
}


Fraction Fraction::operator+=(const Fraction& other) {
    auto fraction = *this + other;
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    return *this;
}


Fraction Fraction::operator-=(const Fraction& other) {
    auto fraction = *this - other;
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    return *this;
}


std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    if (fraction.numerator < 0) os << '-';
    return  os << std::abs(fraction.numerator) << '/' << fraction.denominator;
}