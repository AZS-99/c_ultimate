//
// Created by Adam Saher on 2022-12-14.
//

#include <iostream>
#include <sstream>
#include <ranges>
#include "S3.h"


std::vector<std::string> split(const std::string& str, const char& delimiter) {
    std::vector<std::string> vec;
    std::stringstream ss(str);
    std::string unit;
    while(getline(ss, unit, delimiter)) vec.push_back(unit);
    return vec;
}

SheetNode::SheetNode(const unsigned& value) { this->value = value;}

SheetNode::SheetNode(const std::string& str) { sum = split(str, '+');}

SpreadSheet::SpreadSheet() {
    std::string tmp;
    SheetNode* node;
    for (auto i = 0u; i < 10u; ++i) {
        for (auto j = 0u; j < 9u; ++j) {
            std::cin >> tmp;
            values[i][j] = isalpha(tmp[0])? new SheetNode(tmp) : new SheetNode(stoul(tmp));
        }
    }
}

void SpreadSheet::evaluate_grid() {
    for (auto i = 0u; i < 10u; ++i) for (auto j = 0u; j < 9u; ++j) evaluate_node(values[i][j]);
}

void SpreadSheet::evaluate_node(SheetNode* node) {
    node->visited = true;
    if (node->value != std::numeric_limits<unsigned>::max()) return;
    SheetNode* child_node;
    unsigned children_sum = 0u;
    for (auto unit: node->sum) {
        child_node = values[unit[0] - 'A'][unit[1] - '1'];
        if (!child_node->visited) evaluate_node(child_node);
        else if (child_node->value == std::numeric_limits<unsigned>::max()) return;
        children_sum += child_node->value;
    }
    node->value = children_sum;
}

std::ostream& operator<<(std::ostream& os, const SpreadSheet& spread_sheet) {
    for (auto i = 0u; i < 10u; ++i) {
        for (auto j = 0u; j < 9u; ++j) os << *spread_sheet.values[i][j] << ' ';
        os << std::endl;
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const SheetNode& node) {
    os << (node.value == std::numeric_limits<unsigned>::max()? "*" : std::to_string(node.value));
    return os;
}




