//
// Created by Adam Saher on 2022-09-25.
//

#include <iostream>
#include "J1.h"

bool is_happy() {
    unsigned small, medium, large;
    std::cin >> small >> medium >> large;
    return small + 2 * medium + 3 * large > 9;
}