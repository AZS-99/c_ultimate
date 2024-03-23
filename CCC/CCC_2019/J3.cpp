//
// Created by Adam Saher on 2022-10-04.
//

#include <iostream>
#include <vector>
#include "J3.h"

void count_code() {
    unsigned lines_count, ch_count;
    char ch;

    std::cin >> lines_count;
    std::vector<std::string> lines(lines_count);

    for (auto& line: lines) {
        ch = line[0];
        ch_count = 0u;
        for (char& j : line) {
            if (j == ch)  ++ch_count;
            else {
                std::cout << ch_count << ' ' << ch << ' ';
                ch = j;
                ch_count = 1u;
            }
        }
        std::cout << ch_count << ' ' << ch << std::endl;
    }
}