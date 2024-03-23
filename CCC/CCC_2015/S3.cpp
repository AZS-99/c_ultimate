//
// Created by Adam Saher on 2022-07-14.
//

#include <iostream>
#include "S3.h"

Collision::Collision(const char* filepath) {
    count = 0;
    file = std::ifstream(filepath);
    file >> gate_count;
    file >> plane_count;

    gates = std::vector<unsigned**>(gate_count + 1, nullptr);
}

unsigned Collision::count_till_collision() {
    unsigned index;
    for (auto i = 0u; i < plane_count; ++i) {

        file >> index;
        if (!gates[index]) occupy(index);
        else {
            index = **gates[index];
            if (index == 0u) return count;
            occupy(index);
        }
    }
    return count;
}


void Collision::occupy(unsigned int index) {
    ++count;
    gates[index] = new unsigned*;
    if (!(gates[index-1] || gates[index+1])) {
        *gates[index] = new unsigned[1];
        **gates[index] = index - 1;
    } else if (gates[index-1] && gates[index+1]) {
        gates[index] = gates[index+1];
        delete *gates[index];
        delete gates[index];
        *gates[index] = *gates[index-1];
    } else if (gates[index-1]) {
        gates[index] = gates[index-1];
    } else {
        gates[index] = gates[index+1];
        **gates[index] = index - 1;
    }
}
