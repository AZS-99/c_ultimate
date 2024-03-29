//
// Created by Adam Saher on 2022-10-15.
//

#ifndef C_S1_H
#define C_S1_H


/*
A collection of words is prefix-free if no word is a prefix of any other word. A collection of words is suffix-free if
no word is a suffix of any other word. A collection of words is fix-free if it is both prefix-free and suffix-free.
For this problem, a word is a sequence of lower-case letters of length between 1 and 25. A word X is a prefix of word Y
if X consists of the first n characters of Y, in order, for some n. That is, the word “cat” has prefixes “c”, “ca”, and
“cat”. Similarly, a word X is a suffix of Y if X consists of the last n characters of Y, in order, for some n.

Your input will be 3N+1 lines: the first line will be the number N, and the remaining 3N lines will be the N collections
of 3 words each. (That is, lines 2, 3, and 4 compose the
first collection, lines 5, 6, and 7 compose the second collection, and so on). Your output will be N lines, each line
containing either Yes (if that collection of words is fix-free) or No (if that collection is not fix-free).

Sample Input
2
abba
aab
bab
a
ab
aa
Sample Output
Yes
No

Sample Input 2
3
xxxx
xaxaxxxxa
dsljjfksadfjkqo
axxaxaax
aaxa
axxaxaaxaaxaaxa
abcdefghijklmnopqrstuvwx
aabcdefghijklmnopqrstuvwx
abcdefghijklmnopqrstuvwxy
Output 2
Yes
No
No
*/

#endif //C_S1_H
