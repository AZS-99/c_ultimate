//
// Created by Adam Saher on 2022-09-23.
//

#include <iostream>
#include <valarray>
#include "J2.h"

void min_perimeter() {
    unsigned num, sqrt, divisor;
    std::cout << "Enter number of pictures: ";
    std::cin >> num;
    while (num != 0) {

        sqrt = (unsigned) std::sqrt(num);

        while (num % sqrt != 0) --sqrt;
        divisor = num / sqrt;

        std::cout << "The min perimeter is " << 2 * (sqrt + divisor) << " with dimensions " << sqrt << " x " << divisor << std::endl;
        std::cout << "Enter number of pictures: ";
        std::cin >> num;
    }


}