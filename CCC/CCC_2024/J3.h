//
// Created by Adam Saher on 2024-03-10.
//

#ifndef C_J3_H
#define C_J3_H

/*
Problem Description
After completing a competition, you are struck with curiosity. How many participants were awarded bronze level?
Gold level is awarded to all participants who achieve the highest score. Silver level is awarded to all participants who
achieve the second highest score. Bronze level is awarded to all participants who achieve the third highest score.
Given a list of all the scores, your job is to determine the score required for bronze level and how many participants
achieved this score.

Input Specification
The first line of input contains a positive integer, N, representing the number of participants. Each of the next N
lines of input contain a single integer representing a participant’s score. Each score is between 0 and 75 (inclusive)
and there will be at least three distinct scores. The following table shows how the available 15 marks are distributed:

 Marks          | Description                                                                       | Bound
 6              | The scores are distinct and the number of participants is small.                  | N ≤ 50
 7              | The scores might not be distinct and the number of participants is small.         | N ≤ 50
 2              | The scores might not be distinct and the number of participants could be large.   | N ≤ 250,000


Output Specification
Output a non-negative integer, S, and a positive integer, P, separated by a single space, where S is the score required
for bronze level and P is how many participants achieved this score.

Sample Input 1
4
70
62
58
73
Output for Sample Input 1
62 1

Explanation of Output for Sample Input 1
The score required for bronze level is 62 and one participant achieved this score.


Sample Input 2
8
75
70
60
70
70
60
75
70
Output for Sample Input 2
60 2
Explanation of Output for Sample Input 2
The score required for bronze level is 60 and two participants achieved this score.
*/

void find_third_place();


#endif //C_J3_H
