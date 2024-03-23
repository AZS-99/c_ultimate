//
// Created by Adam Saher on 2022-10-12.
//

#include <iostream>
#include "J4.h"

// ch2 = ch1 + S
// ch2 = ch1 + 3P + k
// ch2 = ch1 + 3(i+1) + k
// ch1 = ch2 - 3(i+1) - k

void decipher() {
    std::string str;
    char ch, original_ch;
    unsigned k;
    std::cin >> k >> str;

    for (auto i = 0u; i < str.length(); ++i) {
        ch = str[i];
        original_ch = (char) ((ch - 3 * (i + 1) - k))  ;
        if (original_ch < 65) original_ch = (char) ('Z' - ('A' - original_ch) + 1);
        std::cout << original_ch ;

    }
}