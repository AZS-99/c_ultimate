//
// Created by Adam Saher on 2022-05-10.
//

#include <vector>
#include <fstream>
#include "S2.h"

std::vector<unsigned> read(const char* filename) {
    std::fstream file(filename);
    unsigned len;
    file >> len;
    std::vector<unsigned> elements(len);

    for (auto i = 0u; i < len; ++i) file >> elements[i];
    return elements;
}

std::vector<unsigned> arrange(std::vector<unsigned>& vec) {
    auto size = vec.size();
    std::sort(vec.begin(), vec.end());

    std::vector<unsigned> alternating(size);
    auto low = vec.data() + size/2 - 1;
    auto high = vec.data() + size/2;

    for (auto i = 0; i < size; i += 2) {
        alternating[i] = *low--;
        alternating[i+1] = *high++;
    }

    return alternating;
}