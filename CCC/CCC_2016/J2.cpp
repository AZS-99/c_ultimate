//
// Created by Adam Saher on 2022-08-19.
//

#include <array>
#include <iostream>
#include "J2.h"
bool is_magic() {
    unsigned value;
    std::array<unsigned, 4> rows{};
    std::array<unsigned, 4> cols{};

    for (auto i = 0u; i < 16; ++i) {
        std::cin >> value;
        cols[i % 4] += value;
        rows[i / 4] += value;
    }

    for (auto i = 0u; i < 3; ++i)
        if (rows[i] != rows[i+1] || cols[i] != cols[i+1]) return false;

    return rows[0] == cols[0];

}