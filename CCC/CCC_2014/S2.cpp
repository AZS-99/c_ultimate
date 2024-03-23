//
// Created by Adam Saher on 2022-08-21.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include "S2.h"

S2::S2() {
    std::ifstream file("Data/CCC/2014/S2");
    file >> count;
    friends1 = std::vector<std::string>(count);
    friends2 = std::vector<std::string>(count);
    std::string line, name;
    std::stringstream ss;

    for (auto i = 0u; i < count; ++i) file >> friends1[i];
    for (auto i = 0u; i < count; ++i) file >> friends2[i];



}

bool S2::is_consistent() {
    std::string name1, name2;
    for (auto i = 0; i < count; ++i) {
        if (map.contains(friends1[i])) return false;
        if (map.contains(friends2[i])) {
            if (map.at(friends2[i]) != friends1[i]) return false;
            map.erase(friends2[i]);
        } else map.insert(std::make_pair(friends1[i], friends2[i]));
    }
    return map.empty();
}
