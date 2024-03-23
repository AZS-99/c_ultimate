//
// Created by Adam Saher on 2022-08-19.
//

#include <fstream>
#include "J1.h"
unsigned quadrants() {
    std::ifstream file("Data/CCC/2017/J1");
    int x, y;
    file >> x >> y;
    if (x < 0) {
        if (y < 0) return 3;
        return 2;
    } else {
        if (y < 0) return 4;
        return 1;
    }
}
