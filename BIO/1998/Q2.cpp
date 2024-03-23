//
// Created by Adam Saher on 2022-12-23.
//

#include <fstream>
#include "Q2.h"



OthelloNode::OthelloNode() {
    colour = nullptr;
}


OthelloNode::OthelloNode(const bool& colour) {
    this->colour = new bool {colour};
}


std::ostream &operator<<(std::ostream& os, const OthelloNode& node) {
    if (!node.colour) return os << '.';
    return os << (*node.colour? '0' : '*');
}


OthelloNode::OthelloNode(const OthelloNode& src) {
    if (src.colour) colour = new bool{*src.colour};
}


Othello::Othello() {
    std::ifstream file("Data/BIO_1998/othello");
    char ch;
    for (auto i = 0u; i < 8u; ++i) {
        for (auto j = 0u; j < 8u; ++j) {
            if (i > 1 && i < 6 && j > 1 && j < 6) {
                file >> ch;
                if (ch != '.') grid[i][j] = new OthelloNode(ch == '0');
                else grid[i][j] = new OthelloNode;
            } else grid[i][j] = new OthelloNode;
        }
    }


    for (auto i = 0u; i < 8u; ++i) {
        for (auto j = 0u; j < 8u; ++j) {
            auto neighbours = &grid[i][j]->neighbours;

            if (i > 0) {
                neighbours->at(1) = grid[i-1][j];
                if (j > 0) neighbours->at(0) = grid[i-1][j-1];
                if (j < 7) neighbours->at(2) = grid[i-1][j+1];
            }
            if (i < 7) {
                neighbours->at(6) = grid[i+1][j];
                if (j > 0) neighbours->at(5) = grid[i+1][j-1];
                if (j < 7) neighbours->at(7) = grid[i+1][j+1];
            }
            if (j > 0) neighbours->at(3) = grid[i][j-1];
            if (j < 7) neighbours->at(4) = grid[i][j+1];
        }
    }
}

std::ostream &operator<<(std::ostream& os, const Othello& othello) {
    for (auto i = 0u; i < 8u; ++i) {
        for (auto j = 0u; j < 8u; ++j)
            os << *othello.grid[i][j];
        os << std::endl;
    }
    return os;
}


std::vector<OthelloNode*> Othello::largest_potential_flips(const OthelloNode* unoccupied_node, const bool& player_colour) {
    OthelloNode* current;
    std::vector<OthelloNode*> largest_flips, potential_flips;
    for (auto i = 0u; i < 8; ++i) {
        current = unoccupied_node->neighbours[i];
        potential_flips.clear();
        while (current && current->colour && *current->colour != player_colour) {
            potential_flips.push_back(current);
            current = current->neighbours[i];
        }
        if (current && current->colour && *current->colour == player_colour)
            largest_flips.insert(largest_flips.begin(), potential_flips.cbegin(), potential_flips.cend());
    }
    return largest_flips;
}


OthelloNode *Othello::pick_spot(const bool& player_colour) {
    std::vector<OthelloNode*> to_be_flipped, potential_flips;
    OthelloNode* best_spot;
    for (auto row: grid) {
        for (auto node: row) {
            if (!node->colour) {
                potential_flips = largest_potential_flips(node, player_colour);
                if (potential_flips.size() >= to_be_flipped.size()) {
                    to_be_flipped.swap(potential_flips);
                    best_spot = node;
                }
            }
        }
    }
    best_spot->colour = new bool{player_colour};
    for (auto node: to_be_flipped) *node->colour = !(*node->colour);
}

void Othello::play(const unsigned& n) {
    for (auto i = 0u; i < n; ++i) {
        pick_spot(turn);
        turn = !turn;
    }
}