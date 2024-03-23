//
// Created by Adam Saher on 2022-08-24.
//

#include <iostream>
#include <string>
#include <array>
#include "J3.h"
#include "../CCC_2009/J3.h"


void punch() {
    std::array<int, 2> arr{};
    unsigned command;
    int value;
    char ch1, ch2;

    std::cin >> command;
    while (command != 7u) {
        if (command == 2u) {
            std::cin >> ch1;
            std::cout << arr[ch1 - 'A'];
        }
        else if (command == 1u) {
            std::cin >> ch1 >> value;
            arr[ch1 - 'A'] = value;
        }
        else {
            std::cin >> ch1 >> ch2;
            if (command == 3u) arr[ch1 - 'A'] += arr[ch2 - 'A'];
            else if (command == 4u) arr[ch1 - 'A'] *= arr[ch2 - 'A'];
            else if (command == 5u) arr[ch1 - 'A'] -= arr[ch2 - 'A'];
            else if (command == 6u) arr[ch1 - 'A'] /= arr[ch2 - 'A'];
        }
        std::cin >> command;
    }
}


