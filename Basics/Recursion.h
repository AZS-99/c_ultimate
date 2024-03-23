//
// Created by Adam Saher on 2023-01-31.
//

#ifndef C_RECURSION_H
#define C_RECURSION_H


/*
Write a program that calculates the summation of 1 + 2 + 3 + 4 + .... + n
Sample input 1
Enter a value: 10
The summation of all values from 1 till 10 is 55
 */
unsigned summation(const unsigned&);


/*
The factorial of an integer is defined as the product of all numbers from 1 to that specified integer. For instance,
the factorial of 5 (denoted as 5!) is equal to:
5! = 1 * 2 * 3 * 4 * 5 = 120

Write a program that displays the factorial value of any number n recursively.
 */

unsigned factorial(const unsigned&);


/*
Write a recursive function to compute the harmonic series:
                                 m(i) = 1 + 1/2 + 1/3 + ... + 1/i
Write a test program that displays m(i) for i = 1, 2, ..., 10.
*/
double harmonic_series(const unsigned&);


/*
Write a recursive function to compute the following series:
                                m(x) = 1/2 + 2/3 + 3/4 + ... + x/(x+1)
Write a test program that prompts the user to enter an integer for i and displays m(i).
*/
double series1(const unsigned&);


/*
Write a recursive function to compute the following series:
                            m(x) = 1/3  +  2/5  +  3/7 +  4/9  + ... + x/(2x + 1)
Write a test program that displays m(x) for x = 1, 2, ..., 10.
*/
double series2(const unsigned&);


/*
The Fibonacci series begins with 0 and 1, and each subsequent number is the sum of the preceding two. Here is the
first terms of fibonacci:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
Write a programme to predict the nth fibonacci term

Sample input:
Enter n: 10
Output for Sample input:
34
*/

unsigned fibonacci(const unsigned&);


/*
Write a recursive function that computes the sum of the digits in a positive integer. Use the following function
header: unsigned sum_digits(const unsigned&);
For example, sum_digits(234u) returns 2 + 3 + 4 = 9. Write a test program that prompts the user to enter a positive
integer then displays its sum.
*/
unsigned sum_digits(const unsigned&);


/*
Write a recursive function that displays an integer value reversely using the following header:
unsigned reverse_digits(const unsigned&);
For example, invoking reverse_digits(12345u) displays 54321u. Write a test program that prompts the user to enter
a positive integer and displays its reversal.
*/
unsigned reverse_digits(const unsigned&);



#endif //C_RECURSION_H
