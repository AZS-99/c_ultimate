//
// Created by Adam Saher on 2022-08-31.
//

#include <iostream>
#include "J3.h"

Time::Time() {
    unsigned time;
    std::cin >> time;
    hr = time/100;
    min = time % 100;
}

std::pair<unsigned, unsigned> Time::get_victoria() const {
    int pure_mins = hr * 60 + min;
    int victoria_time = pure_mins - 180u;
    if (victoria_time < 0) victoria_time = 1440 + victoria_time;
    return std::make_pair(victoria_time / 60, victoria_time % 60);
}


