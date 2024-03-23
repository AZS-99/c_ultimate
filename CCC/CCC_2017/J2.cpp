//
// Created by Adam Saher on 2022-08-19.
//

#include <iostream>
#include <complex>
#include "J2.h"

// Note that 12 + 120 + 1200 + 12000 = 12 * 10^0 + 12 * 10^1 + 12 * 10^2 + 12 * 10^3
long unsigned shift() {
    unsigned num;
    unsigned k;

    std::cin >> num >> k;

    auto total = 0ul;
    for (auto i = 0u; i < k + 1; ++i)
        total += num * (unsigned) std::pow(10, i); //K should be included; hence hydrants + 1

    return total;
}