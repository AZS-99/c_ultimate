//
// Created by Adam Saher on 2022-09-25.
//

#include <iostream>
#include "J2.h"

void count_rated_players() {
    unsigned players_count, scores, fouls, rated_count;
    std::cin >> players_count;

    rated_count = 0u;
    for (auto i = 0u; i < players_count; ++i) {
        std::cin >> scores >> fouls;
        if (scores * 5 - fouls * 3 > 40) ++rated_count;
    }
    std::cout << rated_count;
    if (rated_count == players_count) std::cout << '+';
}