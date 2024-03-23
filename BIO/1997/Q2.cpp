//
// Created by Adam Saher on 2022-12-23.
//

#include <iostream>
#include <fstream>
#include "Q2.h"


LifeNode::LifeNode(bool alive) {
    this->alive = alive;
}


std::ostream &operator<<(std::ostream& os, const LifeNode & node) {
    return os << (node.alive? '0' : '.');
}

LifeNode::LifeNode(const LifeNode& src) {
    alive = src.alive;
}


Life::Life() {
    char ch;
    std::ifstream file("Data/BIO_1997/life");


    for (auto i = 0u; i < 11u; ++i) {
        for (auto j = 0u; j < 11u; ++j) {
            grid[i][j] = new LifeNode;
            if (i > 2 && i < 8 && j > 2 && j < 8) {
                file >> ch;
                if (ch == '0') grid[i][j]->alive = true;
            }
        }
    }

    set_neighbours();
}


std::ostream &operator<<(std::ostream& os, const Life& life) {
    for (auto i = 0u; i < 11u; ++i) {
        for (auto j = 0u; j < 11u; ++j)
            os << *life.grid[i][j];
        os << std::endl;
    }
    return os;
}

void Life::next_generation() {
    std::vector<LifeNode*> marks;
    LifeNode* node;
    for (auto i = 0u; i < 11u; ++i) {
        for (auto j = 0u; j < 11u; ++j) {
            node = grid[i][j];
            auto ons = std::count_if(node->neighbours.cbegin(), node->neighbours.cend(), [] (LifeNode* n) {
                return n->alive;
            });

            if (node->alive) {
                if (ons < 2 || ons > 3) marks.push_back(node);
            } else if (ons == 3) marks.push_back(node);
        }
    }
    for (auto n: marks) n->alive = !n->alive;
}

Life::Life(const Life& src) {
    for (auto i = 0u; i < 11u; ++i) {
        for (auto j = 0u; j < 11u; ++j) {
            grid[i][j] = new LifeNode(*src.grid[i][j]);
        }
    }

    set_neighbours();

}

void Life::set_neighbours() {
    for (auto i = 0u; i < 11u; ++i) {
        for (auto j = 0u; j < 11u; ++j) {
            auto neighbours = &grid[i][j]->neighbours;
            if (i > 0) {
                neighbours->push_back(grid[i-1][j]);
                if (j > 0) neighbours->push_back(grid[i-1][j-1]);
                if (j < 10) neighbours->push_back(grid[i-1][j+1]);
            }
            if (i < 10) {
                neighbours->push_back(grid[i+1][j]);
                if (j > 0) neighbours->push_back(grid[i+1][j-1]);
                if (j < 10) neighbours->push_back(grid[i+1][j+1]);
            }
            if (j > 0) neighbours->push_back(grid[i][j-1]);
            if (j < 10) neighbours->push_back(grid[i][j+1]);
        }
    }
}