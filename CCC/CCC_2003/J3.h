//
// Created by Adam Saher on 2022-09-23.
//

#ifndef C_J3_H
#define C_J3_H


#include <unordered_map>

/*
Here (see illustration) is a game board for the game Snakes and Ladders. Each player throws a pair of dice to determine
how many squares his/her game piece will advance. If the piece lands on the bottom of a ladder, the piece moves up to
the square at the top of the ladder. If the piece lands on the top of a snake, the piece "slides" down to the square at
the bottom of the snake. If the piece lands on the last square, the player wins. If the piece
cannot advance the number of squares indicated by the dice, the piece is not moved at all. In order to help you play
this game via a cell phone while travelling, you will write a program that simulates your moves on the board shown and,
of course, runs on your handheld computer. You will repeatedly throw the dice and enter the result into the program.
After each throw the program will report the number of the square where your piece lands.

When the program starts it should assume the piece is on square 1. It should repeatedly read input from the user
(a number between 2 and 12) and report the number of the square where the piece lands. In addition, if the piece moves
to the last square, the program should print "You Win!" and terminate. If the user enters 0 instead of a number between
2 and 12, the program should print "You Quit!" and terminate.
For clarity, you are to use the board pictured above and you should note that the board has 3 snakes (from 54 to 19,
from 90 to 48 and from 99 to 77) and 3 ladders (from 9 to 34, from 40 to 64 and from 67 to 86).

Sample Session User input in italics
Enter sum of dice:
9
You are now on square 10 Enter sum of dice:
11
You are now on square 21 Enter sum of dice:
12
You are now on square 33 Enter sum of dice:
7
You are now on square 64 Enter sum of dice:
3
You are now on square 86 Enter sum of dice:
5
You are now on square 91 Enter sum of dice:
10
You are now on square 91 Enter sum of dice:
9
You are now on square 100 You Win!
 */

class SnakesAndLadders {
    unsigned position;
    static std::unordered_map<unsigned, unsigned> gates;
public:
    SnakesAndLadders();
    void run();
};


#endif //C_J3_H
