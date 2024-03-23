//
// Created by Adam Saher on 2022-09-27.
//

#include <string>
#include <iostream>
#include "J3.h"

void secret_instructions() {
    std::string line;
    bool turn;
    unsigned digit1, digit2;
    std::cin >> line;
    while(line != "99999") {
        digit1 = line[0] - '0';
        digit2 = line[1] - '0';
        if (digit1 + digit2 > 0) turn = ((digit1 + digit2) % 2 == 0);

        std::cout << (turn? "right" : "left") << line.substr(2) << std::endl;
        std::cin >> line;
    }
}