//
// Created by Adam Saher on 2022-04-29.
//
#include <fstream>
#include <iostream>
#include <array>
#include <queue>
#include "S3.h"

Node::Node(const char& ch, unsigned long long value) {
    this->ch = ch;
    this->value = value;
    left = nullptr;
    right = nullptr;
    up = nullptr;
    down = nullptr;
    visited = false;
}

std::ostream &operator<<(std::ostream& os, const Node& node) {
    os << "ch:" << node.ch << std::endl;
    os << "value:" << node.value << std::endl;
    os << "left:" << (node.left? 'X' : node.left->ch) << std::endl;
//    os << "right:" << (node.right? 'X': node.right->ch) << std::endl;
//    os << "up:" << (node.up? 'X': node.up->ch) << std::endl;
//    os << "down:" << (node.down? 'X': node.down->ch) << std::endl;
    os << (node.visited? "visited" : "not visited") << std::endl;
    os << "****";
}


RobotGrid::RobotGrid() {
    std::ifstream file("Data/CCC_2018/S3");
    file >> rows >> cols;
    char ch;
    grid = std::vector<std::vector<Node*>>(rows);
    for (auto i = 0u; i < rows; ++i) {
        std::vector<Node*> row(cols);
        for (auto j = 0u; j < cols; ++j) {
            file >> ch;
            row[j] = new Node(ch);
            if (ch == '.') exit_positions.push_back(row[j]);
            else if (ch == 'C') cams.emplace_back(i, j);
            else if (ch == 'S') {
                start = row[j];
                start->value = 0;
            }
        }
        grid[i] = row;
    }
    block_watched_spots();

    Node* node;
    for (auto i = 0u; i < rows; ++i) {
        for (auto j = 0u; j < cols; ++j) {

            node = grid[i][j];
            ch = node->ch;

            node->x = i;
            node->y = j;

            if (!(ch == 'W' || ch == 'C')) {

                if (i > 0 && (ch == '.' || ch == 'U' || ch == 'S')) {
                    if (!(grid[i-1][j]->ch == 'W' || grid[i-1][j]->ch == 'D' || grid[i-1][j]->ch == 'S'))
                        node->up = grid[i-1][j];
                }

                if (i < rows - 1 && (ch == '.' || ch == 'D' || ch == 'S')) {
                    if (!(grid[i+1][j]->ch == 'W' || grid[i+1][j]->ch == 'U' || grid[i+1][j]->ch == 'S'))
                        node->down = grid[i+1][j];
                }

                if (j > 0 && (ch == '.' || ch == 'L' || ch == 'S'))
                    if (!(grid[i][j-1]->ch == 'W' || grid[i][j-1]->ch == 'R' || grid[i][j-1]->ch == 'S')) {
                        node->left = grid[i][j-1];
                }

                if (j < cols - 1 && (ch == '.' || ch == 'R' || ch == 'S')) {
                    if (!(grid[i][j+1]->ch == 'W' || grid[i][j+1]->ch == 'L' || grid[i][j+1]->ch == 'S'))
                        node->right = grid[i][j+1];
                }
            }
        }
    }
    dijkstra_vec.push_back(start);
    dijkstra(dijkstra_vec);
}




void RobotGrid::block_watched_spots() {
    std::vector<Node*> marked;
    for (auto& cam: cams) {

        auto cam_r = cam.first;
        auto cam_c = cam.second;
        for (auto c = cam_c + 1; grid[cam_r][c]->ch != 'W'; ++c) {
            if (grid[cam_r][c]->ch == '.')
                marked.push_back(grid[cam_r][c]);
        }

        for (auto c = cam_c - 1; grid[cam_r][c]->ch != 'W'; --c) {
            if (grid[cam_r][c]->ch == '.')
                marked.push_back(grid[cam_r][c]);
        }

        for (auto r = cam_r + 1; grid[r][cam_c]->ch != 'W'; ++r) {
            if (grid[r][cam_c]->ch == '.')
                marked.push_back(grid[r][cam_c]);
        }


        for (auto r = cam_r - 1; grid[r][cam_c]->ch != 'W'; --r) {
            if (grid[r][cam_c]->ch == '.') {
                marked.push_back(grid[r][cam_c]);
            }
        }
        grid[cam_r][cam_c]->ch = 'W';
    }


    for (auto& node: marked){
        node->ch = 'W';
    }
}




void RobotGrid::dijkstra(std::vector<Node*>& dij_vec) {
    if (std::all_of(dij_vec.cbegin(), dij_vec.cend(), [] (const Node* node) { return node->visited; })) return;

    auto it = std::min_element(dij_vec.cbegin(), dij_vec.cend(), [] (const Node* node1, const Node* node2) {
        return node1->value < node2->value;
    });

    auto node = *it;

    node->visited = true;

    if (node->right && !node->right->visited) {
        if (node->right->ch == '.') {
            if (node->right->value > node->value + 1) node->right->value = node->value + 1;
        } else if (node->right->value > node->value) node->right->value = node->value;
        dij_vec.push_back(node->right);
    }


    if (node->left && !node->left->visited) {
        if (node->left->ch == '.') {
            if (node->left->value > node->value + 1) node->left->value = node->value + 1;
        }
        else if (node->left->value > node->value) node->left->value = node->value;
        dij_vec.push_back(node->left);
    }

    if (node->down && !node->down->visited) {
        if (node->down->ch == '.') {
            if (node->down->value > node->value + 1) node->down->value = node->value + 1;
        } else if (node->down->value > node->value) node->down->value = node->value;
        dij_vec.push_back(node->down);
    }

    if (node->up && !node->up->visited) {
        if (node->up->ch == '.') {
            if (node->up->value > node->value + 1)  node->up->value = node->value + 1;
        } else if (node->up->value > node->value) node->up->value = node->value;
        dij_vec.push_back(node->up);
    }


    dij_vec.erase(it);
    dijkstra(dij_vec);

}


std::ostream& operator<<(std::ostream& os, const RobotGrid& RG) {
    for (auto& row: RG.grid) {
        for (auto& n: row)
            os << (n->value < 100? std::to_string(n->value) : "∞") << ' ';
        os << std::endl;
    }
    return os;
}




