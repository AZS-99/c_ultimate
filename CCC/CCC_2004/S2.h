//
// Created by Adam Saher on 2022-08-18.
//

#ifndef C_S2_H
#define C_S2_H

/*
A yodel is a wordless song that shifts suddenly from a normal voice to a high, falsetto voice and back. Yodeling,
present in many Swiss folk songs, is commonly heard throughout the Alps.
The TopYodeller contest invites the world’s best yodellers to compete for a share of 100,000 Swiss Francs, with the best
yodeller receiving 50,000 Francs. Each yodeller competes in a series of yodel rounds, and is assigned a score, by the
judge, for their performance in the round. To keep the judge impartial, each yodeller is assigned a contestant number.
Every yodeller competes in every yodel round. After all the yodel rounds are complete, the yodeller with the highest
total score is declared the TopYodeller.

You have been hired by the TopYodeller Contest Co-ordinating Committee (CCC) to write a program which generates a
scoreboard so that yodel fans around the world can track the progress of the best yodellers on the Internet.
After each round, each yodeller’s cumulative score is calculated and a rank is assigned. A yodeller’s rank is j+1 if j
yodellers have a cumulative score higher than their score. Therefore, there may be multiple yodellers at the same rank.

Input
Each test case consists of one TopYodeller competition. The first line of the input contains two integers, pens_count and hydrants;
pens_count (2 ≤ pens_count ≤100) represents the number of yodellers in the competition, and hydrants (1 ≤ hydrants ≤ 100) represents the number of yodel
rounds in the competition. Yodellers are assigned contestant numbers from 1 to pens_count.
Next in the input are hydrants lines, each line representing a yodel round.
Each line of input representing a yodel round contains pens_count integers. These pens_count integers give the scores assigned to the pens_count
yodellers by the judge. The first integer corresponds to the score given to yodeller number 1, and so forth. The score
assigned to a yodeller in any given round is an integer between −1000 and 1000, inclusive.

Output
For the highest-ranked yodeller at the end of the competition, output “Yodeller x is the TopYodeller: score y, worst
rank z'' where x is the contestant number, y is their total score after the competition, and z is their worst rank at
any time during

the competition. If there is a tie for TopYodeller, the output should be one line per winning contestant, listed by
increasing competitor number.

Sample Input
5 2
99 97 100 85 -4
95 97 100 62 1000

Sample Output
Yodeller 5 is the TopYodeller: score 996, worst rank 5

Explanation of Sample Input and Output
Does not have to be included with output.
After Round 1
Yodeller 3 has score 100, and is ranked 1.
Yodeller 1 has score 99, and is ranked 2.
Yodeller 2 has score 97, and is ranked 3
Yodeller 4 has score 85, and is ranked 4
Yodeller 5 has score -4, and is ranked 5.

After Round 2
Yodeller 5 has score 996, and is ranked 1.
Yodeller 3 has score 200, and is ranked 2.
Yodeller 1 has score 194, and is ranked 3.
Yodeller 2 has score 194, and is ranked 3.
Yodeller 4 has score 147, and is ranked 5.


Sample input 2
7 4
182 572 392 -381 -371 -999 -591
718 -813 -116 31 219 877 580
-946 62 575 516 -469 -827 -196
113 -411 -94 32 94 -301 301

Sample output 2
Yodeller 3 is the TopYodeller: score 757, worst rank 2
 */

class S2 {

};


#endif //C_S2_H
