//
// Created by Adam Saher on 2022-09-09.
//


#include "J2.h"

std::unordered_map<std::string, std::string> Emoji::emojis{
        { "CU", "see you"},
        {":-)", "I'm happy"},
        {";-)", "wink"},
        {":-P", "stick out the tongue"},
        {"(~.~)", "sleepy"},
        {"TA", "totally awesome"},
        {"CCC", "Canadian Computation Competition"},
        {"CUZ", "because"},
        {"TY", "thank you"},
        {"YW", "you are welcome"},
        {"TTYL", "talk to you later"}
};

Emoji::Emoji() {
    std::string word;
    do {
        std::cout << "Enter phrase>";
        std::cin >> word;
        if (!emojis.contains(word)) std::cout << word << std::endl;
        else std::cout << emojis[word] << std::endl;
    } while(word != "TTYL");
}

