//
// Created by Adam Saher on 2022-08-10.
//

#ifndef C_J5_S3_H
#define C_S3_H

/*
Problem Description
You want to determine the chances that your favourite team will be the champion of a small tournament.
There are exactly four teams. At the end of the tournament, a total of six games will have been played against each team
playing every other team exactly once. For each game, either one team wins (and the other loses), or the game ends in a
tie. If the game does not end in a tie, the winning team is awarded three points and the losing team is awarded zero
points. If the game ends in a tie, each team is awarded one point.

Your favourite team will only be the champion if it ends the tournament with strictly more total points than every other
team (i.e., a tie for first place is not good enough for your favourite team).
The tournament is not over yet, but you know the scores of every game that has already been played. You want to consider
all possible ways points could be awarded in the remaining games that have not yet been played and determine in how many
of these cases your favourite team will be the tournament champion.

Input Specification
The first line of input will contain an integer T which is your favourite team (1 ≤ T ≤ 4).
The second line will contain an integer G, the number of games already played (0 ≤ G ≤ 5).
The next G lines will give the results of games that have already been played. Each of these lines will consist of four
integers A, B, SA, SB separated by single spaces where 1 ≤ A < B ≤ 4, and SA, SB ≥ 0. This corresponds to a game between
team A (which had score SA) and team B (which had score SB) where team A won if SA > SB,team B won if SA < SB and the
game ended in a tie if SA = SB . The pairs A and B on the input lines are distinct, since no pair of teams plays twice.

Output Specification
The output will consist of a single integer which is the number of times that team T is the champion over all possible
awarding of points in the remaining games in the tournament.

Sample Input 1
3
3
1 3 7 5
3 4 0 8
2 4 2 2
Output for Sample Input 1
0

Explanation of Output for Sample Input 1
Team 3 has lost two of its three games, and team 4 has tied one and won one, which gives 4 points to team 4. Even if
team 3 wins its final game, it cannot have more points than team 4, and thus, will not be champion.

Sample Input 2
3
4
1 3 5 7
3 4 8 0
2 4 2 2
1 2 5 5
Output for Sample Input 2
9

Explanation of Output for Sample Input 2
After these games, we know the following:

                                                  Team        Points
                                                    1           1
                                                    2           2
                                                    3           6
                                                    4           1

There are two remaining games (team 3 plays team 2; team 1 plays team 4). Teams 1, 2 or 4 cannot achieve 6 points, since
even if they win their final games, their final point totals will be 4, 5 and 4 respectively. Thus, out of the 9
possible outcomes (2 matches with 3 different possible results per match), team 3 will be the champion in all 9 outcomes

*/

class J5_S3 {

};


#endif //C_J5_S3_H
