//
// Created by Adam Saher on 2022-12-13.
//

#ifndef C_5_NESTEDLOOPS_H
#define C_5_NESTEDLOOPS_H
/*
Print the following pattern using loops:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
.
.
.
1 2 3 4 5 .... 100
*/



/*
Write a program that uses a for loop in order to print the following reverse number pattern
100 99 98 ... 1
.
.
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/





/*
Find the loop the prints the following pattern:
1 2 3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10 11
3 4 5 6 7 8 9 10 11 12
4 5 6 7 8 9 10 11 12 13
5 6 7 8 9 10 11 12 13 14
*/





/*
(Display patterns) Write a function to display the following pattern:
1
2 1
3 2 1
.........
n n-1 ... 3 2 1

The function header is: def display_pattern(n)
Write a test program that prompts the user to enter a number n and invokes display_pattern(n) in order to display the
pattern above.
*/




/*
Write a program that prompts the user to enter an integer from 1 to 15 and displays a pyramid, as
shown in the following sample run:
Enter the number of lines: 7
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
  6 5 4 3 2 1 2 3 4 5 6
7 6 5 4 3 2 1 2 3 4 5 6 7
*/

void pyramid(unsigned n);







/*
CREDIT: CCC 2018 J3

Problem Description
You decide to go for a very long drive on a very straight road. Along this road are five cities. As you travel, you
record the distance between each pair of consecutive cities.
You would like to calculate a distance table that indicates the distance between any two of the cities you have
encountered.

Input Specification
The first line contains 4 positive integers less than 1000, each representing the distances between consecutive pairs of
consecutive cities: specifically, the ith integer represents the distance between city i and city i + 1.

Output Specification
The output should be 5 lines, with the ith line (1 ≤ i ≤ 5) containing the distance from city i to cities 1, 2, ... 5 in
order, separated by one space.

Sample Input
3 10 12 5
Output for Sample Input
0 3 13 25 30
3 0 10 22 27
13 10 0 12 17
25 22 12 0 5
30 27 17 5 0

Explanation of Output for Sample Input
The first line of output contains:
• 0, since the distance from city 1 to city 1 is 0;
• 3, since the distance between city 1 and city 2 is 3;
• 13, since the distance between city 1 and city 3 is 3 + 10 = 13;
• 25, since the distance between city1 and city4 is 3 + 10 + 12 = 25;
• 30, since the distance between city1 and city5 is 3 + 10 + 12 + 5 = 30.
*/




#endif //C_5_NESTEDLOOPS_H
