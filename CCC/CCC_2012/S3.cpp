//
// Created by Adam Saher on 2022-08-17.
//

#include <vector>
#include <fstream>
#include "S3.h"
unsigned widest_variance() {
    std::ifstream file("Data/CCC/2012/J5_S3");
    unsigned count_nums;
    file >> count_nums;
    std::vector<unsigned> nums(count_nums);

    for (auto i = 0u; i < count_nums; ++i) file >> nums[i];

    std::sort(nums.begin(), nums.end());
    return nums[count_nums-1] - nums[0];
}