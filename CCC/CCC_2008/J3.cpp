//
// Created by Adam Saher on 2022-09-05.
//
#include <string>
#include <iostream>
#include <unordered_map>
#include "J3.h"

unsigned count_cursor_moves() {
    std::string str;
    getline(std::cin, str);
    int row0, col0, row1, col1, moves, letter_index;
    std::unordered_map<char, int> special_chars {{
          {' ', 2},
          {'-', 3},
          {'.', 4}
    }};

    row0 = col0 = moves = 0;
    for (char& ch: str) {
        letter_index = ch - 'A';
        if (letter_index < 0) {
            row1 = 4;
            col1 = special_chars[ch];
        } else {
            row1 = letter_index / 6;
            col1 = letter_index % 6;
        }

        moves += std::abs(row1 - row0) + std::abs(col1 - col0);
        row0 = row1;
        col0 = col1;
    }

    moves += (4 - row0) + (5 - col0); // To count for the "enter"
    return moves;
}