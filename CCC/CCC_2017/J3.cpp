//
// Created by Adam Saher on 2022-11-25.
//

#include <iostream>
#include "J3.h"

bool coordinates() {
    int x1, y1, x2, y2, distance, energy;
    std::cin >> x1 >> y1 >> x2 >> y2 >> energy;

    distance = std::abs(x1 - x2) + std::abs(y1 - y2);

    return distance <= energy && (distance - energy) % 2 == 0;
}