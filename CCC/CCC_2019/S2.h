//
// Created by Adam Saher on 2022-04-17.
//

#ifndef CCC_S2_H
#define CCC_S2_H

#include <vector>
#include <iostream>
/*
Problem Description (GOLDBACHS_CONJECTURE)
For various given positive integers N > 3, find two primes, A and B such that N is the average (mean) of A and B. That
 is, N should be equal to (A + B)/2.
Recall that a prime number is an integer P > 1 which is only divisible by 1 and P . For example, 2, 3, 5, 7, 11 are the
first few primes, and 4, 6, 8, 9 are not prime numbers.

Input Specification
The first line of input is the number T (1 ≤ T ≤ 1000), which is the number of test cases. Each of the next T lines
contain one integer Ni (4 ≤ Ni ≤1000000,1 ≤i ≤T).

Output Specification
The output will consist of T lines. The ith line of output will contain two integers, Ai and Bi, separated by one space.
It should be the case that Ni = (Ai + Bi)/2 and that Ai and Bi are prime numbers.
If there are more than one possible Ai and Bi for a particular Ni, output any such pair. The order of the pair Ai and Bi
does not matter.
It will be the case that there will always be at least one set of values Ai and Bi for any given Ni.

Sample Input
4
8
4
7
21
Possible Output for Sample Input
3 13
5 3
7 7
13 29
 */

std::pair<unsigned, unsigned> find_prime_pair(const unsigned&);

#endif //CCC_S2_GOLDBACHS_CONJECTURE_H
