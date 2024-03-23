//
// Created by Adam Saher on 2022-09-09.
//

#include <iostream>
#include <array>
#include "J2.h"

Playlist::Playlist() = default;


void Playlist::run() {
    unsigned button, presses;
    std::pair<char, char> tmp;
    do {
        std::cout << "Button number: ";
        std::cin >> button;
        std::cout << std::endl << "Number of presses: ";
        std::cin >> presses;
        
        for (auto i = 0; i < presses; ++i) {
            if (button == 1) {
                playlist.push_back(playlist.front());
                playlist.pop_front();
                
            } else if (button == 2) {
                playlist.push_front(playlist.back());
                playlist.pop_back();
            } else if (button == 3) {
                auto it = ++playlist.begin();
                std::swap(playlist.front(), *(it));
            }
        }
        
    } while(button != 4);

    for (auto& element: playlist) std::cout << element << ' ';

}
