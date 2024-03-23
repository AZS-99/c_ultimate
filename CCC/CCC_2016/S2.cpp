//
// Created by Adam Saher on 2022-05-13.
//

#include <fstream>
#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
#include "S2.h"

unsigned read(){
    std::ifstream file("Data/CCC_2016/S2");
    unsigned type, len;

    file >> type;
    file >> len;

    std::vector<unsigned> dmojistan(len);
    std::vector<unsigned> pegland(len);
    std::vector<unsigned> resultant(len);

    for (auto i = 0u; i < len; ++i) file >> dmojistan[i];
    for (auto i = 0u; i < len; ++i) file >> pegland[i];

    std::sort(dmojistan.begin(), dmojistan.end());
    if (type == 1) std::sort(pegland.begin(), pegland.end());
    else std::ranges::sort(pegland, std::greater<>());
    std::transform(dmojistan.cbegin(), dmojistan.cend(), pegland.cbegin(), resultant.begin(), [] (unsigned a, unsigned b) {
        return std::max(a, b);
    });
    auto count = 0u;
    return std::accumulate(resultant.cbegin(), resultant.cend(), count);
}