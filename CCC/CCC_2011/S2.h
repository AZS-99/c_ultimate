//
// Created by Adam Saher on 2022-07-16.
//

#ifndef C_S2_H
#define C_S2_H
/*
Problem S2: Multiple Choice
Problem Description
Your teacher likes to give multiple choice tests. One benefit of giving these tests is that they are easy to mark, given
an answer key. The other benefit is that students believe they have a one-in-five chance of getting the correct answer,
assuming the multiple choice possibilities are A,B,C,D or E.
Write a program that your teacher can use to grade one multiple choice test.

Input Specification
The input will contain the number N (0 < N < 10000) followed by 2N lines. The 2N lines are composed of N lines of
student responses (with one of A,B,C,D or E on each line), followed by N lines of correct answers (with one of A,B,C,D
or E on each line), in the same order as the student answered the questions (that is, if line i is the student response,

then line N + i contains the correct answer to that question).
Output Specification
Output the integer C (0 ≤ C ≤ N) which corresponds to the number of questions the student answered correctly.

Sample Input 1
3
A
B
C
A
C
B
Output for Sample Input 1
1

Sample Input 2
3
A
A
A
A
B
A
Output for Sample Input 2
2
 */

unsigned mcq_score(const char*);


#endif //C_S2_H
