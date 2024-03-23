//
// Created by Adam Saher on 2022-09-18.
//

#include <iostream>
#include "J1.h"

void trident() {
    unsigned len, spacing, handle_len;
    std::cout << "Enter tine length:" << std::endl;
    std::cin >> len;
    std::cout << "Enter tine spacing:" << std::endl;
    std::cin >> spacing;
    std::cout << "Enter handle length:" << std::endl;
    std::cin >> handle_len;

    for (auto j = 0u; j < len; ++j) {
        std::cout << "*";
        for (auto i = 0u; i < spacing; ++i) std::cout << ' ';
        std::cout << "*";
        for (auto i = 0u; i < spacing; ++i) std::cout << ' ';
        std::cout << "*";
    }

}