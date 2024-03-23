//
// Created by Adam Saher on 2024-03-20.
//

#ifndef C_CIRCLE_H
#define C_CIRCLE_H


class Circle {
    double radius;
public:
    Circle(const double&);
    [[nodiscard]] double circumference() const;
    [[nodiscard]] double area() const;
};


#endif //C_CIRCLE_H


/*
The 'const' appending the method means that this method is only a query, not a mutator.


[[nodiscard]] will instruct the compiler to give you a warning if you don't use the return value.
For instance, the following code is syntactically correct:

int r = 10;
Circle circle(r);
circle.circumference();

In this case, the compiler will give you a warning.
*/