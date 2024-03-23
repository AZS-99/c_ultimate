//
// Created by Adam Saher on 2022-11-30.
//

#ifndef C_J4_H
#define C_J4_H

#include <array>
#include <vector>

/*
In an old house there is a room that is shaped like a cross. You can think of a cross as being an outlining rectangle
with four smaller rectangles cut out of the corners. The floor of the room is completely covered with square tiles.
Bridget is walking around the room, stepping from one tile to the next, spiraling towards the centre. Bridget always
walks clockwise and stays as close to the edge of the room as possible without stepping on any tile twice. It is
possible that she may be trapped and unable to move to an adjacent tile before reaching all the tiles in the room.

Assume that the upper left corner of the outlining rectangle is position (1, 1), that is column 1 and row 1. The walk
always starts at column X and row 1, where X is the leftmost column of row 1 in the cross. The tile at position (X, 1)
cannot be revisited during the walk, however the first step is counted when Bridget moves to an adjacent tile

Write a program that calculates Bridget’s final column and row position in the room after the walk. The program must
accept input for the dimensions of the cross: i.e. the width and height of the outlining rectangle, the width and height
of the “cut out” rectangles, and the number of steps the person will take. In the diagram, the inputs for the dimensions
of the cross are:
10 8 3 2

In other words, the outlining rectangle is 10 units wide and 8 units high. The “cut out” rectangles are 3 units wide and
2 units high.

The maximum width and height of the outlining rectangle will be 20 x 20. The minimum width of the cross will be 1. The
vertical and horizontal parts of the cross are not necessarily the same width.

Sample Input:
10
8
3
2
15
Output for Sample Input 1:
7
7

Sample Input 2:
8
7
2
2
27
Output for Sample Input 2:
5
2

Sample Input 3:
8
7
2
2
40
Output for Sample Input 3:
7
4
*/

//class CrossNode {
//    bool visited;
//    std::array<CrossNode*, 4> neighbours;
//};
//
//class Cross {
//    std::vector<std::vector<CrossNode*>> grid;
//    unsigned cols, rows, cut_cols, cut_rows;
//public:
//    Cross();
//};


#endif //C_J4_H
