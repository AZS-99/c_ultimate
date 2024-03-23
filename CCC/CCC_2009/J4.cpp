//
// Created by Adam Saher on 2022-11-08.
//

#include <iostream>
#include <chrono>
#include <thread>
#include "J4.h"

Sign::Sign() {
    std::cin >> width;


}

void Sign::run()  {
    unsigned last_word_value = 0u;
    unsigned extra_stops, trailing_stops;

    auto i = 0u;
    while (sum_vec[i] < width) ++i;

    extra_stops = (width - sum_vec[i - 1]) / (i - 1);
    trailing_stops = (width - sum_vec[i - 1]) % (i - 1);

    for (auto j = 0u; j < i - 1; ++j) {
        std::cout << words[j] << '.';
        for (auto k = 0u; k < extra_stops + (j < trailing_stops? 1 : 0); ++k) std::cout << '.';
    }
    std::cout << words[i - 1];

}
