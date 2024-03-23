//
// Created by Adam Saher on 2022-10-18.
//

#include <string>
#include <iostream>
#include "J3.h"

bool is_vowel(const char& ch) { return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; }

void robbers() {
    std::string word;
    char closest_vowel, next_consonant;
    std::cin >> word;

    for (auto ch: word) {
        if (is_vowel(ch)) std::cout << ch;
        else {
            if (ch < 'e') closest_vowel = 'e' - ch < ch - 'a'? 'e' : 'a';
            else if (ch < 'i') closest_vowel = 'i' - ch < ch - 'e'? 'i' : 'e';
            else if (ch < 'o') closest_vowel = 'o' - ch < ch - 'i'? 'o' : 'i';
            else if (ch < 'u') closest_vowel = 'u' - ch < ch - 'o'? 'u' : 'o';
            else closest_vowel = 'u';

            if (ch == 'z') next_consonant = 'z';
            else next_consonant = is_vowel(ch + 1u)? ch + 2u : ch + 1u;

            std::cout << ch << closest_vowel << next_consonant;
        }



    }
}