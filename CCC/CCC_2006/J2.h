//
// Created by Adam Saher on 2022-10-16.
//

#ifndef C_J2_H
#define C_J2_H


/*
Problem Description
Diana is playing a game with two dice. One die has sides labelled 1, 2, 3, ..., m The other die has sides labelled
1, 2, 3, ..., n
Write a program to determine how many ways can she roll the dice to get the sum 10.
For example, when the first die has 6 sides and the second die has 8 sides, there are 5 ways to get the sum 10:
                                                2 + 8 = 10
                                                3 + 7 = 10
                                                4 + 6 = 10
                                                5 + 5 = 10
                                                6 + 4 = 10
Input Specifications
The input is given as two integers. First, the user is prompted for and must enter in the number m, where 1 < m < 100.
Second, the user is prompted for and must enter the number n, where 1 < n < 100.

Output Specifications
The program prints out the number of ways 10 may be rolled on these two dice. Note that in the output, the word “way”
should be used if there is only one way to achieve the sum of 10; otherwise, the word “ways” should be used in the
output. That is, if there is only one way to get the sum 10, the output should be:
                                        There is 1 way to get the sum 10.

Sample Prompting and User Input 1 (user input in italics)
Enter m: 6
Enter n: 8
Output for Sample 1
There are 5 ways to get the sum 10.

Sample Prompting and User Input 2 (user input in italics)
Enter m: 12
Enter n: 4
Output for Sample 2
There are 4 ways to get the sum 10.
*/

unsigned combinations_of_10();

#endif //C_J2_H
