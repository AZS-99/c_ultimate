//
// Created by Adam Saher on 2022-08-26.
//
#include <iostream>
#include <algorithm>
#include "J2.h"

char count_votes() {
    unsigned count;
    std::string votes;
    std::cin >> count >> votes;

    auto count_a = std::ranges::count(votes, 'A');
    auto count_b = votes.length() - count_a;

    if (count_a > count_b) return 'A';
    else if (count_a == count_b) return 'T';
    return 'B';

}