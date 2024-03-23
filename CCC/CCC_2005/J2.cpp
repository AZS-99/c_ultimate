//
// Created by Adam Saher on 2022-09-27.
//

#include <iostream>
#include <valarray>
#include "J2.h"

bool is_rsa(const unsigned& num) {
    auto sqrt = (unsigned) std::sqrt(num);
    if (sqrt * sqrt == num) return false; //implies odd number of divisors

    auto found1divisor = false;
    for (auto i = sqrt; i > 1u; --i) {
        if (num % i == 0) {
            if (found1divisor) return false;
            found1divisor = true;
        }
    }
    return found1divisor; // At this point, the count is either 0 (prime number) or 1.
}

unsigned count_rsa() {
    unsigned lower_limit, upper_limit;
    std::cout << "Enter lower limit of range:" << std::endl;
    std::cin >> lower_limit;
    std::cout << "Enter upper limit of range" << std::endl;
    std::cin >> upper_limit;

    auto count = 0u;
    for (auto i = lower_limit; i < upper_limit + 1u; ++i) if (is_rsa(i)) ++count;


    return count;
}