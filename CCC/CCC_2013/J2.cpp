//
// Created by Adam Saher on 2022-11-12.
//

#include <string>
#include <array>
#include <iostream>
#include "J2.h"
void sign_flipper() {
    std::string input;
    std::cin >> input;

    std::array<bool, 26> ascii{};
    ascii['I' - 'A'] = true;
    ascii['O' - 'A'] = true;
    ascii['S' - 'A'] = true;
    ascii['H' - 'A'] = true;
    ascii['Z' - 'A'] = true;
    ascii['X' - 'A'] = true;
    ascii['N' - 'A'] = true;

    for (const char& value: input) {
        if (!ascii[value - 'A']) {
            std::cout << "NO" << std::endl;
            return;
        }
    }
    std::cout << "YES" << std::endl;
}