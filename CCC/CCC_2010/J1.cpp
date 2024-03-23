//
// Created by Adam Saher on 2022-08-29.
//

#include <iostream>
#include "J1.h"

unsigned partitions() {
    unsigned num, count = 0u;
    std::cin >> num;
    for (auto i = 0u; i < 6; ++i) {
        for (auto j = 0u; j <= i; ++j)
            if (j + i == num) ++count;
    }
    return count;
}