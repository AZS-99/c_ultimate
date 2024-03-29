//
// Created by Adam Saher on 2022-12-13.
//

#ifndef C_J4S2_H
#define C_J4S2_H


/*
A simple poem consists of one or more four-line verses. Each line consists of one or more words consisting of upper or
lower case letters, or a combination of both upper and lower case letters. Adjacent words on a line are separated by a
single space.
We define the last syllable of a word to be the sequence of letters from the last vowel ("a", "e", "i", "o" or "u", but
not "y") to the end of the word. If a word has no vowel, then the last syllable is the word itself. We say that two
lines rhyme if their last syllables are the same, ignoring case.

You are to classify the form of rhyme in each verse. The form of rhyme can be perfect, even, cross, shell, or free:
• perfect rhyme: the four lines in the verse all rhyme
• even rhyme: the first two lines rhyme and the last two lines rhyme
• cross rhyme: the first and third lines rhyme, as do the second and fourth
• shell rhyme: the first and fourth lines rhyme, as do the second and third
• free rhyme: any form that is not perfect, even, cross, or shell

The first line of the input file contains an integer N, the number of verses in the poem, 1 ≤ N ≤ 5. The following 4N
lines of the input file contain the lines of the poem. Each line contains at most 80 letters of the alphabet and spaces
as described above.
The output should have N lines. For each verse of the poem there should a single line containing one of the words
'perfect', 'even', 'cross', 'shell' or 'free' describing the form of rhyme in that verse.

Sample Input 1
1
One plus one is small
one hundred plus one is not
you might be very tall
but summer is not
Output for Sample Input 1
cross

Sample Input 2
2
I say to you boo
You say boohoo
I cry too
It is too much foo
Your teacher has to mark
and mark and mark and teach
To do well on this contest you have to reach
for everything with a lark
Output for Sample Input 2
perfect
shell

Sample Input 3
2
It seems though
that without some dough
creating such a bash
is a weighty in terms of cash
But how I see
the problem so fair
is to write subtle verse
with hardly a rhyme
Output for Sample Input 3
even
free
 */

#endif //C_J4S2_H
