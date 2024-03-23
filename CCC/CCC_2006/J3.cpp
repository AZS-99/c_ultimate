//
// Created by Adam Saher on 2022-11-15.
//

#include <iostream>
#include "J3.h"



PhonePad::PhonePad() {
    std::string word;
    std::cin >> word;
    while (word != "halt") {
        words.push_back(word);
        std::cin >> word;
    }
}

unsigned PhonePad::count_presses(const std::string& word) {
    auto count = 0u;
    char prev_char = '\0';
    for (const char& ch: word) {
        count += sub_index(ch) + 1u;  // sub_index return 0 for 'a'
        if (index(prev_char) == index(ch)) count += 2;
        prev_char = ch;
    }
    return count;
}


void PhonePad::run() { for (auto& word: words) std::cout << PhonePad::count_presses(word) << std::endl; }


unsigned PhonePad::index(const char& ch)  {
    if (ch < 's') return (ch - 'a') / 3 + 2u;
    if (ch == 's') return 7;
    if (ch >= 'w') return 9u;
    return 8u;
}

unsigned PhonePad::sub_index(const char& ch) {
    unsigned letter_index = ch - 'a';
    if (ch < 's') return letter_index % 3;
    if (ch == 's' || ch == 'z') return 4;
    return (letter_index - 1u) % 3; //remove the 's' from , and you get the correct pattern again
}
