//
// Created by Adam Saher on 2022-12-13.
//
#include <iostream>
#include "string1.h"


std::pair<unsigned, unsigned> spreadsheet_coord(const std::string& str) { return {str[0] - 'A', str[1] - '1'};}

std::string simplest_encryption(const std::string& str) {
    std::string result;
    for (const char& ch: str) result += (char) (ch + 2u);
    return result;
}

void substring_combinations(const std::string& str) {
    for (auto sub_len = str.length(); sub_len > 0; --sub_len) {
        for (auto i = 0u; i + sub_len <= str.length(); ++i) {
            std::cout << str.substr(i, sub_len) << std::endl;
        }
    }
}