//
// Created by Adam Saher on 2022-12-13.
//

#ifndef C_STRING1_H
#define C_STRING1_H
#include <string>





/*
Problem: All Substrings
Write a function that takes a string as an arguments, then prints all the possible substrings listed by their sizes
in descending order.

Sample Input:
abcd
Output for Sample Input:
abcd
abc
bcd
ab
bc
cd
a
b
c
*/
void substring_combinations(const std::string&);



// ASCII



/*
Write a function that takes a string made up of 2 characters, representing a cell in a spreadsheet, as an argument. Your
function should return both the row and the column of that cell.

Sample Input 1:
A3
Output for Sample Input 1:
Row: 0
Column: 2

Sample Input 2:
C9
Output for Sample Input 2:
Row: 2
Column: 8
*/


/*
Write a function that encrypts a message by replacing every letter by another that is 2 letters ahead

Sample:
aenh
Output
cgpj
*/
std::string simplest_encryption(const std::string&);



/*
Write a function that takes a letter as an argument, and returns the closest vowel. If the letter is equidistant to two
vowels, return the one ahead of it

Sample:
j
Output
i

Sample 2:
c
Output
a
*/






std::pair<unsigned, unsigned> spreadsheet_coord(const std::string &str);



/*
Write a function prompts the user to enter and integer n and a message, then encrypts that message by changing
every letter to the one which lies ahead of it by n places.

Sample:
3
zoom
Output:
crrp
 */

#endif //C_STRING1_H
