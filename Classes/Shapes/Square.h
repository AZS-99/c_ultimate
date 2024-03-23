//
// Created by Adam Saher on 2024-03-20.
//

#ifndef C_SQUARE_H
#define C_SQUARE_H


#include "polygon.h"

class Square : public Polygon {
public:
    Square(const double&);
    [[nodiscard]] double perimeter() const override;
    [[nodiscard]] double area() const;
};


#endif //C_SQUARE_H
