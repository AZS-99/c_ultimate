//
// Created by Adam Saher on 2022-09-23.
//

#ifndef C_J2_H
#define C_J2_H

#include <string>

/*
Americans spell differently from Canadians. Americans write "neighbor" and "color" while Canadians write "neighbour" and
"colour”.
Write a program to help Americans translate to Canadian.
Your program should interact with the user in the following way. The user should type a word (not to exceed 64 letters)
and if the word appears to use American spelling, the program should echo the Canadian spelling for the same word. If
the word does not appear to use American spelling, it should be output without change. When the user types "quit!" the
program should terminate.

The rules for detecting American spelling are quite naive: If the word has more than four letters and has a suffix
consisting of a consonant followed by "or", you may assume it is an American spelling, and that the equivalent Canadian
spelling replaces the "or" by "our". Note : you should treat the letter "y" as a vowel.
Keyboard input and screen output is expected.

Sample session. User input in italics.
Enter words to be translated:
color
colour
for
for
taylor
taylour
quit!
 */

void to_canadian();


#endif //C_J2_H
