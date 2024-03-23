//
// Created by Adam Saher on 2022-12-23.
//

#ifndef C_Q1_H
#define C_Q1_H


/*
The lucky numbers are produced by taking a list of all the odd numbers and systematically removing some of the numbers.
Our first lucky numeral is 1. We now repeatedly take the next highest numeral n that is still in the list, mark it as a
lucky numeral and then remove every nth numeral from the list.
For example, with lucky numbers underlined as we progress:

• Initially we have:                        1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, ...
• The next lucky numeral is 3, giving us:   1, 3,    7, 9,     13, 15,     19, 21 ,    25, 27,     31, ...
• Next is 7:                                1, 3,    7, 9,     13, 15,         21 ,    25, 27,     31, ...
• Next is 9:                                1, 3,    7, 9,     13, 15,         21 ,    25,         31, ...

Write a program which reads in a single integer between 2 and 10,000 inclusive.
You should output two numbers. Firstly the closest lucky numeral that is less than the input, followed by the closest
lucky numeral that is greater than the input.


Sample Input 1:
5
Output for Sample Input 1:
3 7

Sample Input 2:
3301
Output for Sample Input 2:
3297 3307

Sample Input 3:
9703
Output for Sample Input 3:
9691 9727

Sample input 4:
10000
Output for Sample Input 4:
9999 10003
*/

#include <vector>

void lucky_nums_rec(std::vector<unsigned>&, unsigned);
void lucky_nums(const unsigned&);
#endif //C_Q1_H
