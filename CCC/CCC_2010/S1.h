//
// Created by Adam Saher on 2022-07-16.
//

#ifndef C_S1_H
#define C_S1_H


/*
Problem S1: Computer Purchase
Problem Description
In order to increase your performance on the ABC (Another Buying Contest), you decide that you need a new computer. When
determining which computer to buy, you narrow your search categories to:

• RAM (in gigabytes), denoted as R;
• CPU speed (in megahertz), denoted as S;
• disk drive space (in gigabytes), denoted as D.

You perform some analysis and determine that the most preferred machine is the machine that has the largest value of the
formula:
                                            2 * R + 3 * S + D

Your task is to read a given list of computers and output the top two computers in order of preference, from highest
preference to lowest preference.

Input Specification
The first line of input will be an integer pens_count (0 ≤ pens_count ≤ 10000). Each of the remaining pens_count lines of input will contain a
computer specification. A computer specification is of the form:

• computer name (a string of less than 20 characters)
• the RAM available (an integer R with 1 ≤ R ≤ 128)
• the CPU speed (an integer S with 1 ≤ S ≤ 4000)
• the disk drive space (an integer D with 1 ≤ D ≤ 3000)

There is one space between the name, RAM, CPU speed and disk drive space on each line.

Output Specification
The output is the name of the top two preferred computers, one name per line, sorted in decreasing order of preference.
If there is a tie in the rankings, pick the computer(s) whose name(s) are lexicographically smallest (i.e., “Apple” is
smaller than “Dell”). If there is only one computer, output that computer on one line (i.e., do not print it twice).

Sample Input
4
ABC 13 22 1
DEF 10 20 30
GHI 11 2 2
JKL 20 20 20
Output for Sample Input
JKL
DEF

Explanation of Output for Sample Input
Computer ABC has a computed value of 93. Computer DEF has a computed value of 110. Computer GHI has a computed value of
30. Computer JKL has a computed value of 120. Therefore, computer JKL is the most preferred, followed by computer DEF.


Sample Input 2:
0
Output for Sample Input 2:

Sample Input 3
27
AZ 128 3999 3000
ZA 128 3998 3000
ER 128 3997 3000
FF 128 3996 3000
GF 128 3995 3000
AX 128 3994 3000
XA 128 3993 3000
LF 128 3992 3000
LM 128 3991 3000
MR 128 3990 3000
RA 128 3989 3000
WW 128 3988 3000
AZZZZ 128 3987 3000
ZAAAA 128 3986 3000
PRTR 128 3985 3000
AFFDS 128 3984 3000
DIGIMON 128 3983 3000
dsdds 128 3982 3000
eqe 128 3981 3000
dad 128 3980 3000
functional 128 3979 3000
analysis 128 3978 3000
icecream 128 3977 3000
temperature 128 3976 3000
atlas 128 3975 3000
design 128 4000 2999
GG 128 4000 3000

Output for Sample Input 3:
GG
design
 */

#endif //C_S1_H
