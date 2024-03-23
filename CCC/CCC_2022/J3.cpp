//
// Created by Adam Saher on 2022-09-27.
//
#include <string>
#include <iostream>
#include "J3.h"

void harp() {
    std::string line;
    char ch;
    std::cin >> line;
    for (auto i = 0u; i < line.size() - 1; ++i) {
        ch = line[i];
        if (ch == '+') std::cout << " tighten ";
        else if (ch == '-') std::cout << " loosen ";
        else {
            std::cout << ch;
            if (std::isdigit(ch) && !std::isdigit(line[i+1])) std::cout << std::endl;
        }
    }
    std::cout << line.back();

}