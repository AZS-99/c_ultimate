//
// Created by Adam Saher on 2022-11-30.
//

#include <iostream>
#include "J4.h"

//std::pair<unsigned, unsigned> cross() {
//    unsigned cols, rows, cut_cols, cut_rows, steps, cycles;
//
//    std::cin >> cols >> rows >> cut_cols >> cut_rows >> steps;
//
//    cycles = 0u;
//    auto covered_steps = 0u;
//
//    while (true) {
//        if (covered_steps + 2 * (rows + cols) <= steps) {
//            covered_steps +=  2 * (rows + cols);
//            rows -= 2;
//            cols -= 2;
//            ++cycles;
//        } else break;
//    }
//
//
//    unsigned row, col;
//    unsigned remainder = steps % cycles;
//    row = cycles;
//    col = cut_rows + cycles - 1u;
//
//    if (covered_steps < cols) {
//        covered_steps += cols;
//        col += cols;
//    } else return std::make_pair(col + steps - covered_steps, row);
//
//    if (covered_steps < cut_rows) {
//        covered_steps += cut_rows;
//        row += cut_rows;
//    } else return std::make_pair(col, row + steps - covered_steps);
//
//    if (covered_steps < cut_cols) {
//        covered_steps += cut_cols;
//        col += cut_cols;
//    } else return std::make_pair(col + steps - covered_steps, rows);
//
//    if (covered_steps < rows) {
//        covered_steps += rows;
//        row += rows;
//    }
//    else return std::make_pair()
//
//
//}
//


//Cross::Cross() {
//    std::cin >> cols >> rows >> cut_rows >> cut_cols;
//
//    grid = std::vector<std::vector<CrossNode*>>(rows, std::vector<CrossNode*>(cols));
//
//    for (auto i = 0u; i < rows; ++i) {
//        for (auto j = 0u; j < cols; ++j)
//            if (i >= cut_rows && i < rows - cut_rows || j >= cut_cols && j < cols - cut_cols) grid[i][j] = new CrossNode;
//    }
//}
