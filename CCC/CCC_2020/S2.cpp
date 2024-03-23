//
// Created by Adam Saher on 2022-04-17.
//


#include <fstream>
#include <iostream>

#include "S2.h"






//BotNode::BotNode (const unsigned& v) {
//    val = v;
//    visited = false;
//}
//
//
//BotGrid::BotGrid() {
//    std::cin >> rows;
//    std::cin >> columns;
//
//    rooms = std::vector<std::vector<BotNode>>(rows, std::vector<BotNode>(columns));
//    unsigned tmp;
//
//    for (unsigned i = 0; i < rows; i++) {
//        for (unsigned x = 0; x < columns; x++) {
//            std::cin >> tmp;
//            rooms[i][x] = BotNode(tmp);
//            points[tmp].push_back(std::make_pair(i, x));
//        }
//    }
//
//
//}
//
//void BotGrid::run () {
//    std::cout << ((leads_to_begin(rows - 1, columns - 1)) ? "yes" : "no");
//}
//
//bool BotGrid::leads_to_begin (const unsigned& x, const unsigned& y) {
//    auto value = (x + 1) * (y + 1);
//    rooms[x][y].visited = true;
//    if (value == rooms[0][0].val) return true;
//
//    auto possible_locations = points[value];
//    for (auto& p: possible_locations) {
//        if (!rooms[p.first][p.second].visited && leads_to_begin(p.first, p.second)) {
//            return true;
//        }
//    }
//
//    return false;
//
//}
