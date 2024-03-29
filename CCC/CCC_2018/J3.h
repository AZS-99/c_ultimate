//
// Created by Adam Saher on 2022-11-11.
//

#ifndef C_J3_H
#define C_J3_H

/*
Problem J3: Are we there yet?
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
class J3 {

};


#endif //C_J3_H
