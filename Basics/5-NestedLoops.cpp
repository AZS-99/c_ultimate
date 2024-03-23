//
// Created by Adam Saher on 2022-12-13.
//

#include <iostream>
#include <string>
#include "5-NestedLoops.h"

void pyramid(unsigned n) {
    for (auto j = 1u; j < n; ++j) {
        for (auto i = 1; i < j; ++i) {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }
}

void pyramid2(unsigned n) {
    for (auto i = 0u; i < n; ++i) {
        //Total slots = n * 2 - 1. for the first one, we subtract 1 space, for the second 3 spaces, fourth 5 spaces
        std::cout << std::string((n - i) * 2 - 1 , ' ');
        for (auto j = i + 1; j > 0; --j) std::cout << j << ' ';
        for (auto k = 2; k < i + 2; ++k) std::cout << k << ' ';
        std::cout << '\n';

    }
}