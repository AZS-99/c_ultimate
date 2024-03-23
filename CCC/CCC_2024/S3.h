//
// Created by Adam Saher on 2024-03-15.
//

#ifndef C_S3_H
#define C_S3_H

/*

Swipe is a new mobile game that has recently exploded in popularity. In each level of Swipe, you are given 2 rows of
integers that can be represented as arrays A and B of size N. The objective of Swipe is to beat each level by turning
array A into array B.
There are two swipe operations you can perform on array A:
    Swipe right: Select the subarray [l,r] and set Ai = Al for all l ≤ i ≤ r.
    Swipe left: Select the subarray [l,r] and set Ai = Ar for all l ≤ i ≤ r.


For example, starting with array A = [0,1,2,3,4,5], if we swipe right on [2,4], we would obtain the array [0,1,2,2,2,5].
If instead, we started with the same array A, and swiped left on [3, 5], we would obtain the array [0, 1, 2, 5, 5, 5].
Note that these arrays are 0-indexed.

Unfortunately, the game is bugged and contains levels that are impossible to beat. Determine if it is possible to
transform array A into array B. If it is possible, determine a sequence of swipe operations that transforms array A into
array B.


The first line of input will consist of one positive integer N, representing the length of each of the two arrays of
integers.
The second line of input contains N space separated integers contained in array A.
The third line of input contains N space separated integers contained in array B.

Output Specifications:
The first line of output will contain YES if there is a sequence of swipes that can transform array A into array B;
otherwise, the first line of output will contain NO.

If the first line of output is YES, the next line contains a non-negative integer K (K ≤ N), indicating the number of
swipes.

Each of the next K lines contain three space-separated values: Dj, lj, and rj. The value Dj will be either R or L,
indicating that the jth swipe is either a right or left swipe, respectively. The values lj and rj indicate the left-end
and right-end of the swipe where 0 ≤ lj ≤ rj < N.

Sample input 1
3
3 1 2
3 1 1
Output
YES
1 R 1 2

Sample input 2
4
1 2 4 3
1 4 2 3
Output
NO

Sample input 3
4
2 1 4 3
2 1 4 3
Output
YES
0

*/

class S3 {

};


#endif //C_S3_H
