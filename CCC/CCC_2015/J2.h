//
// Created by Adam Saher on 2022-08-26.
//

#ifndef C_J2_H
#define C_J2_H

#include <string>

/*
Problem Description
We often include emoticons in our text messages to indicate how we are feeling. The three con- secutive characters :-)
indicate a happy face and the three consecutive characters :-( indicate a sad face. Write a program to determine the
overall mood of a message.

Input Specification
There will be one line of input that contains between 1 and 255 characters.
Output Specification
The output is determined by the following rules:
• If the input line does not contain any happy or sad emoticons, output none.
• Otherwise, if the input line contains an equal number of happy and sad emoticons, output unsure.
• Otherwise, if the input line contains more happy than sad emoticons, output happy. • Otherwise, if the input line
  contains more sad than happy emoticons, output sad.

Sample Input 1
How are you :-) doing :-( today :-)?
Output for Sample Input 1
happy

Sample Input 2
:)
Output for Sample Input 2
none

Sample Input 3
This:-(is str:-(:-(ange te:-)xt.
Output for Sample Input 3
sad
 */

std::string count_emojis(const std::string&);


#endif //C_J2_H
