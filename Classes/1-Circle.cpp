//
// Created by Adam Saher on 2024-03-20.
//

#include <cmath>
#include "1-Circle.h"

Circle::Circle(const double& radius) {
    this->radius = radius;
}


double Circle::circumference() const {
    return 2 * M_PI * radius;
}


double Circle::area() const {
    return M_PI * std::pow(radius, 2);
}