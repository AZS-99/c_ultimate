//
// Created by Adam Saher on 2022-07-16.
//

#include <fstream>
#include <iostream>
#include "S2.h"

unsigned mcq_score(const char* filename) {
    unsigned len, count = 0u;
    char value;
    std::ifstream file(filename);
    file >> len;

    auto array = new char[len];
    for (auto i = 0u; i < len; ++i) file >> array[i];

    for (auto i = 0u; i < len; ++i) {
        file >> value;
        if (array[i] == value) ++count;
    }

    return count;

}