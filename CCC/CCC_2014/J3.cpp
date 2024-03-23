//
// Created by Adam Saher on 2022-10-18.
//

#include <iostream>
#include <vector>
#include "J3.h"

void calculate_points() {
    unsigned lines_count, score1, score2, antonia, david;
    antonia = david = 100;
    std::cin >> lines_count;

    for (auto i = 0u; i < lines_count; ++i) {
        std::cin >> score1 >> score2;
        if (score1 > score2) david -= score1;
        else david -= score2;
    }

    std::cout << antonia << std::endl << david;
}