//
// Created by Adam Saher on 2022-07-18.
//

#ifndef C_S2_H
#define C_S2_H

/*
Problem Description
A school team is trying to assign jerseys numbered 1, 2, 3, . . . , J to student athletes. The size of each jersey is
either small (S), medium (M) or large (L).
Each athlete has requested a specific jersey number and a preferred size. The athletes will not be satisfied with a
jersey that is the wrong number or that is smaller than their preferred size. They will be satisfied with a jersey that
is their preferred size or larger as long as it is the right number. Two students cannot be given the same jersey.
Your task is to determine the maximum number of requests that can be satisfied.

Input Specification
The first line of input is the integer J which is the number of jerseys.
The second line of input is the integer A which is the number of athletes.
The next J lines are each the character S, M or L. Line j gives the size of jersey j (1 ≤ j ≤ J). The last A lines are
each the character S, M or L followed by a space followed by an integer. Line a (1 ≤ a ≤ A) gives the requested size and
jersey number for athlete a where the athletes are numbered 1,2,3,...,A.

Output Specification
The output will consist of a single integer which is the maximum number of requests that can be satisfied.

Sample Input
4
3
M
S
S
L
L 3
S 3
L 1
Output for Sample Input
1

Explanation Sample Output
Jersey 1 cannot be assigned because it is medium and athlete 3 requested large. No athlete requested jersey 2 or 4.
Jersey 3 (small) can be assigned athlete 2 (small) but not athlete 1 (large).

Sample input 2
5
1
M
S
S
L
M
L 3
Output for Sample Input 2
0



 */

enum Sizes : char {
    S = 'S',
    M = 'M',
    L = 'L'
};


unsigned count_matches(const char* filename);




#endif //C_S2_H
