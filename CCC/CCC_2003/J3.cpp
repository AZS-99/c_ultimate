//
// Created by Adam Saher on 2022-09-23.
//

#include <iostream>
#include "J3.h"

std::unordered_map<unsigned, unsigned> SnakesAndLadders::gates {
        {9, 34},
        {40, 64},
        {67, 86},
        {54, 19},
        {90, 48},
        {99, 77}
};

SnakesAndLadders::SnakesAndLadders() {
    position = 1u;
}

void SnakesAndLadders::run() {
    unsigned roll;
    do {
        std::cout << "Enter the sum of dice:";
        std::cin >> roll;
        if (roll == 0) break;
        if (position + roll <= 100) {
            position += roll;
            if (gates.contains(position)) {
                position = gates[position];
            }
        }
        std::cout << "Your position is now " << position << std::endl;
    } while ( position != 100);
    std::cout << "You Win!";
}

