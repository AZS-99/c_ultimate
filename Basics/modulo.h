//
// Created by Adam Saher on 2022-12-15.
//

#ifndef C_MODULO_H
#define C_MODULO_H

/*
Write a programme that prompts the user to enter an integer, then returns true if that integer is even, false otherwise.

Sample Run 1:
Enter an integer: 6

Sample Output 1:
6 is an even number

Sample Run 2:
Enter an integer: 7

Sample Output2:
7 is not an even number
 */


/*
The Earth completes one cycle around the sun in exactly 365.2425 days. The ancient Romans, however, believed it was
365.25 days. So they set the Julian Calendar such that a year was 365 days, and every 4 years there was a leap year made
of 366 days to compensate for the 0.25 days. This tiny miscalculation accumulated for almost a 1600 years until the
Julian Calendar was no longer helpful with predicting the four seasons. So, in the year 1582, Pope George XIII
introduced a modification for the definition of the leap year:“Every year that is exactly divisible by four is a leap
year, except for years that are exactly divisible by 100 (called centurial years), those years are leap years if and
only if they are also divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years because they are
divisible by 100 but not divisible by 400; while the year 2000 is a leap year, because it is divisible by both 100
and 400”.
This is called the Georgian Calendar, which is what all the world is following today. Write a program that prompts the
user to enter a year, and returns true if the year is leap, false otherwise.

Sample Input:
1648
Output:
True
 */


/*
Write a program that prompts the user to enter an integer for today’s day of the week (Sunday is 0, Monday is 1, ...,
and Saturday is 6). Also prompt the user to enter the number of days after today for a future day and display the
future day of the week. Here is a sample run:

Sample input 1:
Enter today's day: 1
Enter the number of days elapsed since today: 3

Output for Sample Input 1:
Today is Monday and the future day is Thursday



Sample input 2:
Enter today's day: 2
Enter the number of days elapsed since today: 8

Output for Sample Input 2:
Today is Tuesday and the future day is Wednesday
 */




/*
Write a program the prompts the user to enter two integers, the second of which is a prime number, then returns true
if the prime number provided is a factor of the first integer

Sample Run:
Enter an integer: 8
Enter a prime number: 2

Sample output:
2 is a factor of 8


Sample Run:
Enter an integer: 9
Enter a prime number: 5

Sample output
5 is not a factor of 9
 */




/*
A clock has the hours numbered from 1 to 12. Write a function that returns the time on that clock after n hours, if the
time starts at hour h

Sample run:
Enter starting hour: 11
Enter the hours spent: 14

The time now is 1:00
 */



/*
Convert milliseconds to hours, minutes, and seconds) Write a function that converts milliseconds to hours, minutes,
and seconds using the following header:
def convertMillis(millis):

The function returns a string as hours:minutes:seconds. For example, convertMillis(5500) returns the string 0:0:5,
convertMillis(100000) returns the string 0:1:40, and convertMillis(555550000) returns the string 154:19:10.
Write a test program that prompts the user to enter a value for milliseconds and displays a string in the format of
hours:minutes:seconds.
*/

#endif //C_MODULO_H
