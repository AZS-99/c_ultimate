//
// Created by Adam Saher on 2022-11-06.
//

#ifndef C_4_LOOPS_H
#define C_4_LOOPS_H

#include <string>
/*
Write a program the prompts the user to enter an integer n, then prints all the cubes from 1 to n.
Sample input
5
Output for sample input
1
8
27
64
125
*/




/*
A pentagonal number is defined as n(3n - 1)/2, for n is a positive integer. So, the first few numbers are
1, 5, 12, 22, .... Write a program to display the first 100 pentagonal numbers with 10 numbers on each line.
*/




/*
Using a loop, write a program that displays the result of 1 + 2 + 3 + 4 + ... + 99 + 100.
*/







/*
Write a function that takes an integer n as an argument, and returns its factorial.
*/






/*
Assume python doesn't have the "to the power of" feature, that is, the double asterisk used for that purpose does not
exist. Write a program that prompts the user to enter two integers: the base and the exponent, and returns the power
value.

Sample input
Enter the base: 3
Enter the exponent: 2

Output for sample input
9
*/





/*
Using loops, write a program that prompts the user to enter an integer n, then displays the result of
1^2 + 2^2 + 3^2 + ... + n^2
*/







/*
Write a program to sum the following series and find the EXACT value:
1/3  +  3/5  +  5/7  +  7/9  +  9/11  + .... +  95/97  +  97/99
*/





/*
Write a program that computes the following summation:
1/(√1 + √2)   +   1/(√2 + √3)   +   1/(√3 + √4)   + .... +   1/(√624 + √625)
*/



/*
You can approximate e by using the following series
e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/i!
Write a program that displays the e value for i = 100
*/



/*
Use a while loop to find the smallest integer n such that n^2 is greater than m. Using the math library is not allowed.

Sample input
Enter m: 12000

Output for ample input
The smallest number which has a square greater than 12000 is 110
*/




/*
Write a program that prompts the user to enter a value m, where m > 1000. Use a while loop to find the largest integer n
such that n^3 is less than m. Using the math library is not allowed

Sample
Enter m: 10123
Output
The largest integer which its cube is less than 10123 is 21
*/




/*
Write a program that reads an unspecified
number of integers, determines how many positive and negative values have been read, and computes the total and average
of the input values (not counting zeros). Your program ends with the input 0. Display the average as a floating-point
number. Here is a sample run:

Sample:
Enter an integer, the input ends if it is 0: 1
Enter an integer, the input ends if it is 0: 2
Enter an integer, the input ends if it is 0: -1
Enter an integer, the input ends if it is 0: 3
Enter an integer, the input ends if it is 0: 0

The number of positives is 3
The number of negatives is 1
The total is 5
The average is 1.25
*/












bool is_palindrome(const std::string&);




//LOOPIING QUOTIENTS

/*
Write a function that takes an integer n as an argument, and returns its units digit.

Sample
234
Output
4
*/


/*
Write a function that takes an integer n as an argument, and returns the count of digits in that number

Sample
Enter a number: 12345
Output:
The number is made up of 5 digits
*/


/*
Write a function that computes the sum of the digits in an integer. Use the following function header:
def sum_digits(n):
For example, sum_digits(234) returns 9 (because 2 + 3 + 4 = 9). (Hint: Use the % operator to extract digits, and the //
operator to remove the extracted digit. For instance, to extract 4 from 234, use 234 % 10 (= 4). To remove 4 from 234,
use 234 // 10 (= 23). Use a loop to repeatedly extract and remove the digits until all the digits are extracted.) Write
a test program that prompts the user to enter an integer and displays the sum of all its digits.
*/



/*
(Display an integer reversed) Write the following function to display an integer in reverse order:
def reverse(number):
For example, reverse(3456) displays 6543. Write a test program that prompts
the user to enter an integer and displays its reversal.
*/




/*
Write a function that displays all the leap years since 1900 till this year 2022
*/




/*
When a credit card number is sent through the Internet it must be protected so that other people cannot see it.
Many web browsers use a protection based on "RSA Numbers."
A number is an RSA number if it has exactly four divisors. In other words, there are exactly four numbers that divide
into it evenly. For example, 10 is an RSA number because it has exactly four divisors (1, 2, 5, 10). 12 is not an RSA
number because it has too many divisors (1, 2, 3, 4, 6, 12). 11 is not an RSA number either. There is only one RSA
number in the range 10...12.

Write a program that takes an integer as an arguments, and returns whether that integer is an RSA number.
 */






//RANDOM
/*
Pupils of the Grade-2 are maths competition. The teacher needs to design a programme that will keep generating integers
randomly, such that the first is larger than the second, and ask the pupil to enter the value of their integer division.
The duration of the test is 10 seconds. The pupil who answers more questions than the rest of his peers will be the
winner. Since you are the only pupil who knows programming, the teacher has offered you to design that programme and get
the full mark on a quiz that you missed. Here is a sample for the desired output:

Sample:
What is 1 / 1? 1
You are correct!
You have 9 seconds left!

What is 7 / 2? 3
You are correct!
You have 7 seconds left!

What is 9 / 3? 4
Your answer is wrong.
You have 3 seconds left!

What is 6 / 2? 3
You are correct!
You have 1 second left!
You are correct!

Correct count is 3 out of 4
*/




#endif //C_4_LOOPS_H
