//
// Created by Adam Saher on 2022-08-19.
//

#include <fstream>
#include "J1.h"
int assign_groups() {
    std::ifstream file("Data/CCC/2016/J1");
    char ch;
    auto count = 0u;
    for (auto i = 0u; i < 6; ++i) {
        file >> ch;
        if (ch == 'W') ++count;
    }
    if (count == 5 || count == 6) return 1;
    if (count == 3 || count == 4) return 2;
    if (count == 1 || count == 2) return 3;
    return -1;
}