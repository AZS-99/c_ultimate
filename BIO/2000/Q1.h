//
// Created by Adam Saher on 2022-12-26.
//

#ifndef C_Q1_H
#define C_Q1_H
/*
Problem: Digital Rivers
A digital river is a sequence of numbers where the numeral following n is n plus the sum of its digits. For example,
12345 is followed by 12360, since 1+2+3+4+5 = 15. If the first numeral of a digital river is k we will call it river k.
For example, river 480 is the sequence beginning {480, 492, 507, 519, ...} and river 483 is the sequence beginning
{483, 498, 519, ...}.

Normal streams and rivers can meet, and the same is true for digital rivers. This happens when two digital rivers share
some of the same values. For example: river 480 meets river 483 at 519, meets river 507 at 507, and never meets river
481

Every digital river will eventually meet river 1, river 3 or river 9. Write a program which prompts the user to enter
a single integer n (1 <= n <= 16384), and outputs which river of these three it will meet first, followed by the value
where river n first meets that river.

Sample Input 1:
86
Output for Sample Input 1:
1 101

Sample Input 2:
852
Output for Sample Input 2:
3 1020

Sample Input 3:
13046
Output for Sample Input 3:
1 20014

Sample Input 4:
999
Output for Sample Input 4:
9 999
*/

class Q1 {

};


#endif //C_Q1_H
