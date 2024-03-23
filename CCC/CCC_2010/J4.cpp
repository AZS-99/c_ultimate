//
// Created by Adam Saher on 2022-10-25.
//

#include <iostream>
#include "J4.h"

Pattern::Pattern() {
    unsigned count, max_distance;
    int value1, value2;

    std::cin >> count >> value1;
    for (auto i = 0u; i < count - 1; ++i) {
        std::cin >> value2;
        diff.push_back(value2 - value1);
        value1 = value2;
    }



    for (auto i = 0u; i < diff.size(); ++i) {
        std::cout << diff[i] << ' ';
        if (distances.contains(diff[i])) max_distance = std::max(i - distances[diff[i]], max_distance);
        distances[diff[i]] = i;
    }
    std::cout << std::endl;


    std::cout << max_distance;
}
