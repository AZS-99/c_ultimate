//
// Created by Adam Saher on 2022-04-17.
//

#include <vector>
#include "S2.h"

std::vector<bool> sieve(const unsigned& num) {
    std::vector<bool> primes(num, true);

    primes[0] = primes[1] = false;
    auto index = 2u;
    while (index < num) {
        for (auto i = index * index; i < num; i += index) primes[i] = false;
        while (!primes[++index]); //Step first, because the index is still at i = 2
    }
    return primes;
}


std::pair<unsigned, unsigned> find_prime_pair(const unsigned& num) {
    auto upper_limit = num * 2;
    auto primes = sieve(upper_limit);
    for (auto i = 0u; i < num; ++i) {
        if (primes[i] && primes[upper_limit - i])
            return std::make_pair(i, upper_limit - i);
    }
    return std::make_pair(0, 0);
}