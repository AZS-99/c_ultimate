//
// Created by Adam Saher on 2022-10-09.
//

#include <iostream>
#include <array>
#include "J3.h"

bool is_unique_year(unsigned year) {
    unsigned digit;
    std::array<bool, 10> digits{};

    while(year != 0) {
        digit = year % 10;
        year /= 10;
        if (digits[digit]) return false;
        digits[digit] = true;
    }
    return true;

}

unsigned next_unique_year() {
    unsigned year;
    std::cin >> year;
    year += 1;

    while (!is_unique_year(year)) ++year;
    return year;
}
