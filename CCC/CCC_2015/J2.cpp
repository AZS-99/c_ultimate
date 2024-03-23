//
// Created by Adam Saher on 2022-08-26.
//

#include <algorithm>
#include <iostream>
#include "J2.h"

std::string count_emojis(const std::string& str) {
    unsigned long begin_search_index = 0u;
    unsigned happy_count = 0u, sad_count = 0u;

    while (true) {
        begin_search_index = str.find(":-", begin_search_index);
        if (begin_search_index == std::string::npos) break;
        begin_search_index += 2;
        if (str[begin_search_index] == ')') ++happy_count;
        else if (str[begin_search_index] == '(') ++sad_count;
    }

    std::cout << happy_count << sad_count << std::endl;

    if (happy_count == sad_count && sad_count == 0u) return {"None"};
    if (happy_count > sad_count) return {"Happy"};
    if (happy_count < sad_count) return {"Sad"};

    return {"Unsure"};
}