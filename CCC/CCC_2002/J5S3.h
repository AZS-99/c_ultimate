//
// Created by Adam Saher on 2022-08-30.
//

#ifndef C_J5S3_H
#define C_J5S3_H

#include <vector>
#include <array>

/*
Rose and Colin are playing a game in their backyard. Since the backyard is rectangular we can think of it as a grid with
r rows and c columns. Rose and Colin place obstacles on some of the squares. The game is played as follows:

Colin covers his eyes with a blindfold then Rose carries him to some grid square in the backyard. She sets him down so
that he is facing north, south, east or west. Colin does not know this initial position or direction.
Rose then instructs Colin to make a series of m moves through the backyard.
Each move is one of:
F - moves forward one grid square in the direction that he is facing, or
L - turns 90 degrees counter-clockwise, remaining on the same square, or
R - turns 90 degrees clockwise, remaining on the same square.

After making these moves, Colin is standing at some final position. He must now figure out where he is standing. You
will help him by writing a program to determine all possible final positions. Assume that Colin's initial position,
final position, and all intermediate positions lie within the backyard but never in a square that contains an obstacle.
You may also assume that Colin is always facing a direction that is parallel to the sides of the backyard (north, south,
east, or west).
The input begins with r and c (1 ≤ r ≤ 375; 1 ≤ c ≤ 80 ), each on a separate line. Next are r lines of c characters
describing the backyard: a period character denotes a grid square that Colin may walk through; an X character denotes a
grid square with an obstacle. Below the grid is the number m (0 ≤ m ≤ 30000) followed by m characters describing Colin's
moves.
Your program should output the backyard grid, indicating all possible final positions with the * character.

Sample Input 1 (Input file : blind.in)
2
4
....
.XX.
3 F R F
Output for Sample Input 1 (Output file : blind.out)
.*..
.XX*

Sample Input 2
5
5
.....
.X.X.
.....
.XXX.
.....
6 F F F F R F
Output for Sample Input 2
.*...
*X.X*
.....
*XXX*
...*.

Sample Input 3
5
5
.....
.X.X.
.....
.X.X.
.....
16 R F F L L L F F L L L F F R F F
Output for Sample Input 3
*.*.*
.X.X.
*.*.*
.X.X.
*.*.*

Sample Input 4
1
64
................................................................
50 F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F
Output for Sample Input 4
**************....................................**************
*/

class SquareNode {
    bool obstacle;
    std::array<SquareNode*, 4> neighbours{};

    SquareNode(const bool& = false);
    friend class SquareGrid;
};



class SquareGrid {
    std::vector<std::vector<SquareNode*>> grid;
public:
    SquareGrid();
};



#endif //C_J5S3_H
