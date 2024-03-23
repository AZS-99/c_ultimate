//
// Created by Adam Saher on 2024-03-20.
//

#ifndef C_POLYGON_H
#define C_POLYGON_H

/*
Adding a data member for the number of sides would unnecessarily use more memory for every child object. Classes like
Square, pentagon, hexagon, ... do NOT need such a data member.

The point of having an abstract class is to be able to create an array of polygons
 */


class Polygon {
protected:
    double length;
public:
    Polygon(const double&);
    virtual ~Polygon(){}
    virtual double perimeter() const = 0;

};


#endif //C_POLYGON_H
