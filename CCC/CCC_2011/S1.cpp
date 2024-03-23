//
// Created by Adam Saher on 2022-07-16.
//

#include <fstream>
#include <iostream>
#include "S1.h"

bool is_english(const char* filename) {
    std::ifstream file(filename);
    char c;
    unsigned english = 0u, french = 0u;
    while (file.peek() != EOF) {
        file >> c;

        if (c == 't' || c == 'T') ++english;
        else if (c == 's' || c == 'S') ++french;
    }

    return english > french;
}
