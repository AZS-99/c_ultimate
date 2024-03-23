//
// Created by Adam Saher on 2022-08-19.
//

#include <fstream>
#include "J2.h"

const char* fish() {
    std::ifstream file("Data/CCC/2012/J2");

    unsigned value1, value2, value3, value4;
    file >> value1 >> value2 >> value3 >> value4;

    if (value1 > value2 && value2 > value3 && value3 > value4) return "Fish Diving";
    if (value1 < value2 && value2 < value3 && value3 < value4) return "Fish Rising";
    if (value1 == value2 && value2 == value3 && value3 == value4) return "Constant Depth";
    return "No Fish";
}