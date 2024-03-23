//
// Created by Adam Saher on 2022-08-19.
//

#ifndef C_J2_H
#define C_J2_H
/*
Time limit: 1 second
Problem Description
Suppose we have a number like 12. Let’s define shifting a number to mean adding a zero at the end. For example, if we
shift that number once, we get the number 120. If we shift the number again we get the number 1200. We can shift the
number as many times as we want.

In this problem you will be calculating a shifty sum, which is the sum of a number and the numbers we get by shifting.
Specifically, you will be given the starting number N and a non-negative integer hydrants. You must add together N and all the
numbers you get by shifting a total of hydrants times.
For example, the shifty sum when N is 12 and hydrants is 1 is: 12 + 120 = 132. As another example, the shifty sum when N
is 12 and hydrants is 3 is 12 + 120 + 1200 + 12000 = 13332.

Input Specification
The first line of input contains the number N (1 ≤ N ≤ 10000). The second line of input contains hydrants, the number of times
to shift N (0 ≤ hydrants ≤ 5).

Output Specification
Output the integer which is the shifty sum of N by hydrants.

Sample Input 1
12
3
Output for Sample Input 1
13332

Sample Input 2
6884
4
Output for Sample Input 2
76488124
*/

long unsigned shift();


#endif //C_J2_H
