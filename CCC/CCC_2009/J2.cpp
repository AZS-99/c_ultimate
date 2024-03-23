//
// Created by Adam Saher on 2022-09-02.
//

#include <iostream>
#include "J2.h"

unsigned combinations() {
    unsigned trouts, pikes, pickerels, points, count = 0u;

    std::cin >> trouts >> pikes >> pickerels >> points;

    unsigned max_trouts = points/trouts;
    unsigned max_pikes = points/pikes;
    unsigned max_pickerels = points/pickerels;

    for (auto t = 0u; t < max_trouts + 1; ++t) {
        for (auto p = 0u; p < max_pikes + 1; ++p) {
            for (auto pk = 0u; pk < max_pickerels + 1; ++pk) {
                if (t + p + pk > 0 && t * trouts + p * pikes + pk * pickerels <= points) {
                    ++count;
                    std::cout << t << " trouts, " << p << " pikes, " << pk << " pickerels" << std::endl;
                }
            }
        }
    }
    return count;
}