//
// Created by Adam Saher on 2022-10-21.
//

#include <string>
#include <iostream>
#include "J4.h"

bool is_arithmetic(const std::string& str) {
    auto difference = str[1] - str[0];
    for (auto i = 0u; i < str.length() - 1; ++i)
        if (str[i + 1] - str[i] != difference) return false;
    return true;
}


unsigned count_arithmetic_seq() {
    unsigned minutes, hrs, mins, count, days;
    std::cin >> minutes;

    days = minutes / 1440;
    minutes = minutes % 1440;

    count = 0u;
    for (auto i = 0u; i < minutes + 1; ++i) {
        hrs = (minutes / 60) % 12;
        if (hrs == 0) hrs = 12;
        mins = minutes % 60;

//        std::format("{:02}", mins);


    }
}