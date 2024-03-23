//
// Created by Adam Saher on 2022-08-17.
//

#ifndef C_J5_S3_H
#define C_S3_H
/*
Problem Description
You are gathering readings of acidity level in a very long river in order to determine the health of the river. You have
placed N sensors (2 ≤ N ≤ 2 000 000) in the river, and each sensor gives an integer reading R (1 ≤ R ≤ 1 000). For the
purposes of your research, you would like to know the frequency of each reading, and find the absolute difference
between the two most frequent readings.

If there are more than two readings that have the highest frequency, the difference computed should be the largest such
absolute difference between two readings with this frequency. If there is only one reading with the largest frequency,
but more than one reading with the second largest fre- quency, the difference computed should be the largest absolute
difference between the most fre- quently occurring reading and any of the readings which occur with second-highest
frequency.

Input Specification
The first line of input will be the integer N (2 ≤ N ≤ 2 000 000), the number of sensors. The next N lines each contain
the reading for that sensor, which is an integer R (1 ≤ R ≤ 1 000). You should assume that there are at least two
different readings in the input.

Output Specification
Output the positive integer value representing the absolute difference between the two most fre- quently occurring
readings, subject to the tie-breaking rules outlined above.

Sample Input 1
5
1
1
1
4
3
Output for Sample Input 1
3

Sample Input 2
4
10
6
1
8
Output for Sample Input 2
9
*/

unsigned widest_variance();


#endif //C_J5_S3_H
