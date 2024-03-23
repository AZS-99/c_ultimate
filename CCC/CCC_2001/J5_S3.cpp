//
// Created by Adam Saher on 2022-08-29.
//

#include <iostream>
#include <string>
#include "J5_S3.h"


Roads::Roads() {
    std::string line;
    unsigned index1, index2;
    LetterNode* node1, *node2;
    std::cin >> line;
    while (line != "**") {
        lines.push_back(line);
        index1 = line[0] - 'A';
        index2 = line[1] - 'A';

        if (!nodes[index1]) nodes[index1] = node1 = new LetterNode;
        else node1 = nodes[index1];
        if (!nodes[index2]) nodes[index2] = node2 = new LetterNode;
        else node2 = nodes[index2];

        node1->neighbours[index2] = node2;
        node2->neighbours[index1] = node1;

        std::cin >> line;
    }
}

void Roads::mark_if_on_path(LetterNode* src, LetterNode* destination) {
    src->visited = true;
    for (auto neighbour: src->neighbours) {
        if (neighbour && !neighbour->visited) {
            mark_if_on_path(neighbour, destination);
            if (neighbour->on_path) {
                src->on_path = true;
                return;
            }
        }
    }
}

void Roads::get_main_roads() {
    LetterNode* node1, *node2;
    for (auto& line: lines) {
        node1 = nodes[line[0] - 'A'];
        node2 = nodes[line[1] - 'A'];

        node1->neighbours[line[1] - 'A'] = nullptr;
        node2->neighbours[line[0] - 'A'] = nullptr;

        nodes[1]->on_path = true;
        mark_if_on_path(nodes[0], nodes[1]);

        if (!nodes[0]->on_path) std::cout << line << std::endl;

        node1->neighbours[line[1] - 'A'] = node2;
        node2->neighbours[line[0] - 'A'] = node1;

        reset();

    }
}

void Roads::reset() {
    for (auto& node: nodes) {
        if (node) {
            node->on_path = false;
            node->visited = false;
        }
    }
}




