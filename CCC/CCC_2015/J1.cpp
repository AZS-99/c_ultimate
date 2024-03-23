//
// Created by Adam Saher on 2022-08-19.
//

#include <iostream>
#include "J1.h"
const char* when() {

    unsigned month, day;

    std::cin >> month >> day;

    if (month == 1 || month == 2 && day < 18) return "Before";
    if (month > 2 || day > 18) return "After";
    return "Special";
}