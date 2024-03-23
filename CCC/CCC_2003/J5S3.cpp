//
// Created by Adam Saher on 2022-11-24.
//

#include <algorithm>
#include "J5S3.h"

Flat::Flat() {
    char ch;
    unsigned rows, cols;
    std::cin >> tiles >> rows >> cols;
    grid = std::vector(rows, std::vector<FlatNode*>(cols, nullptr));

    for (auto i = 0u; i < rows; ++i) {
        for (auto j = 0u; j < cols; ++j) {
            std::cin >> ch;
            if (ch == '.') grid[i][j] = new FlatNode;
        }
    }

    FlatNode* node;
    for (auto i = 0u; i < rows; ++i) {
        for (auto j = 0u; j < cols; ++j) {
            if (grid[i][j]) {
                node = grid[i][j];
                if (i > 0) node->neighbours[0] = grid[i-1][j];
                if (i < rows - 1) node->neighbours[2] = grid[i+1][j];
                if (j > 0) node->neighbours[3] = grid[i][j-1];
                if (j < cols - 1) node->neighbours[1] = grid[i][j+1];
            }
        }
    }
}



void Flat::contagious(FlatNode* node) {
    node->belongs = true;
    for (auto neighbour: node->neighbours) {
        if (neighbour && !neighbour->belongs) {
            neighbour->id = node->id;
            ++room_sizes[node->id];
            contagious(neighbour);
        }
    }
}

void Flat::run() {
    for (auto& row: grid) {
        for (auto& node: row) {
            if (node && !node->belongs) {
                node->id = room_sizes.size();
                room_sizes.push_back(1u);
                contagious(node);
            }
        }
    }
    std::sort(room_sizes.begin(), room_sizes.end(), std::greater{});
    for (auto value: room_sizes) std::cout << value << ' ';
    auto rooms = 0u;
    for (auto size: room_sizes) {
        if (tiles >= size) {
            tiles -= size;
            ++rooms;
        } else break;
    }
    std::cout << "rooms: " << rooms << ", leftovers: " << tiles;
}

