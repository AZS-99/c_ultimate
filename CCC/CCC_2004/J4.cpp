//
// Created by Adam Saher on 2022-12-13.
//

#include <iostream>
#include "J4.h"

char encode(const char& original, const char& shift) {
    return (original + shift - 2 * 'A') % 26 + 'A';
}

void encrypt(const std::string& str, const std::string& code) {
    for (auto i = 0u; i < str.length(); ++i) {
        std::cout << encode(str[i], code[i%code.length()]);
    }
}