//
// Created by Adam Saher on 2022-10-18.
//

#ifndef C_J3_H
#define C_J3_H


/*
Prerequisites: ASCII
Problem Description
In Sweden, there is a simple child’s game similar to Pig Latin called Ro ̈varspra ̊ket (Robbers Language).
In the CCC version of Ro ̈varspra ̊ket, every consonant is replaced by three letters, in the following order:
• the consonant itself;
• the vowel closest to the consonant in the alphabet (e.g., if the consonant is d, then the closest vowel is e), with
the rule that if the consonant falls exactly between two vowels, then the vowel closer to the start of the alphabet will
be chosen (e.g., if the consonant is c, then the closest vowel is a);
• the next consonant in the alphabet following the original consonant (e.g., if the consonant is d, then the next
 consonant is f) except if the original consonant is z, in which case the next consonant is z as well.

Vowels in the word remain the same. (Vowels are a, e, i, o, u and all other letters are consonants.) Write a program
that translates a word from English into Ro ̈varspra ̊ket.

Input Specification
The input consists of one word entirely composed of lower-case letters. There will be at least one letter and no more
than 30 letters in this word.

Output Specification
Output the word as it would be translated into Ro ̈varspra ̊ket on one line.

Sample Input 1
joy
Output for Sample Input 1
jikoyuz

Sample Input 2
ham
Output for Sample Input 2
hijamon
*/

void robbers();


#endif //C_J3_H
