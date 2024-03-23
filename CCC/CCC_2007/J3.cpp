//
// Created by Adam Saher on 2022-09-09.
//

#include <array>
#include <iostream>
#include <numeric>
#include "J3.h"

bool deal() {
    unsigned num_opened, case_num, offer;
    std::array<unsigned, 10u> briefcases{100u, 500u, 1000u, 5000u, 10000u, 25000u, 50000u, 100000u, 500000u, 1000000u};

    std::cin >> num_opened;
    for (unsigned i = 0u; i < num_opened; i++) {
        std::cin >> case_num;
        briefcases[case_num - 1u] = 0u;
    }

    std::cin >> offer;
    return (offer > std::accumulate(briefcases.cbegin(), briefcases.cend(), 0u) / (10u - num_opened));
}