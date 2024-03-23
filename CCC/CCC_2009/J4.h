//
// Created by Adam Saher on 2022-11-08.
//

#ifndef C_J4_H
#define C_J4_H


#include <array>
#include <vector>
#include <string>

/*
Problem Description
The student council at Central Canada Collegiate is preparing signs with the message WELCOME TO CCC GOOD LUCK TODAY on
various walls around the school. A sign is wide enough to hold w characters on each row, including spaces, as befits the
wall to be decorated.
Here is how the words are put onto a sign. First, as many words as possible are placed on the first line, without
exceeding the w character limit. The first word in the line begins in the leftmost position. If there is more than one
word in the line, the last word ends in the rightmost position. Extra spaces are inserted into the gaps between the
words so that the gaps are as similar as possible. If the gaps cannot be made equal, all of the larger gaps should
appear to the left of the smaller ones. Subsequent lines are constructed in the same way.

Your program will read the available width w and output the sign on the screen. Use the “.” character to indicate a
space.
Constraints
You may assume that w ≥ 7.

Sample Input 1 (user inputs are shown in italics)
Enter w: 15
Output for Sample Input 1
WELCOME..TO.CCC
GOOD.LUCK.TODAY

Sample Input 2 (user inputs are shown in italics) Enter w: 26
Output for Sample Input 2
WELCOME..TO..CCC.GOOD.LUCK
TODAY.....................
*/

class Sign {
    unsigned width;
    std::array<unsigned, 6> word_lengths {7, 2, 3, 4, 4, 5};
    std::vector<unsigned> sum_vec {7, 10, 14, 19, 24, 30};
    std::array<std::string, 6> words{"WELCOME", "TO", "CCC", "GOOD", "LUCK", "TODAY"};
public:
    Sign();
    void run();
};


#endif //C_J4_H
