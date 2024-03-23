//
// Created by Adam Saher on 2022-08-19.
//

#include <fstream>
#include <cmath>
#include "J2.h"

J2::J2() {
    std::ifstream file("Data/CCC/2011/J2");
    file >> humidity >> max_hrs;

}

unsigned J2::can_land_on_time() const {
    double altitude;
    for (auto t = 1u; t < max_hrs; ++t) {
        altitude = -6 * std::pow(t, 4) + humidity * std::pow(t, 3) + 2 * std::pow(t, 2) + t;
        if (altitude < 0.0) return t;
    }
    return 0;
}
