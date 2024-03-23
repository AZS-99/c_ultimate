//
// Created by Adam Saher on 2022-09-23.
//

#include <iostream>
#include "J2.h"
void to_canadian() {
    std::string str;
    std::cin >> str;
    unsigned len ;
    while (str != "quit!") {
        len = str.length();
        std::cout << str.substr(0, str.length() - 2);
        std::cout << (len > 4 && str.substr(len - 2) == "or"? "our" : str.substr(len-2)) << std::endl;
        std::cin >> str;
    }


}