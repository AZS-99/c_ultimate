//
// Created by Adam Saher on 2022-04-17.
//

#ifndef CCC_S2_H
#define CCC_S2_H

#include <vector>
#include <unordered_map>

/*
Problem Description
You have to determine if it is possible to escape from a room. The room is an M-by-N grid with each position (cell)
containing a positive integer. The rows are numbered 1,2,...,M and the columns are numbered 1,2,...,N. We use (r,c) to
refer to the cell in row r and column c.
You start in the top-left corner at (1,1) and exit from the bottom-right corner at (M,N). If you are in a cell
containing the value x, then you can jump to any cell (a, b) satisfying a × b = x. For example, if you are in a cell
containing a 6, you can jump to cell (2, 3).

Note that from a cell containing a 6, there are up to four cells you can jump to: (2, 3), (3, 2), (1, 6), or (6, 1). If
the room is a 5-by-6 grid, there isn’t a row 6 so only the first three jumps would be possible.

Input Specification
The first line of the input will be an integer M (1 ≤ M ≤ 1000). The second line of the input will be an integer
N (1 ≤ N ≤ 1000). The remaining input gives the positive integers in the cells of the room with M rows and N columns. It
consists of M lines where each line contains N positive integers, each less than or equal to 1 000 000, separated by
single spaces.
For 1 of the 15 available marks, M =2 and N =2.
For an additional 2 of the 15 available marks, M = 1.
For an additional 4 of the 15 available marks, all of the integers in the cells will be unique. For an additional 4 of
the 15 available marks, M ≤ 200 and N ≤ 200.

Output Specification
Output yes if it is possible to escape from the room. Otherwise, output no.

Sample Input
3
4
3 10 8 14
1 11 12 12
6 2 3 9
Output for Sample Input
yes

Explanation of Output for Sample Input
Starting in the cell at (1, 1) which contains a 3, one possibility is to jump to the cell at (1, 3). This cell contains
an 8 so from it, you could jump to the cell at (2, 4). This brings you to a cell containing 12 from which you can jump
to the exit at (3, 4). Note that another way to escape is to jump from the starting cell to the cell at (3, 1) to the
cell at (2, 3) to the exit.


Sample Input 2
8
7
22 51 35 6 7 48 43
36 54 15 24 56 4 18
39 10 33 32 9 14 34
28 25 42 55 16 50 46
11 12 37 13 31 2 38
40 17 23 5 26 47 21
41 45 1 3 19 8 30
44 27 53 20 29 52 49
Output for Sample Input 2
no
 
Sample Input 3
16
9
12 6 86 46 35 22 3 125 85
114 36 54 141 50 8 54 86 128
85 17 141 88 115 114 122 13 98
11 57 73 91 144 9 85 17 113
115 106 130 137 8 92 115 104 124
132 64 2 140 116 18 144 80 132
144 142 130 15 55 30 3 115 46
101 61 105 74 122 131 44 14 11
20 54 93 14 138 28 102 132 71
3 104 123 9 49 48 59 52 98
1 25 76 89 21 50 138 142 93
48 124 91 87 57 50 142 66 83
26 8 101 9 140 71 42 47 81
133 68 133 124 4 46 12 139 72
78 99 88 139 92 55 127 134 17
36 127 22 53 65 89 33 57 46
Output for Sample Input 3
yes

Notes:
1. The online grader begins by testing submissions using the sample input. All other tests are skipped if the sample
test is not passed. If you are only attempting the first three subtasks (the first 7 marks), then you might want to
handle the specific values of the sample input as a special case.
2. For the final subtask (worth 2 marks), if you are using Java, then Scanner will probably
take too long to read in the large amount of data. A much faster alternative is BufferedReader.
 */



//
//class BotNode {
//    unsigned val;
//    bool visited;
//    friend class BotGrid;
//    BotNode(const unsigned& = 0u);
//};
//
//class BotGrid {
//    std::vector<std::vector<BotNode>> rooms;
//    unsigned rows, columns;
//    std::unordered_map<unsigned, std::vector<std::pair<unsigned, unsigned>>> points;
//public:
//    BotGrid();
//    void run();
//    bool leads_to_begin(const unsigned&, const unsigned&);
//};




#endif //CCC_S2_H
