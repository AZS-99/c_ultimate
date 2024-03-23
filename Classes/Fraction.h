//
// Created by Adam Saher on 2024-03-19.
//

#ifndef C_FRACTION_H
#define C_FRACTION_H

#include <iostream>

class Fraction {
    int numerator;
    int denominator;

public:
    Fraction(const int&, const int&);
    bool operator==(const Fraction&) const; //The trailing 'const' means the method can't modify the instance *this
    bool operator!=(const Fraction&) const;
    bool operator<(const Fraction&) const;
    bool operator>(const Fraction&) const;
    Fraction operator+(const Fraction&) const;
    Fraction operator-(Fraction) const;
    Fraction operator*(const Fraction&) const;
    Fraction operator/(Fraction) const;
    Fraction operator+=(const Fraction&); // for cases like y = x += 10
    Fraction operator-=(const Fraction&);
    friend std::ostream& operator<<(std::ostream&, const Fraction&);
};


#endif //C_FRACTION_H
