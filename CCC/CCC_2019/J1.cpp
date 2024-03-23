//
// Created by Adam Saher on 2022-08-20.
//

#include <fstream>
#include "J1.h"

char who_wins() {
    std::ifstream file("Data/2019/J1");
    unsigned score, total1, total2;

    for (auto i = 3; i > 0; --i) {
        file >> score;
        total1 += score * i;
    }

    for (auto i = 3; i > 0; --i) {
        file >> score;
        total2 += score * i;
    }

    if (total1 > total2) return 'A';
    if (total2 > total1) return 'B';
    return 'T';

}