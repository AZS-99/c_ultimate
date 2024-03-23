//
// Created by Adam Saher on 2022-08-30.
//
#include <iostream>
#include "J5S3.h"

SquareGrid::SquareGrid() {
    unsigned rows, cols;
    char ch;
    std::cin >> rows >> cols;
    grid.resize(rows);

    for (auto& row: grid) {
        row.resize(cols, new SquareNode);
        for (auto j = 0u; j < cols; ++j) {
            std::cin >> ch;
            row[j] = new SquareNode(ch == 'X');
        }
    }

    for (auto i = 0u; i < rows; ++i) {

    }



}

SquareNode::SquareNode(const bool& is_obstacle) {
    obstacle = is_obstacle;
}
