//
// Created by Adam Saher on 2022-09-25.
//

#include <iostream>
#include "J1.h"

void get_pressure() {
    unsigned boiling_point, pressure;
    std::cin >> boiling_point;

    pressure = 5 * boiling_point - 400;
    std::cout << pressure << std::endl;

    if (boiling_point > 100) std::cout << -1;
    else if (boiling_point < 100) std::cout << 1;
    else std::cout << 0;
}