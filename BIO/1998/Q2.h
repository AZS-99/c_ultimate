//
// Created by Adam Saher on 2022-12-23.
//

#ifndef C_Q2_H
#define C_Q2_H



/*
Othello is a game played on an 8 by 8 board with two players (White and Black). Each player has 32 pieces which are
white ('0') on one side and black ('*') on the other. Play alternates between the two players, with White playing first.
A move is made by placing a piece, with the colour of the current player visible, on an unoccupied square of the board
which has at least one of its eight neighbouring squares occupied by the opponent. Any enemy pieces which are in a
direct line between this piece and another of the player's own colour (horizontally, vertically or diagonally) are
turned over so that they show the current player's colour. A piece may change colour several times during a game.


Write a program to play Othello. Both White and Black will be controlled by the computer, according to a fixed strategy.
There are two strategies you may choose from. Implementing the first can earn you a maximum of 17 points for this
question, whereas the second strategy is worth a maximum of 25 points.

Strategy 1:
Each player will always make the move which changes the largest number of pieces to their colour. If there are several
equally good moves the one lowest down the board (on the screen) will be made, and if there are several of these the
one furthest to the right will be chosen.

Strategy 2:
Each player always considers the possible next move of their opponent. The move played is the one which guarantees that
the largest number of pieces will be their colour after their opponent's next move. With several equally good moves,
the lowest/rightmost on the board is chosen as explained in strategy (1).

For example, if it is Black to play, and the board looks like:

0*00..
.0....
......
......

Under the first strategy Black will play the move that turns over two White pieces:
0****.
.0....
......
......

Under the second strategy Black will play the move that turns over a single White piece:
0*00..
.*....
.*....
......

White can now change the colour of at most one Black piece, leaving two on the board. If the first strategy's move had
been played White would be able to change the colour of all four Black pieces on the board, leaving none.

Your program should first read in a 4x4 board, which will be in the form of four lines of four characters - '*' for a
black piece, '0' (zero) for a white piece, and '.' for an empty square. At least one of these squares will be non-empty.
This 4x4 board should be used as the centre section of the 8x8 board the game is played on.

Once the central section has been input you should print which strategy your program is using, and display the board.
Until your program terminates you should repeatedly wait for input, and then:

1- If you receive an integer n you should play the next n moves of the game, or as many as you can play before the game
    ends. You should then display the current state of the game.
2- If you receive the number 0 you should input another two numbers, representing an x co-ordinate and a y co-ordinate.
    You should then play a move (for the current player) in this position, and then display the board. The bottom left
    corner is (1,1).
3- If you receive the number -1 you should terminate.
4- Ignore any other input.

If playing a move takes you to the end of the game, you should print out which player has won and by how much (or print
'Black and White draw.'), and then terminate.

Sample run (strategy 1)
.0*.
0..0
0000
0*.0

Strategy 1
........
........
...0*...
..0..0..
..0000..
..0*.0..
........
........

1
........
........
...0*...
..0..0..
..0000..
..00.0..
....0...
........

0
7 4
........
........
...0*...
..0..*..
..0000*.
..00.0..
....0...
........

4
........
.....*..
...0**..
..0*.*..
.**00**.
..00.0..
....0...
........

0
1 4
........
.....*..
...0**..
..0*.*..
00000**.
..00.0..
....0...
........

-1


Sample run (strategy 2)
.0*.
0..0
0000
0*.0

Strategy 2
........
........
...0*...
..0..0..
..0000..
..0*.0..
........
........

99
********
******0*
**0***00
*000**00
*00*0000
*0*00000
**0**000
*****000

Black wins by 8.

 */

#include <array>
#include <vector>

struct OthelloNode {
    bool* colour = nullptr;
    std::array<OthelloNode*, 8> neighbours;
public:
    explicit OthelloNode();
    OthelloNode(const OthelloNode&);
    explicit OthelloNode(const bool& colour);
    friend class Othello;
    friend std::ostream& operator<<(std::ostream&, const OthelloNode&);
};


/*
Let the neighbours be represented this way:
0 1 2
3   4
5 6 7
 */


class Othello {
public:

    std::array<std::array<OthelloNode*, 8>, 8> grid;
    bool turn = true;
    std::vector<OthelloNode*> white, black;

    Othello();
    Othello(const Othello&);
    static std::vector<OthelloNode*> largest_potential_flips(const OthelloNode *unoccupied_node, const bool &player_colour);
    OthelloNode* pick_spot(const bool&);
    friend std::ostream& operator<<(std::ostream&, const Othello&);
    void play(const unsigned&);
};


#endif //C_Q2_H
