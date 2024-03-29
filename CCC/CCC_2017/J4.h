//
// Created by Adam Saher on 2022-10-21.
//

#ifndef C_J4_H
#define C_J4_H


/*
Problem J4: Favourite Times
Time limit: 1 second

Problem Description
Wendy has an LED clock radio, which is a 12-hour clock, displaying times from 12:00 to 11:59. The hours do not have
leading zeros but minutes may have leading zeros, such as 2:07 or 11:03.
When looking at her LED clock radio, Wendy likes to spot arithmetic sequences in the digits. For example, the times
12:34 and 2:46 are some of her favourite times, since the digits form an arithmetic sequence.

A sequence of digits is an arithmetic sequence if each digit after the first digit is obtained by adding a constant
common difference. For example, 1,2,3,4 is an arithmetic sequence with a common difference of 1, and 2,4,6 is an
arithmetic sequence with a common difference of 2.
Suppose that we start looking at the clock at noon (that is, when it reads 12:00) and watch the clock for some number of
minutes. How many instances are there such that the time displayed on the clock has the property that the digits form an
arithmetic sequence?

Input Specification
The input contains one integer D (0 ≤ D ≤ 1 000 000 000), which represents the duration that the clock is observed.
For 4 of the 15 available marks, D ≤ 10 000.

Output Specification
Output the number of times that the clock displays a time where the digits form an arithmetic sequence starting from
noon (12:00) and ending after D minutes have passed, possibly including the ending time.

Sample Input 1
34
Output for Sample Input 1
1
Explanation of Output for Sample Input 1
Between 12:00 and 12:34, there is only the time 12:34 for which the digits form an arithmetic sequence.

Sample Input 2
180
Output for Sample Input 2
11

Sample input 3
292052813
Output for Sample Input 3
12574498
*/

unsigned count_arithmetic_seq();

#endif //C_J4_H
