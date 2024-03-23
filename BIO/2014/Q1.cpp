//
// Created by Adam Saher on 2022-12-23.
//
#include <iostream>
#include "Q1.h"
void lucky_nums_rec(std::vector<unsigned>& odds, unsigned index) {
    if (odds[index] > odds.size())
        return;
    unsigned marker = odds[index];
    std::vector<unsigned> nxt_level;
    for(auto i = 0u; i < odds.size(); ++i)
        if ((i + 1) % marker != 0) nxt_level.push_back(odds[i]);
    odds.swap(nxt_level);
    lucky_nums_rec(odds, index + 1);
}


void lucky_nums(const unsigned& n) {
    std::vector<unsigned> odds, tmp;
    for (auto i = 1u; i < 10000u; i += 2u) odds.push_back(i);

    for (auto i = 3u; i < 10000u; i += 2u) {
        for (auto j = 0u; j < odds.size(); ++j) {
            if ((j + 1) % i != 0u) tmp.push_back(odds[j]);
        }
        odds.swap(tmp);
        tmp.clear();
    }
    for (auto i = 0u; i < odds.size(); ++i) {
        if (odds[i] > n) {
            std::cout << odds[i-1] << ' ' << odds[i];
            return;
        }
    }

}