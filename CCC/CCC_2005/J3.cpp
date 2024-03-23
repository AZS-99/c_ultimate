//
// Created by Adam Saher on 2022-09-18.
//

#include <string>
#include <iostream>
#include <list>
#include "J3.h"
void get_directions() {
    std::list<std::string> lines;
    std::string line;

    std::cin >> line;
    while (line != "SCHOOL") {
        lines.push_back(line);
        std::cin >> line;
    }
    

    for (auto i = 0u; i < lines.size() / 2 + 1; ++i) {
        if (lines.back() == "L") std::cout << "Turn right onto ";
        else if (lines.back() == "R") std::cout << "Turn left onto ";
        lines.pop_back();
        std::cout << lines.back() << std::endl;
        lines.pop_back();
    }

    if (lines.back() == "L") std::cout << "Turn right into your home";
    else if (lines.back() == "R") std::cout << "Turn left into your home";



}