//
// Created by Adam Saher on 2022-12-29.
//

#include "Q1.h"
char triangle(const std::string& str) {
    if (str.length() == 2u) {
        if (str[0] == str[1]) return str[0];
        if (str[0] != 'B' && str[1] != 'B') return 'B';
        if (str[0] != 'G' && str[1] != 'G') return 'G';
        return 'R';
    }


}