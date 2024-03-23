//
// Created by Adam Saher on 2022-08-24.
//

#include "J3.h"

unsigned sumac(unsigned t1, unsigned t2) {
    unsigned tn, count = 2;
    while (t1 > t2) {
        tn = t1 - t2;
        t1 = t2;
        t2 = tn;
        count += 1;
    }
    return count;
}