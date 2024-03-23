//
// Created by Adam Saher on 2022-12-14.
//

#ifndef C_S3_H
#define C_S3_H

#include <array>
#include <string>

/*
A spreadsheet consists of a number of "cells" set in a rectangular grid. Each is addressed with one letter from A to J
(giving the row) and one number from 1 to 9 (giving the column); thus, the upper-left cell of the spreadsheet is A1, and
the lower-right cell is J9.
Every cell has a value, and this can be specified in one of two ways:
1) as an integer from 0 to 1000
2) as a sum of the values of up to 10 other cells

Cell values may be interdependent (that is, A1's sum may depend on B6 which depends on C9), but a cell whose value
depends on itself, directly or indirectly, is undefined (e.g., A1 depending on G8 depending on A1). Also, a cell whose
value depends on an undefined cell is itself undefined. You are given the specification for all the cells in the
spreadsheet. Compute and output the values of all of the cells.

Input
Input will consist of 10 lines, one per spreadsheet row. Each line contains 9 descriptions of a cell, which will be
either an integer between 0 and 1000, or a sum of 1 to 10 distinct cell names separated by a “+” symbol
(e.g. “A1+B5+D3”).
Output
Output 10 lines, with 9 numbers per line, giving the value of every cell in the spreadsheet; if the cell is undefined,
print an asterisk (*) in place of its value. No cell's final value will exceed 1 000 000 000.

Sample Input 1
1 2 3 A1+A2+A3 A3+A4 A1+A4+A5 A8+A9 A9 A8
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0

Output for Sample Input 1
1 2 3 6 9 16 * * *
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0


Sample Input 2
0 10 100 1000 1 1 A6 J8+A5 A1+A8
A5 A6+A2 A7+A3+A2 A9+A4+A3+A2 A8+A9+A1 A7+A8 A6+A9+A1 A6+A8 A7+A9+A1
2 B2+A2+B1 A3+B3+B2 2222 A6+A8+A9 A9+A8+A7 A8+A7+B1 B8+A5+J9 A8+A5+A6
C1+B1 B2+A2+A8+B1+J1+A9+J6+J7+J8+J9 333 B4+C4 4 4 D6+J9 A5+A6+A7+A8 B8+B7+J8
D1+A8 D2+I1+B1+A8+A7 444 D4+A1+A2+A3+A4+A5 5 B1+D5 A5+A6+A7+A8+A9 C8+B8 D6+A9
C1+B1+J8+A8+A9 55 A3+A2+A9+E3 E4+A4+B3 6 F9+J8+J9 E5+A9 A5+A6+A7+A8+A9+B1 6
6 E2+C2 E3+J5+C3 6666 A5+A6+A7+A8+A9+B5 G1+A9 H1 7 D1+D8
J5+G1+A7 F2+A2+B1+B2 E3+D3 D4+J6+E4 I1 8 D9+D7 H9 I1+J5+J6+J7+J8+J9
G1+C1+J8 H2+B2 H3+A3+B2 F4+J3+I3+H3+G3+A9+B1+A6 C6+C8+C9 D6+F1 9 A5+A6+A7+A8+A9+B1+D1 I7+J9+A1
A5+A6+A7+A8+A9+B1+D1 E2+F2 I2+I3+I1+A2+A5+A6+A7+A8+A9 I4+A1+B2+A3+A4+J8 J9 A1 0 A1+J9 J6

Output for Sample Input 2
0 10 100 1000 1 1 1 1 1
1 11 111 1111 2 2 2 2 2
2 22 222 2222 3 3 3 3 3
3 33 333 3333 4 4 4 4 4
4 44 444 4444 5 5 5 5 5
5 55 555 5555 6 6 6 6 6
6 66 666 6666 7 7 7 7 7
7 77 777 7777 8 8 8 8 8
8 88 888 8888 9 9 9 9 9
9 99 999 9999 0 0 0 0 0

Sample Input 3
1 E3+I7+C9+D7+J8+G3+B3+F3+E4+I6 E5+G1+J6+A6+G7+E2+D3+I2+G3+A7 D3+F5+I7+G3+A1+C7+I9+F6+B1+G9 B2+H3+G2+A8+H6+H7+B8+F5+F9+B7 G3+H3+A7+A5+J4+B7+D2+F5+B3+I1 A9+H1+I2+A3+H9+J3+I3+I8+D2+B1 H2+F7+I7+A4+I4+D6+C1+J5+G3+D5 G1+F3+C4+I6+I9+A3+F2+C9+C7+I3
D8+J6+I1+J9+J1+C9+J3+F9+G2+A7 G1+H2+J4+E8+F8+F7+G8+B9+J5+I1 E7+F3+I6+D3+B9+G8+D4+I4+B6+F1 E9+C7+G7+C8+F4+H6+E6+I6+D9+I3 F5+F7+A9+H6+I3+C3+H4+J9+H8+E8 B3+H9+C3+A6+F5+D6+G6+A2+F9+E8 E2+H5+G2+G8+I1+H2+C2+D2+F1+E6 C8+E8+B1+H5+C5+J6+A5+B6+D9+F9 E7+I5+I9+J9+H3+A4+H2+J4+A8+D5
F2+G6+H6+G9+C2+H7+G7+J4+D5+G2 F3+E4+C4+I1+D7+J6+C3+F6+D3+I5 B4+D9+G3+J4+C1+H3+G2+F5+A2+G5 D3+I7+D1+I3+A1+C6+B7+C3+D6+F3 D5+E9+E5+H4+C1+J1+F8+B2+C4+F3 E5+D9+G1+I2+D1+C4+J7+B2+A6+H7 D2+E5+G4+B9+I7+A6+D6+I8+F1+F3 D4+J3+F2+H9+C9+H5+A8+D6+D1+I5 F7+I3+A7+J1+B4+G7+I5+F1+E9+G3
F7+C6+B5+C3+F9+F1+G9+G7+D6+G5 E1+F5+F7+G5+H2+A4+F8+G2+C6+G9 E5+E6+I3+G7+G5+D2+I5+F6+C4+A7 C3+F8+B7+H3+F6+I1+E9+I3+C8+B2 A5+J5+A4+E7+F7+J9+F4+E2+E3+I3 G7+D8+B5+D4+D7+I1+I3+D1+H7+E1 G2+J1+F7+G1+A1+C7+E9+E1+H7+I4 G2+E8+B5+G9+E2+A9+H8+D1+I5+E4 J5+C4+I2+C6+C7+E3+F1+D1+G2+I6
G2+G3+J6+A1+I5+C1+F4+A6+I1+I8 E1+J8+E4+F1+G3+F2+D1+C5+A6+I5 H1+F4+E8+I5+H6+D5+B6+E4+H5+B3 E1+A6+A4+F8+J8+J4+B7+A5+G1+J5 C2+A9+C3+E6+F5+A7+A1+C5+H7+C6 F1+D6+H1+I6+G4+J1+A1+E3+G9+C7 C7+B1+A7+D2+A8+I8+D1+H7+D3+H4 B8+E3+D2+F5+H6+A1+J6+C2+F8+H2 C9+E5+H5+H9+J6+B3+C7+J9+A4+A1
I3+G7+I1+B1+B6+F4+A9+B9+A4+D9 I9+I1+A8+G8+A3+C3+E6+D9+H5+H9 I8+A4+A1+J6+H9+A3+B4+D3+I2+E2 G2+B1+F8+I7+B8+D7+A6+A4+A7+A5 I5+D8+D1+B5+E7+A6+B3+I7+H4+C1 I1+I6+G8+A8+B1+G4+J5+H5+G1+B5 G7+G3+D4+D5+E8+I9+I8+J4+F6+F5 A7+B6+D7+H6+G2+G4+J2+A6+F3+C9 I5+C8+J1+H2+H1+C5+A6+F3+J4+B5
D6+I3+G2+B4+F4+H8+H3+E1+B3+C9 C5+I7+F3+I9+A1+J3+D2+D8+B5+F6 C9+G2+F6+H8+J6+G8+I8+C1+B4+B7 H3+E9+A8+I9+J1+F4+G9+F6+I5+E7 C5+I5+E8+I7+H2+H8+A8+B1+F5+G9 G3+B5+H7+E8+B4+B1+E1+C9+F8+B8 J5+A4+I4+A7+J9+F2+F4+G2+G8+B1 C3+G7+C6+C8+A8+G9+D1+A4+D9+G5 F2+I9+B4+D5+A7+F7+H4+J8+C6+C2
E5+H2+C1+E4+J4+J7+D9+A3+D4+E9 B8+H8+D1+B4+C3+F2+F7+J3+D4+B9 E2+H2+C8+D7+D5+F8+D9+F7+I1+E3 F9+J2+C2+I1+E5+J7+F7+A7+E7+D3 E7+C7+I8+H8+F3+D2+G4+B7+F6+A5 E4+H2+D4+A5+F4+J4+H7+G9+G8+F8 J4+F3+J5+I6+B2+J8+B4+J6+H9+D9 D6+D4+H4+G2+C8+C5+B7+B5+D7+G7 D1+I4+H2+H8+H5+G8+H1+D7+C5+B4
D9+F1+B2+F8+I7+G8+C7+J4+A8+J2 A9+I4+I3+A4+H4+B3+D4+F7+C5+B1 D1+A9+B3+E7+J2+C7+E2+C8+B6+C9 J1+B2+I7+B7+E5+D2+C5+D3+D6+I5 D7+H3+I3+B6+F1+I9+C3+F2+A7+C4 I9+D5+A7+H4+G7+C1+H2+B1+D2+C2 A5+D1+B7+J4+B2+A3+B6+G6+B1+F2 I7+J6+B5+B7+C8+F8+D4+F6+E2+A9 E7+G8+I8+H4+H2+D3+A6+F5+E9+D1
E4+I1+H8+J3+I9+D1+E8+D4+E2+G3 F9+H5+G2+J4+I5+E7+G7+J7+E5+A7 G4+F3+C7+B4+C5+J8+D5+I5+C1+A3 H5+E5+D6+F8+F3+G1+A1+H4+E4+E9 D4+C1+J8+F3+C6+D6+I6+F2+C8+I4 C1+D9+H4+G8+I4+A6+E5+I2+E8+H3 C9+G9+J5+F9+J8+B4+E4+F3+I8+B9 C7+H9+J2+A3+H6+E2+J9+D3+E4+D5 H2+A2+I4+I5+G9+E5+E8+J1+G6+C9

Output for Sample 3
1 * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *


Sample Input 4
A2+A3+A4+A5+A6+A7+A8+A9+B1+B2 A3+A4+A5+A6+A7+A8+A9+B1+B2+B3 A4+A5+A6+A7+A8+A9+B1+B2+B3+B4 A5+A6+A7+A8+A9+B1+B2+B3+B4+B5 A6+A7+A8+A9+B1+B2+B3+B4+B5+B6 A7+A8+A9+B1+B2+B3+B4+B5+B6+B7 A8+A9+B1+B2+B3+B4+B5+B6+B7+B8 A9+B1+B2+B3+B4+B5+B6+B7+B8+B9 B1+B2+B3+B4+B5+B6+B7+B8+B9+C1
B2+B3+B4+B5+B6+B7+B8+B9+C1+C2 B3+B4+B5+B6+B7+B8+B9+C1+C2+C3 B4+B5+B6+B7+B8+B9+C1+C2+C3+C4 B5+B6+B7+B8+B9+C1+C2+C3+C4+C5 B6+B7+B8+B9+C1+C2+C3+C4+C5+C6 B7+B8+B9+C1+C2+C3+C4+C5+C6+C7 B8+B9+C1+C2+C3+C4+C5+C6+C7+C8 B9+C1+C2+C3+C4+C5+C6+C7+C8+C9 C1+C2+C3+C4+C5+C6+C7+C8+C9+D1
C2+C3+C4+C5+C6+C7+C8+C9+D1+D2 C3+C4+C5+C6+C7+C8+C9+D1+D2+D3 C4+C5+C6+C7+C8+C9+D1+D2+D3+D4 C5+C6+C7+C8+C9+D1+D2+D3+D4+D5 C6+C7+C8+C9+D1+D2+D3+D4+D5+D6 C7+C8+C9+D1+D2+D3+D4+D5+D6+D7 C8+C9+D1+D2+D3+D4+D5+D6+D7+D8 C9+D1+D2+D3+D4+D5+D6+D7+D8+D9 D1+D2+D3+D4+D5+D6+D7+D8+D9+E1
D2+D3+D4+D5+D6+D7+D8+D9+E1+E2 D3+D4+D5+D6+D7+D8+D9+E1+E2+E3 D4+D5+D6+D7+D8+D9+E1+E2+E3+E4 1 D6+D7+D8+D9+E1+E2+E3+E4+E5+E6 D7+D8+D9+E1+E2+E3+E4+E5+E6+E7 D8+D9+E1+E2+E3+E4+E5+E6+E7+E8 D9+E1+E2+E3+E4+E5+E6+E7+E8+E9 E1+E2+E3+E4+E5+E6+E7+E8+E9+F1
E2+E3+E4+E5+E6+E7+E8+E9+F1+F2 E3+E4+E5+E6+E7+E8+E9+F1+F2+F3 E4+E5+E6+E7+E8+E9+F1+F2+F3+F4 E5+E6+E7+E8+E9+F1+F2+F3+F4+F5 E6+E7+E8+E9+F1+F2+F3+F4+F5+F6 E7+E8+E9+F1+F2+F3+F4+F5+F6+F7 E8+E9+F1+F2+F3+F4+F5+F6+F7+F8 E9+F1+F2+F3+F4+F5+F6+F7+F8+F9 F1+F2+F3+F4+F5+F6+F7+F8+F9+G1
F2+F3+F4+F5+F6+F7+F8+F9+G1+G2 F3+F4+F5+F6+F7+F8+F9+G1+G2+G3 F4+F5+F6+F7+F8+F9+G1+G2+G3+G4 F5+F6+F7+F8+F9+G1+G2+G3+G4+G5 F6+F7+F8+F9+G1+G2+G3+G4+G5+G6 F7+F8+F9+G1+G2+G3+G4+G5+G6+G7 F8+F9+G1+G2+G3+G4+G5+G6+G7+G8 F9+G1+G2+G3+G4+G5+G6+G7+G8+G9 G1+G2+G3+G4+G5+G6+G7+G8+G9+H1
G2+G3+G4+G5+G6+G7+G8+G9+H1+H2 G3+G4+G5+G6+G7+G8+G9+H1+H2+H3 G4+G5+G6+G7+G8+G9+H1+H2+H3+H4 G5+G6+G7+G8+G9+H1+H2+H3+H4+H5 G6+G7+G8+G9+H1+H2+H3+H4+H5+H6 G7+G8+G9+H1+H2+H3+H4+H5+H6+H7 G8+G9+H1+H2+H3+H4+H5+H6+H7+H8 G9+H1+H2+H3+H4+H5+H6+H7+H8+H9 H1+H2+H3+H4+H5+H6+H7+H8+H9+I1
H2+H3+H4+H5+H6+H7+H8+H9+I1+I2 H3+H4+H5+H6+H7+H8+H9+I1+I2+I3 H4+H5+H6+H7+H8+H9+I1+I2+I3+I4 H5+H6+H7+H8+H9+I1+I2+I3+I4+I5 H6+H7+H8+H9+I1+I2+I3+I4+I5+I6 H7+H8+H9+I1+I2+I3+I4+I5+I6+I7 H8+H9+I1+I2+I3+I4+I5+I6+I7+I8 H9+I1+I2+I3+I4+I5+I6+I7+I8+I9 I1+I2+I3+I4+I5+I6+I7+I8+I9+J1
I2+I3+I4+I5+I6+I7+I8+I9+J1+J2 I3+I4+I5+I6+I7+I8+I9+J1+J2+J3 I4+I5+I6+I7+I8+I9+J1+J2+J3+J4 I5+I6+I7+I8+I9+J1+J2+J3+J4+J5 I6+I7+I8+I9+J1+J2+J3+J4+J5+J6 I7+I8+I9+J1+J2+J3+J4+J5+J6+J7 I8+I9+J1+J2+J3+J4+J5+J6+J7+J8 I9+J1+J2+J3+J4+J5+J6+J7+J8+J9 J1+J2+J3+J4+J5+J6+J7+J8+J9
J2+J3+J4+J5+J6+J7+J8+J9 J3+J4+J5+J6+J7+J8+J9 J4+J5+J6+J7+J8+J9 J5+J6+J7+J8+J9 J6+J7+J8+J9 J7+J8+J9 J8+J9 0 0

Output for Sample Input 4
531372800 265816832 132973664 66519472 33276064 16646200 8327186 4165637 2083841
1042432 521472 260864 130496 65280 32656 16336 8172 4088
2045 1023 512 256 128 64 32 16 8
4 2 1 1 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
*/

#include <vector>
#include <string>
#include <limits>

class SheetNode {
    std::vector<std::string> sum;
    unsigned value = std::numeric_limits<unsigned>::max();
    bool visited = false;
    friend class SpreadSheet;
public:
    SheetNode(const unsigned&);
    SheetNode(const std::string&);
    friend std::ostream& operator<<(std::ostream&, const SheetNode&);


};


class SpreadSheet {
    std::array<std::array<SheetNode*, 9>, 10> values{};
public:
    SpreadSheet();
    void evaluate_grid();
    void evaluate_node(SheetNode*);
    friend std::ostream& operator<<(std::ostream&, const SpreadSheet&);
};



#endif //C_S3_H
