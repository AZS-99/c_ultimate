//
// Created by Adam Saher on 2022-10-06.
//

#include <iostream>
#include "J1.h"
void print_bow() {
    int height, spaces, asterisks;
    std::cin >> height;

    for (int i = 1; i <= height * 2; i += 2) {
        spaces = 2 * (height - i);
        asterisks = std::abs(i + height) - height;
        std::cout << asterisks;
//        for (auto j = 0u; j < asterisks; ++j) std::cout << '*';
//        for (auto j = 0u; j < spaces; ++j) std::cout << ' ';
//        for (auto j = 0u; j < asterisks; ++j) std::cout << '*';
        std::cout << std::endl;
    }
}