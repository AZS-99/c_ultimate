//
// Created by Adam Saher on 2022-09-27.
//

#include <iostream>
#include <numeric>
#include "J3.h"

void frame() {
    char ch;
    unsigned num, x, y, max_x, max_y, min_x, min_y;

    max_x = max_y = 0u;
    min_x = min_y = std::numeric_limits<unsigned>::max();

    std::cin >> num;

    for (auto i = 0u; i < num; ++i) {
        std::cin >> x >> ch >> y;
        if (x < min_x) min_x = x;
        else if (x > max_x) max_x = x;

        if (y < min_y) min_y = y;
        else if (y > max_y) max_y = y;
    }

    std::cout << min_x - 1 << ',' << min_y - 1 << std::endl;
    std::cout << max_x + 1 << ',' << max_y + 1 << std::endl;
}