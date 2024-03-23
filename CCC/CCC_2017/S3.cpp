//
// Created by Adam Saher on 2022-05-11.
//

#include <vector>
#include <array>
#include <fstream>
#include <iostream>
#include "S3.h"




std::pair<unsigned, unsigned> partition(const std::array<unsigned, 2001>& vec) {

}

Fence::Fence() {
    std::ifstream file("Data/CCC_2017/S3");

    unsigned len, value;
    file >> len;

    for (auto i = 0u; i < len; ++i) {
        file >> value;
        ++woods[value];
    }
}

std::pair<unsigned, unsigned> Fence::max_len() {
    std::array<unsigned, 4001> boards{0};
    auto size = 2001u;

    for (auto i = 1u; i < size; ++i) {
        boards[i * 2] += woods[i] / 2;
        for (auto j = i + 1; j < size; ++j) boards[i + j] += std::min(woods[i], woods[j]);
    }

    auto max = *std::max_element(boards.cbegin(), boards.cend());
    unsigned count = std::count(boards.cbegin(), boards.cend(), max);

    return std::make_pair(max, count);
}
