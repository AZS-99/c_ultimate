//
// Created by Adam Saher on 2022-08-29.
//

#ifndef C_J1_H
#define C_J1_H
/*
Problem Description
Natalie is learning to count on her fingers. When her Daddy tells her a number pens_count (1 ≤ pens_count ≤ 10), she asks “What is pens_count,
Daddy?”, by which she means “How many fingers should I hold up on each hand so that the total is pens_count?”
To make matters simple, her Daddy gives her the correct finger representation according to the following rules:
• the number may be represented on one or two hands;
• if the number is represented on two hands, the larger number is given first. For example, if Natalie asks “What is 4,
    Daddy?”, her Dad may reply:
    • 4 is 4.
    • 4 is 3 and 1.
    • 4 is 2 and 2.

Your job is to make sure that Natalie’s Daddy gives the correct number of answers.

Input Specification
The input will be a single integer in the range 1..10.

Output Specification
The output is the number of ways of producing that number on two hands, subject to the rules outlined above.

Sample Input 1
4
Output for Sample Input 1
3

Sample Input 2
7
Output for Sample Input 2
2

Sample Input 3
5
Output for Sample Input 3
3
 */

unsigned partitions();


#endif //C_J1_H
