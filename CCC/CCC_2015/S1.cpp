//
// Created by Adam Saher on 2022-07-18.
//

#include <fstream>
#include <vector>
#include <numeric>
#include <iostream>
#include "S1.h"

unsigned corrected_sum(const char* filepath) {
    std::ifstream file(filepath);

    unsigned line_count, value, j = 0u;
    file >> line_count;
    std::vector<unsigned> values(line_count, 0u);

    for (auto i = 0u; i < line_count; ++i) {
        file >> value;
        if (value == 0 && j > 0) {
            --j;
            continue;
        }
        values[j++] = value;
    }

    return std::reduce(values.cbegin(), values.cbegin() + j, 0u); //All the values BEFORE values[j]
}
