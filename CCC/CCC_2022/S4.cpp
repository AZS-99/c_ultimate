//
// Created by Adam Saher on 2022-04-06.
//


#include <vector>
#include "S4.h"



auto count_points_between(const unsigned& a, const unsigned& b, const std::vector<unsigned>& sum) {
    auto c = sum.size();
    return a <= b? sum[b] - sum[a] : sum[b] + sum[c - 1] - sum[a];
}


unsigned good_triplets(std::vector<unsigned>& points, const unsigned& c) {
    auto n = points.size();
    auto triangles_count = n * (n - 1) * (n - 2) / 6;

    std::vector<unsigned> sum(c);
    std::vector<unsigned> circle(c);
    for(auto& x: points)
        ++circle[x];


    sum[0] = circle[0];
    for(auto i=1;i<c;i++)
        sum[i]= sum[i-1] + circle[i];



    for (auto i = 0u; i < c; i++) {
        auto opposite_point = (i + c/2) % c;
        auto points_in_between = count_points_between(i, opposite_point, sum);
        triangles_count -= circle[i] * points_in_between * (points_in_between - 1) / 2; //one
        triangles_count -= circle[i] * (circle[i] - 1) * points_in_between / 2; //two
        triangles_count -= circle[i] * (circle[i] - 1) * (circle[i] - 2) / 6; //three
    }

    if(c % 2 == 0) {
        for(auto i = 0u; i < c/2; i++) {
            auto opposite= i + c/2;
            triangles_count+= circle[i] * (circle[i] - 1) * circle[opposite] / 2;
            triangles_count+= circle[i] * circle[opposite] * (circle[opposite] - 1) / 2;
        }
    }
    return triangles_count;
}
