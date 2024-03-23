//
// Created by Adam Saher on 2024-03-10.
//
#include <iostream>
#include "J3.h"

void find_third_place() {
    unsigned participants_count, score;
    unsigned scores[76] = {0};

    std::cin >> participants_count;

    for (auto i = 0u; i < participants_count; ++i) {
        std::cin >> score;
        ++scores[score];
    }


    unsigned pointer = 75;
    for (auto i = 0u; i < 3u; ++i)
        while (scores[pointer--] == 0);

    ++pointer;

    std::cout << pointer << ' ' << scores[pointer];

}