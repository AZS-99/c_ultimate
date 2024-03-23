//
// Created by Adam Saher on 2022-08-20.
//
#include <iostream>
#include "J1.h"

bool accept_call() {
    unsigned first, second, third, last;
    std::cin >> first >> second >> third >> last;

    return !(first == 8 || first == 9) && (last == 8 || last == 9) && second == third;
}