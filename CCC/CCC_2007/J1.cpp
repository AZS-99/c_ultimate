//
// Created by Adam Saher on 2022-10-09.
//

#include "J1.h"

unsigned get_middle(const unsigned& a, const unsigned& b, const unsigned& c) {
    if (a < b && a > c || a < c && a > b) return a;
    if (b > a && b < c || b < a && b > c) return b;
    return c;
}