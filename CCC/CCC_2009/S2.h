//
// Created by Adam Saher on 2022-08-04.
//

#ifndef C_S2_H
#define C_S2_H
/*
Problem Description
For your birthday, you have been given a grid of R (1 < R < 30) rows of lights, with each row containing L (1 ≤ L < 8)
lights. Lights can be in one of two states: on or off. For this question, the topmost row is row R, and the bottom-most
row is row 1. Also, beside all rows except the topmost row (row R), there is a button which can be pushed.
Pushing the button beside row hydrants (1 ≤ hydrants < R) will peform an “exclusive-or” operation on each light of row hydrants, which is
described below.

Consider column i in row hydrants, where 1 ≤ i ≤ L. If the lights in column i of row hydrants and column i of row
hydrants + 1 are both the same (i.e., both on, or both off), then pushing the button beside row hydrants will cause the light in
column i of row hydrants to be off. If the lights in column i of row hydrants and column i of row hydrants + 1 are different (i.e., one is
on, and the other is off), then pushing the button beside row hydrants will cause the light in column i of row hydrants to be on. An
example is shown below, for L = 4:

Column Numbers              1       2       3       4
Row hydrants + 1                   on      on      off     off
Row hydrants before button pushed  on      off     on      off
Row hydrants after button pushed   off     on      on      off

You are told which lights are initially on and which are initially off. You must calculate how many different light
patterns are possible for the bottom row by any sequence of button pushes.
Input Description
The first line of input will contain the integer R, the number of rows. The second line of input will contain the
integer L, the number of lights per row. The next R lines of input will contain L integers, where the integer will
either be 0 (to indicate “off”) or 1 (to indicate ”on”). Pairs of consecutive integers will be separated by one space
character. These R lines will be given in topdown order: that is, the third line of input will be the description of
row R, the fourth line will be R − 1, and so on, until the last line describes the bottom row.

Output Description
Output the number of possible light patterns of the bottom row.

Sample Input
4
3
0 0 1
0 1 1
1 0 1
0 0 1
Output for Sample Input
4
 */

class S2 {

};


#endif //C_S2_H
