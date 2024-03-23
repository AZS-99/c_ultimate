//
// Created by Adam Saher on 2022-11-24.
//

#ifndef C_J5S3_H
#define C_J5S3_H


/*
The floor plan of a house shows rooms separated by walls. This floor plan can be transferred to a grid using the
character “I” for walls and “.” for room space. Doorways are not shown. Each “I” or “.” character occupies one square
metre.







In this diagram there are six rooms.

You have been given the floor plan of a house and a supply of hardwood flooring. You are to determine how many rooms
will have the flooring installed if you start installing the floor in the largest room first and move to the next
largest room, and so on. You may not skip over any room, and you must stop when you do not have enough wood for the next
room. Output the number of rooms that can have hardwood installed, and how many square metres of flooring are left over.
No room will be larger than 64 square metres.

The first line of the data file contains the number of square metres of flooring you have. The second line in the file
contains an integer r from 1 – 25 that represents the number of rows in the grid. The third line contains an integer c
from 1 – 25 that represents the number of columns in the grid. The remaining r lines contain c characters of grid data.

Sample Input 1
105
14
16
IIIIIIIIIIIIIIII
I......I.......I
I......III.....I
I........I.....I
I........IIIIIII
IIIIIIIIII.....I
I.I......I.....I
III..III.I.....I
I....I.IIIII...I
I....I.....III.I
I....I.......I.I
I....I.....III.I
I....I.....I...I
IIIIIIIIIIIIIIII
Output for Sample Input 1
4 rooms, 1 square metre(s) left over

Sample Input 2
13
2
3
.I.
.I.
Output for Sample Input 2
2 rooms, 9 square metre(s) left over


Sample Input 3
86
18
14
IIII.IIIIIIIII
I..I.IIII.IIII
I....III...III
I..I.II.....II
IIII.I.......I
I..I.II.....II
I....III...III
I..I.IIII.IIII
IIII.IIIIIIIII
IIIIIIIIIIIIII
IIIIIIIIIIIIII
I......I..I..I
I.IIII.IIIIIII
I.I..I.I..I..I
I.I..I.I..I..I
I.IIII.IIIIIII
I......I......
IIIIIIII......
Output for Sample Input 3
5 rooms, 2 square metre(s) left over

Sample Input 4
1000
25
25
IIIIIIIIIIIIIIIIIIIIIIIII
I......I................I
I.IIII.IIIIIIIIIIIIIIII.I
I.IIIIIIIIIIIIIIIIIIIIIII
I.III...........I....IIII
I.III.IIIIIIIIIII.II.IIII
I.III.IIIIIIIIIIIIII.IIII
I.III.II..........II.IIII
I.III.II.IIIIIIII.II.IIII
I.III.IIIIIIIIIII.II.IIII
I.III.............II.IIII
I.IIIIIIIIIIIIIIIIII.IIII
I....................IIII
IIIIIIIIIIIIIIIIIIIIIIIII
I.IIIIIIIIIIIIIIIIIIIIIII
I.III...........I....IIII
I.III.IIIIIIIIIII.II.IIII
I.III.IIIIIIIIIIIIII.IIII
I.III.II..........II.IIII
I.III.II.IIIIIIII.II.IIII
I.III.IIIIIIIIIII.II.IIII
I.III.............II.IIII
I.IIIIIIIIIIIIIIIIII.IIII
I....................IIII
IIIIIIIIIIIIIIIIIIIIIIIII
Output for Sample Input 4
5 rooms, 809 square metre(s) left over


*/
#include <iostream>
#include <array>
#include <vector>

class FlatNode {
    unsigned id = 0u;
    bool belongs = false;
    std::array<FlatNode*, 4> neighbours{};

public:
    friend class Flat;
    friend std::ostream& operator<<(std::ostream&, const FlatNode&);
};

class Flat {
    unsigned tiles;
    std::vector<std::vector<FlatNode*>> grid;
    std::vector<unsigned> room_sizes;
public:
    Flat();
    void contagious(FlatNode*);
    void run();
    friend std::ostream& operator<<(std::ostream&, const Flat&);

};





#endif //C_J5S3_H
