//
// Created by Adam Saher on 2022-08-19.
//

#include <fstream>
#include "J2.h"
unsigned common_car_spots() {
    std::ifstream file("Data/CCC/2018/J2");

    unsigned spots, count = 0;
    std::string cars1, cars2;
    file >> spots >> cars1 >> cars2;

    for (auto i = 0; i < spots; ++i)
        if (cars1[i] == 'C' && cars2[i] == 'C') ++count;

    return count;
}