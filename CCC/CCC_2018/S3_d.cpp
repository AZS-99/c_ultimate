//
// Created by Adam Saher on 2023-03-01.
//
#include <iostream>
#include "S3_d.h"

RoboNode::RoboNode(const char& ch) { this->ch = ch;}

RoboGrid::RoboGrid() {
    char ch;
    std::cin >> rows >> cols;
    grid = std::vector(rows, std::vector<RoboNode*>(cols, nullptr));

    for (auto i = 0u; i < rows; ++i) {
        for (auto j = 0u; j < cols; ++j) {
            std::cin >> ch;
            if (ch != 'W') {
                grid[i][j] = new RoboNode(ch);
                if (ch == 'C') cam_locations.emplace_back(i, j);
                else if (ch == '.') spot_locations.emplace_back(i, j);
                else if (ch == 'S') {
                    grid[i][j]->distance = 0u;
                    pq.push(grid[i][j]);
                }
            }
        }
    }


    for (const auto& [i, j]: cam_locations) {
        std::cout << i << ' ' << j << std::endl;
        for (auto k = i + 1u; grid[k][j]; ++k) grid[k][j]->visited = true;
        for (auto k = i - 1u; grid[k][j]; --k) grid[k][j]->visited = true;
        for (auto k = j + 1u; grid[i][k]; ++k) grid[k][j]->visited = true;
        for (auto k = j - 1u; grid[i][k]; --k) grid[k][j]->visited = true;
    }
//
//
//    for (auto i = 0u; i < rows; ++i) {
//        for (auto j = 0u; j < cols; ++j) {
//            if (grid[i][j]) {
//                ch = grid[i][j]->ch;
//                if (i > 0u && (ch == '.' || ch == 'U' || ch == 'S' )) grid[i][j]->neighbours[0u] = grid[i-1u][j];
//                if (j < cols - 1u && (ch == '.' ||  ch == 'R' || ch == 'S')) grid[i][j]->neighbours[1u] = grid[i][j+1u];
//                if (i < rows - 1u && (ch == '.' || ch == 'D' || ch == 'S')) grid[i][j]->neighbours[2u] = grid[i+1u][j];
//                if (j > 0u && (ch == '.' || ch == 'L' || ch == 'S')) grid[i][j]->neighbours[3u] = grid[i][j-1u];
//            }
//        }
//    }
}


void RoboGrid::dijkstra() {
    RoboNode* parent;
    while (!pq.empty()) {
        parent = pq.top();
        pq.pop();
        parent->visited = true;
        for (auto child: parent->neighbours) {
            if (child && !child->visited) {
                if (child->distance > parent->distance + 1u) child->distance = parent->distance + 1u;
                pq.push(child);
            }
        }
    }
}

void RoboGrid::print() const {
    for (auto [i, j]: spot_locations) std::cout << grid[i][j]->distance << ' ';
}

bool GreaterRoboNode::operator()(const RoboNode* n1, const RoboNode* n2) {
    return n1->distance > n2->distance ;
}
