//
// Created by Adam Saher on 2022-04-18.
//

#include <fstream>
#include <vector>
#include <iostream>
#include "S2.h"

Board::Board() {
    std::cin >> rows >> cols >> instructions;
    std::vector<bool> flipped_rows(rows, false), flipped_cols(cols, false);

    char ch;
    unsigned j;
    for (auto i = 0u; i < instructions; ++i) {
        std::cin >> ch >> j;
        if (ch == 'R') flipped_rows[j] = !flipped_rows[j];
        else if (ch == 'C') flipped_cols[j] = !flipped_cols[j];
    }

    auto count_flipped_rows = std::count(flipped_rows.begin(), flipped_rows.end(), true);
    auto count_flipped_cols = std::count(flipped_cols.begin(), flipped_cols.end(), true);

    std::cout << count_flipped_rows << ' ' << count_flipped_cols << std::endl;

    std::cout << count_flipped_rows * (cols - count_flipped_cols) + count_flipped_cols * (rows - count_flipped_rows);
}
