//
// Created by Adam Saher on 2022-08-19.
//

#ifndef C_J2_H
#define C_J2_H
/*
Problem J2: Magic Squares
Problem Description
Magic Squares are square arrays of numbers that have the interesting property that the numbers in each column, and in
each row, all add up to the same total.
Given a 4 × 4 square of numbers, determine if it is magic square.
Input Specification
The input consists of four lines, each line having 4 space-separated integers.

Output Specification
Output either magic if the input is a magic square, or not magic if the input is not a magic square.

Sample Input 1
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Output for Sample Input 1
magic

Explanation for Output for Sample Input 1
Notice that each row adds up to 34, and each column also adds up to 34.

Sample Input 2
5 10 1 3
10 4 2 3
1 2 8 5
3 3 5 0
Output for Sample Input 2
not magic

Explanation for Output for Sample Input 2
Notice that the top row adds up to 19, but the rightmost column adds up to 11.
 */

bool is_magic();


#endif //C_J2_H
