//
// Created by Adam Saher on 2022-10-18.
//

#ifndef C_J3_H
#define C_J3_H


/*
Problem Description
Antonia and David are playing a game.
Each player starts with 100 points.
The game uses standard six-sided dice and is played in rounds. During one round, each player rolls one die. The player
with the lower roll loses the number of points shown on the higher die. If both players roll the same number, no points
are lost by either player.
Write a program to determine the final scores.

Input Specification
The first line of input contains the integer n (1 ≤ n ≤ 15), which is the number of rounds that will be played. On each
of the next n lines, will be two integers: the roll of Antonia for that round, followed by a space, followed by the roll
of David for that round. Each roll will be an integer between 1 and 6 (inclusive).

Output Specification
The output will consist of two lines. On the first line, output the number of points that Antonia has after all rounds
have been played. On the second line, output the number of points that David has after all rounds have been played.

Sample Input
4
5 6
6 6
4 3
5 2
Output for Sample Input
94
91

Explanation of Output for Sample Input
After the first round, David wins, so Antonia loses 6 points. After the second round, there is a tie and no points are
lost. After the third round, Antonia wins, so David loses 4 points. After the fourth round, Antonia wins, so David loses
5 points. In total, Antonia has lost 6 points and David has lost 9 points.
*/

void calculate_points();


#endif //C_J3_H
