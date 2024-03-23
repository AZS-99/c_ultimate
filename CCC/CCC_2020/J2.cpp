//
// Created by Adam Saher on 2022-08-11.
//

#include <cmath>
#include <iostream>
#include "J2.h"

/*
IDEA:
Let I be the initially infected population
Let r represent the spreadability

The number of patients every day follows the formula:

Sn = I * r^0 + I * r^1 + .... + I * r^pens_count

∴ Sn = I (r^0 + r^1 + .... + r^pens_count)
∴ Sn = I (1 + r^1 + .... + r^pens_count)
∴ Sn * r = I (r^1 + r^2 + .... + r^(pens_count+1))
∴ Sn * r = Sn - I + I * r^(pens_count+1)
∴ Sn (r - 1) = r^(pens_count+1) - I
∴ Sn (r - 1) + I = r^(pens_count+1)
∴ log(Sn (r - 1) + I) = (pens_count+1) log r
∴ pens_count = [log(Sn (r - 1) + I) / log r] - 1

double count_days() {
    unsigned final_population, initial, r;
    std::cin >> final_population >> initial >> r;
    return std::log(final_population * (r - 1) + initial) / std::log(r);
}


*/

unsigned count_days() {
    unsigned target, initial, rate, day, infected_population;

    std::cin >> target >> initial >> rate;
    day = 0u;
    infected_population = 0u;
    while (infected_population <= target) infected_population += initial * std::pow(rate, day++);

    return day - 1u;
}
