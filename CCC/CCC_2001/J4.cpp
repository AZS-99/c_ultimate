//
// Created by Adam Saher on 2022-06-27.
//

#include <iostream>
#include <valarray>
#include "J4.h"

Spiral::Spiral() {

    std::cout << "Input starting value: ";
    std::cin >> start;
    std::cout << "Input end value: ";
    std::cin >> end;
    auto dimensions = find_dimensions();
    spiral = std::vector<std::vector<unsigned>>(dimensions.first);



}

std::pair<unsigned, unsigned> Spiral::find_dimensions() const {
    auto size = end - start + 1;
    unsigned root = std::floor(std::sqrt(size));
    if (size == std::pow(root, 2)) return std::make_pair(root, root);
    if (size <= root * (root + 1)) return std::make_pair(root + 1, root);
    return std::make_pair(root + 1, root + 1);
}

