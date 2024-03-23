//
// Created by Adam Saher on 2022-06-27.
//

#ifndef CCC_J4_H
#define CCC_J4_H


/*
A spiral of numbers can start and end with any positive integers less than 100. Write a program which will accept two
positive integers x and y as input, and output a list of numbers from x to y inclusive, shown in a spiral. You may
assume that the end value is greater than or equal to the start value.
A spiral starts with the first number in the centre. The next number appears immediately below the first number. The
spiral continues with the numbers increasing in a counter- clockwise direction until the last number is printed.
Read the input from the keyboard and display the output on the screen. Sample session: (User input in italics)

Start value:
10
End value:
27

      27 26
16 15 14 25
17 10 13 24
18 11 12 23
19 20 21 22

20 19 18 17 16 35
21 06 05 04 15 34
22 07 00 03 14 33
23 08 01 02 13 32
24 09 10 11 12 31
25 26 27 28 29 30

Input starting value:
7
Input end value:
12
12 11
 7 10
 8  9
 */


#include <vector>

class Spiral {
    std::vector<std::vector<unsigned>> spiral;
    unsigned start, end;
public:
    Spiral();
    std::pair<unsigned, unsigned> find_dimensions() const;
};


#endif //CCC_J4_H
