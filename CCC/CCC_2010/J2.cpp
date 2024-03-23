//
// Created by Adam Saher on 2022-04-18.
//

#include <iostream>
#include <cmath>
#include "J2.h"

Winner zigzag() {
    unsigned forward1, forward2, back1, back2, steps;
    std::cin >> forward1 >> back1 >> forward2 >> back2 >> steps;

    auto abs_cycle_len1 = forward1 + back1;
    auto abs_cycle_len2 = forward2 + back2;
    auto relative_cycle_len1 = forward1 - back1;
    auto relative_cycle_len2 = forward2 - back2;

    auto cycles_count1 = steps / abs_cycle_len1;
    auto cycles_count2 = steps / abs_cycle_len2;

    auto remainder1 = steps % abs_cycle_len1;
    auto remainder2 = steps % abs_cycle_len2;

    auto relative_distance1 = relative_cycle_len1 * cycles_count1 + abs(-(int)(remainder1 + forward1)) - forward1;
    auto relative_distance2 = relative_cycle_len2 * cycles_count2 + abs(-(int)(remainder2 + forward2)) - forward2;

    if (relative_distance1 > relative_cycle_len2) return Winner::Byron;
    if (relative_distance2 < relative_cycle_len2) return Winner::Nikky;
    return Winner::Tied;
}
