//
// Created by Adam Saher on 2022-10-06.
//

#include <iostream>
#include "J4.h"

std::vector<unsigned> eliminate() {
    unsigned len, rounds, step;

    std::cin >> len >> rounds;
    std::vector<unsigned> people(len), survived;
    for (auto i = 0u; i < len; ++i) people[i] = i;

    for (auto i = 0u; i < rounds; ++i) {
        std::cin >> step;
        for(auto j = 0u; j < people.size(); ++j) if ((j+1) % step != 0) survived.push_back(people[j]);
        people.swap(survived);
        survived.clear();
    }
    return people;
}