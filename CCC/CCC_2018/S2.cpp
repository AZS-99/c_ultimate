//
// Created by Adam Saher on 2022-06-16.
//

#include <fstream>
#include <iostream>
#include <algorithm>
#include "S2.h"

S2::S2() {
    std::ifstream file("Data/CCC_2018/S2");
    unsigned length;
    file >> length;

    array = std::vector<std::vector<unsigned>>(length);
    std::vector<unsigned> row;
    for (auto i = 0u; i < length; ++i) {
        row = std::vector<unsigned>(length);
        for (auto j = 0u; j < length; ++j) {
            file >> row[j];
        }
        array[i] = row;
    }

}


void S2::rotate() {

    for (auto r: array) {
        for (auto u: r) std::cout << u << ' ';
        std::cout << std::endl;
    }
    std::ranges::reverse(array);

    std::cout << std::endl;
    for (auto i = 0u; i + 1 < array.size(); ++i) {
        for (auto j = i+1; j < array.size(); ++j)
            std::swap(array[i][j], array[j][i]);
    }

    for (auto r: array) {
        for (auto u: r) std::cout << u << ' ';
        std::cout << std::endl;
    }



}

