//
// Created by Adam Saher on 2022-12-04.
//

#ifndef C_ARRAYS_H
#define C_ARRAYS_H

#include <vector>

/*
Write a program that reads a vector of integers separated by a space, then displays them as shown in the following sample

Sample
Enter a list of values: 1 4 5 0
The list you have entered is: [1, 4, 5, 0]
*/
std::vector<unsigned> read_ints();



/*
Write a program that reads a vector of integers, then displays them in ascending order

Sample
Enter a list of integers: 9 0 4 1 2
Sorted: [0, 1, 2, 4, 9]
*/


/*
Write a program that prompts the user to enter a list of integers, the displays them in descending order

Sample
Enter a list of integers: 9 0 4 1 2
Descending order: 9 4 2 1 0
*/



/*
Write a program that reads a list of integers separated by a comma and a space, and displays them in the reverse order in
which they were read.

Sample:
Enter a list of values: 5, 1, 4, 6
The reverse order is: [6, 4, 1, 5]
*/



/*
Write a program that reads a list of integers of values between 1 and 1000, separated by a space in one line, then
displays the distinct numbers in ascending order (Each number is displayed only once).
Here is the sample run of the program:

Enter a list of numbers: 1 2 3 2 1 6 3 4 5 2
The distinct numbers are: 1 2 3 4 5 6
*/





/*
Write a program that reads a list of integers, then returns a list of only distinct values using sets

Sample:
Enter a list of integers: 1 1 4 5 4 4 6 5 9 8 9 8
Unique values: [1, 4, 5, 6, 9, 8]
*/




/*
(Count occurrence of numbers) Write a program that reads a list of integers of values between 1 and 100, then displays
the count of the occurrences of each. Here is a sample run of the program:

Enter integers between 1 and 100: 2 5 6 5 4 3 23 43 2
2 occurs 2 times
3 occurs 1 time
4 occurs 1 time
5 occurs 2 times
6 occurs 1 time
23 occurs 1 time
43 occurs 1 time
*/



/*
Write a programme that randomly generates 10 numbers, all of them between 0 and 9, then counts the occurrences of
each number.


The list generated is: 0 2 2 1 3 1 5 1 2 6

0 occurred 1 time
1 occurred 3 times
2 occurred 3 times
3 occurred 1 time
5 occurred 1 time
6 occurred 1 time
*/


/*
Write a programme that returns whether two lists contain the exact same values
Sample 1:
Enter list1: 2 7 6 5
Enter list2: 2 5 6 7
The two lists are identical!

Sample 2:
Enter list1: 2 5 6 4
Enter list2: 2 5 7 6
The two lists are NOT identical!
*/



/*
(Anagrams) Write a function that checks whether two words are anagrams. Two words are anagrams if they contain the same
letters. For example, silent and listen are anagrams. The header of the function is:
                                            def is_anagram(s1, s2)
(Hint: Obtain two lists for the two strings. Sort the lists and check if two lists are identical.)
Write a test programme that prompts the user to enter two strings and, if they are anagrams, displays is an anagram;
otherwise, it displays is not an anagram
*/


/*
(Analyze scores) Write a program that reads an unspecified number of scores and determines how many scores are above or
equal to the average and how many scores are below the average. Assume the input numbers are separated by one space in
one line.
Sample Input
Enter scores: 60 50 70 90 80
Scores < average: 2
Scores >= average: 3
*/




/*
Write a program that copies all the values in list1 into list2
Example
Enter list1: 1 2 3 4
List2 has been copied from list1, and its values are: [1, 2, 3, 4]
*/




// RANDOM
/*
Write a program that generates 10 numbers, and appends all of them to a list, then prints that list
*/


/*
(Count single digits) Write a program that generates 1,000 random integers between 0 and 9 and displays the count for
each number. (Hint: Use a list of ten integers, say counts, to store the counts for the number of 0s, 1s, ..., 9s.)

[1, 2, 2, 2, 3, 1, 1, 4, 5]
 */


/*
Write a program to find out the Chinese zodiac sign for a given year. The Chinese zodiac sign is based on a 12-year
cycle, and each year in this cycle is represented by an animal: monkey, rooster, dog, pig, rat, ox, tiger, rabbit,
dragon, snake, horse, and sheep. Given that year 0 was a monkey.

Sample input:
Enter a year: 1900
1900 was the year of the rat!
*/





/*
Write a function that reads a number as an input, and returns whether it contains only distinct digits

Sample 1:
Enter a number: 34526
Output for Sample Input 1
true

Sample 2:
Enter a number 124256
Output for Sample Input 2:
false
 */




/*
(Game: hangman) Write a hangman game that randomly generates a word and prompts the user to guess one letter at a time,
as shown in the sample run. Each letter in the word is displayed as an asterisk. When the user makes a correct guess,
the actual letter is then displayed. When the user finishes a word, display the number of misses and ask the user
whether to continue playing. Create a list to store the words, as follows:
            # Use any words you wish
words = ["write", "that", "program", ...]

(Guess) Enter a letter in word ******* > p
(Guess) Enter a letter in word p****** > r
(Guess) Enter a letter in word pr**r** > p
p is already in the word
(Guess) Enter a letter in word pr**r** > o
(Guess) Enter a letter in word pro*r** > g
(Guess) Enter a letter in word progr** > n
n is not in the word
(Guess) Enter a letter in word progr** > m
(Guess) Enter a letter in word progr*m > a
The word is program. You missed 1 time
Do you want to guess another word? Enter y or n>
 */
#endif //C_ARRAYS_H
