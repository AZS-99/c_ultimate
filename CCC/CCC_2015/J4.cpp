//
// Created by Adam Saher on 2022-10-06.
//

#include <iostream>
#include "J4.h"

Texting::Texting() {
    unsigned rows, value;
    char ch;
    std::cin >> rows;
    for (auto i = 0u; i < rows; ++i) {
        std::cin >> ch >> value;
        if (ch == 'W') time += value - 1;
        else {
            ++time;
            if (ch == 'R') {
                time_stamps[value] = time;
                is_waiting[value] = true;
            } else if (ch == 'S') {
                wait_time[value] += time - time_stamps[value];
                is_waiting[value] = false;
            }
        }
    }
}

void Texting::run() {

}
