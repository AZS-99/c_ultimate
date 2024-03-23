//
// Created by Adam Saher on 2022-04-14.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include "S3.h"


WalkMan::WalkMan() {
    int mid;
    unsigned time, time_left, time_right;
    std::cin >> num_students_;
    pos_ = std::vector<unsigned>(num_students_);
    rate_ = std::vector<unsigned>(num_students_);
    range_ = std::vector<unsigned>(num_students_);
    min_dist_ = std::numeric_limits<unsigned>::max();
    min_ = std::numeric_limits<unsigned>::max();
    max_ = 0u;
    for (unsigned i = 0u; i < num_students_; ++i) {
        std::cin >> pos_[i] >> rate_[i] >> range_[i];
        if (pos_[i] > max_) max_ = pos_[i];
        if (pos_[i] < min_) min_ = pos_[i];
    }

    unsigned test = 0u;
    while (test < 100) {
        test += 1u;
        mid = (int) (max_ + min_) / 2;
        time = GetTime(mid);
        time_left = GetTime(mid - 1);
        time_right = GetTime(mid + 1);
        if (time < min_dist_) min_dist_ = time;
        if (time_left > time && time_right > time) break;
        else if (time_left > time && time > time_right) min_ = mid;
        else if (time_left < time_right) max_ = mid;
        else break;
    }

    std::cout << min_dist_ << std::endl;
}

unsigned WalkMan::GetTime(const int& concert_pos) {
    unsigned time = 0u;
    for (unsigned index = 0u; index < num_students_; ++index) {
        time += GetStudentTime(concert_pos, index);
    }
    return time;
}

unsigned WalkMan::GetStudentTime(const int& concert_pos, const unsigned& index) {
    int diff = std::abs((int) pos_[index] - concert_pos);
    if (diff < range_[index]) return 0u;
    else return rate_[index] * ((unsigned) std::abs(diff - (int) range_[index]));
}