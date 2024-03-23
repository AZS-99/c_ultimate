//
// Created by Adam Saher on 2022-09-08.
//

#include <iostream>
#include "J1.h"

void print_costs() {
    unsigned day_min, evening_min, weekend_min, cost_a, cost_b;
    std::cout << "Number of daytime minutes?" << std::endl;
    std::cin >> day_min;
    std::cout << "Number of evening minutes?" << std::endl;
    std::cin >> evening_min;
    std::cout << "Number of weekend minutes?" << std::endl;
    std::cin >> weekend_min;

    cost_a = cost_b = 0u;

    if (day_min > 100u) cost_a += (day_min - 100u) * 25u;
    if (day_min > 250u) cost_b += (day_min - 250) * 45u;

    cost_a += evening_min * 15u;
    cost_b += evening_min * 35u;

    cost_a += weekend_min * 20u;
    cost_b += weekend_min * 25u;

    std::cout << "Plan A costs " << cost_a << std::endl;
    std::cout << "Plan B costs " << cost_b << std::endl;

    if (cost_a < cost_b) std::cout << "Plan A is cheapest";
    else if (cost_a > cost_b) std::cout << "Plan B is cheapest";
    else std::cout << "Plan A and B are the same price";

}