//
// Created by Adam Saher on 2022-08-26.
//

#include "J1.h"

Triangle triangle_type(const unsigned& angle1, const unsigned& angle2, const unsigned& angle3) {
    if (angle1 + angle2 + angle3 == 180) {
        if (angle1 == angle2 == angle3) return Triangle::Equilateral;
        if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1) return Triangle::Isosceles;
        return Triangle::Scalene;
    }
    return Triangle::Error;
}