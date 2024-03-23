//
// Created by Adam Saher on 2022-10-16.
//

#include <iostream>
#include "J2.h"
unsigned combinations_of_10() {
    unsigned dice1, dice2;
    std::cin >> dice1 >> dice2;

    if (dice1 >= 9 && dice2 >= 9) return 9;
    if (dice1 >= 9 || dice2 >= 9) return std::min(dice1, dice2);
    return std::min(dice1, dice2) - (9 - std::max(dice1, dice2));
}