//
// Created by Adam Saher on 2022-07-25.
//

#include <fstream>
#include <iostream>
#include "S3.h"

HanoiTrain::HanoiTrain() {
    std::ifstream file("Data/CCC/2014/J5_S3");
    unsigned samples, size, value;
    file >> samples;

    for (auto j = 0u; j < samples; ++j) {
        file >> size;
        trains_vector = std::vector<unsigned>(size);
        trains_stack = std::stack<unsigned>();
        wait_list = std::stack<unsigned>();
        for (auto i = 0u; i < size; ++i) {
            file >> value;
            trains_stack.push(value);
            trains_vector[i] = value;
        }
        std::sort(trains_vector.begin(), trains_vector.end(), std::greater{});
        std::cout << std::boolalpha << is_possible() << std::endl;
    }
}


bool HanoiTrain::is_possible() {
    unsigned long next;


    while (!trains_vector.empty() && !(trains_stack.empty() && wait_list.empty())) {
        next = trains_vector.back();

        if (!trains_stack.empty() && trains_stack.top() == next) {

            trains_stack.pop();
            trains_vector.pop_back();
            continue;
        } else if (!wait_list.empty() && wait_list.top() == next) {

            wait_list.pop();
            trains_vector.pop_back();
            continue;
        } else if (!wait_list.empty() && trains_stack.top() > wait_list.top()) return false;

        wait_list.push(trains_stack.top());
        trains_stack.pop();
    }

    return trains_vector.empty() && wait_list.empty() && trains_stack.empty();


}




//    while (!trains_vector.empty() && !trains_stack.empty()) {
//        if (trains_vector.back() == trains_stack.top()) {
//            trains_vector.pop_back();
//            trains_stack.pop();
//
//        } else if (!wait_list.empty() && trains_vector.back() == wait_list.top()) {
//            wait_list.pop();
//            trains_vector.pop_back();
//        }
//
//        else {
//            wait_list.push(trains_stack.top());
//            trains_stack.pop();
//        }
//    }
//    for (auto t: trains_vector) std::cout << t << std::endl;
//
//    return (trains_stack.empty() && trains_stack.empty());

