//
// Created by Adam Saher on 2022-10-19.
//

#include <iostream>
#include "J4.h"

Tunnel::Tunnel() {

    block(0, -1);
    block(0, -2);
    block(0, -3);
    block(1, -3);
    block(2, -3);
    block(3, -3);
    block(3, -4);
    block(3, -5);
    block(4, -5);
    block(5, -5);
    block(5, -4);
    block(5, -3);
    block(6, -3);
    for (auto i = 1; i < 8; ++i) block(7, -i);
    for (auto i = -1; i < 8; ++i) block(i, -7);
    for (auto i = 5; i < 8; ++i) block(-1, -i);

};


void Tunnel::run() {
    unsigned value;
    char direction;


    do  {
        std::cin >> direction >> value;
        if (direction == 'q') break;
        dig(direction, value);

    }while(true);

}

void Tunnel::block(const int& c, const int& r) {
    digs[std::abs(r) - 1][c + 200] = true;
}

std::ostream& operator<<(std::ostream& os, const Tunnel& tunnel) {
    for (auto& row: tunnel.digs){
        for (auto& cell: row) std::cout << (cell? 'X' : 'O') << " ";
        std::cout << std::endl;
    }
}

bool Tunnel::dig(const char& direction, const unsigned& value) {
    bool quit = false;
    auto original_row = row;
    auto original_col = col;
    for (auto i = 0u; i < value; ++i) {
        if (direction == 'r') col++;
        else if (direction == 'l') col--;
        else if (direction == 'u') row++;
        else if (direction == 'd') row--;

        if (digs[get_row(row)][get_col(col)]) {
            quit = true;
        }
        digs[get_row(row)][get_col(col)] = true;

    }
    std::cout << col << ' ' << row << ' ' << (quit ? "danger" : "safe") << std::endl;
    return quit;


}

unsigned Tunnel::get_row(const int& r) const {
    return std::abs(r) - 1;
}

unsigned Tunnel::get_col(const int& c) const {
    return c - 200;
}

