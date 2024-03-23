//
// Created by Adam Saher on 2022-09-23.
//

#include <string>
#include <iostream>
#include "J4.h"


std::pair<unsigned, unsigned> estimate_arrival() {
    std::string time;
    unsigned hrs, mins;
    std::cin >> time;

    hrs = std::stoul(time.substr(0, 2));
    mins = std::stoul(time.substr(3));
    mins = hrs * 60 + mins;


    int counter = 240;
    while (counter > 0) {

        if (mins >= 7 * 60 && mins <= 10 * 60 || mins >= 15 * 60 && mins <= 19 * 60) counter -= 1;
        else counter -= 2;
        ++mins ;
        mins %= 1440;
    }
    return std::make_pair((mins / 60) % 24, mins % 60);

}