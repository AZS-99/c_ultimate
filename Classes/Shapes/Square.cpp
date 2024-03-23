//
// Created by Adam Saher on 2024-03-20.
//

#include <cmath>
#include "Square.h"

Square::Square(const double& len) : Polygon(len){}


double Square::area() const {
    return std::pow(length, 2);
}



double Square::perimeter() const {
    return 4 * length;
}

