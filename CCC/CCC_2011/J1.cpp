//
// Created by Adam Saher on 2022-08-29.
//

#include <iostream>
#include "J1.h"

Alien which_aliens() {
    unsigned antennas, eyes;
    std::cout << "How many antennas? ";
    std::cin >> antennas;
    std::cout << "How many eyes? ";
    std::cin >> eyes;

    if (antennas > 2 && eyes < 5) std::cout << "TroyMartian" << std::endl;
    if (antennas < 7 && eyes > 1) std::cout << "VladSaturnian" <<std::endl;
    if (antennas < 3 && eyes < 4) std::cout << "GraemeMercurian" << std::endl;

}