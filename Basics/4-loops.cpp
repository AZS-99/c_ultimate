//
// Created by Adam Saher on 2022-11-06.
//

#include "4-loops.h"


bool is_palindrome(const std::string& str) {
    auto len = str.length();
    for (auto i = 0u; i < len/2; ++i) if (str[i] != str[len - i - 1]) return false;
    return true;
}