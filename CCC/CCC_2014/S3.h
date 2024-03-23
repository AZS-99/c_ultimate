//
// Created by Adam Saher on 2022-07-25.
//

#ifndef C_J5_S3_H
#define C_J5_S3_H

#include <vector>
#include <stack>

/*
Problem Description
In order to ensure peace and prosperity for future generations, the United Nations is creating the world’s largest candy.
The ingredients must be taken in railway cars from the top of a mountain and poured into Lake Geneva. The railway
system goes steeply from the mountaintop down to the lake, with a V-shaped branch in the middle as shown below.

Right now, each of the N ingredients is in its own railway car. Each railway car is assigned a positive integer from
1 to N . The ingredients must be poured into the lake in the order 1, 2, 3, . . . , N but the railway cars are lined up
in some random order. The difficulty is that, because of the especially heavy gravity today, you can only move cars
downhill to the lake, or sideways on the branch line. Is it still possible to pour the ingredients into the lake in the
order 1, 2, 3, . . . , N ?

For example, if the cars were in the order 2, 3, 1, 4, we can slide these into the lake in order as described below

                                              MOUNTAIN
                                                |2|
                                                |3|
                                                |1|
                                                |4|
                                                | |
                                                | |
                                                | |
                                                | |
                                                |  \————————————————————————
                                                |   _______________________ BRANCH
                                                |  /
                                                | |
                                                | |
                                                | |
                                                | |
                                                | |
                                                | |
                                                LAKE

• Slide car 4 out to the branch
• Slide car 1 into the lake
• Slide car 3 out to the branch
• Slide car 2 into the lake
• Slide car 3 from the branch into the lake
• Slide car 4 from the branch into the lake

Input Specification
The first line will contain the number T (1 ≤ T ≤ 10) which is the number of different tests that will be run. Each test
has the form of an integer N (1 ≤ N ≤ 100 000) on the first line of the test, followed by a list of the N cars listed
from top to bottom. The cars will always use the numbers from 1 to N in some order.

Output Specification
For each test, output one line which will contain either Y (for “yum”) if the recipe can be completed, and N otherwise.

Sample Input
2
4
2 3 1 4
4
4 1 3 2
Output for Sample Input
Y
N

Sample Input 2
5
10
1 2 3 4 5 6 7 8 9 10
20
7 18 8 13 9 11 3 4 19 17 5 15 10 20 6 14 12 16 2 1
30
29 5 3 22 17 24 2 20 28 19 21 8 13 9 4 7 23 15 10 30 16 14 18 12 1 27 11 26 6 25
40
13 14 12 15 11 16 17 18 19 20 10 21 8 9 22 23 24 25 6 7 26 27 28 29 4 2 3 5 30 31 32 33 34 35 36 37 38 39 1 40
50
18 17 19 16 13 14 9 10 11 12 8 15 20 21 22 23 6 7 24 25 26 27 28 29 5 30 31 32 33 3 4 34 35 36 37 1 2 38 39 40 41 42 43 44 45 46 47 48 49 50
Output for Sample Input 2
Y
N
N
Y
Y
*/

class HanoiTrain {
    std::stack<unsigned> trains_stack;
    std::stack<unsigned> wait_list;
    std::vector<unsigned> trains_vector;
public:
    HanoiTrain();
    bool is_possible();
};


#endif //C_J5_S3_H
