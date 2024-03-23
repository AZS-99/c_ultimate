//
// Created by Adam Saher on 2023-01-09.
//

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include "S3.h"

Point::Point() { x = y = 0;}

Point::Point(const int& x, const int& y) {
    this->x = x;
    this->y = y;
}

std::ostream &operator<<(std::ostream& os, const Point& point) {
    return os << '(' << point.x << ", " << point.y << ')';
}

bool Point::operator>(const Point& other) const {
    return x > other.x;
}

Line::Line() {
    start = {0, 0};
    end = {0, 0};
}

Line::Line(const int& x1, const int& y1, const int& x2, const int& y2) {
    start = {x1, y1};
    end = {x2, y2};
    if (start > end) std::swap(start, end);
}

std::pair<double, double> Line::equation() const {
    double m = (double)(end.y - start.y) / (double)(end.x - start.x);
    double c =  !std::isinf(m)? start.y - m * start.x : start.x;

    return {m, c};
}

bool Line::intersects(const Line& other) const {
    auto [m1, c1] = equation();
    auto [m2, c2] = other.equation();

    double x;

    // Check if either of the line segments is vertical (i.e. has infinite slope)
    if (std::isinf(m1) && std::isinf(m2)) {
        return start.x == other.start.x;
    } else if (std::isinf(m1)) {
        // First line is vertical, calculate its x-coordinate from its y-intercept
        x = start.x;
        // Check if this x-coordinate lies within the range of the second line segment
        return x >= other.start.x && x <= other.end.x && m2 * x + c2 >= std::min(other.start.y, other.end.y) &&
            m2 * x + c2 <= std::max(other.start.y, other.end.y);
    } else if (std::isinf(m2)) {
        x = other.start.x;
        // Check if this x-coordinate lies within the range of the first line segment
        return x >= start.x && x <= end.x && m1 * x + c1 >= std::min(start.y, end.y)
               && m1 * x + c1 <= std::max(start.y, end.y);
    }
//    if (m1 == m2 && m1 == 0.0) return c1 == c2;
//    if (m1 == 0) return start.x >= other.start.x && end.x <= other.end.x && c1 >= other.start.y && c1 <= other.end.y;
//    if (m2 == 0) return other.start.x >= start.x && other.end.x <= end.x && c2 >= start.y && c2 <= end.y;
    else {
        // Neither line is vertical, check if they intersect at some point (i.e. have the same y-intercept)
        if (c1 == c2) {
            // Both lines have the same y-intercept, they intersect only if they are parallel and overlap
            return m1 == m2 &&
                   ((start.x >= other.start.x && start.x <= other.end.x) || (end.x >= other.start.x && end.x <= other.end.x) ||
                    (other.start.x >= start.x && other.start.x <= end.x) || (other.end.x >= start.x && other.end.x <= end.x));
        } else {
            // Both lines have different y-intercepts, they intersect only if they have a common x-coordinate
            x = (c2 - c1) / (m1 - m2);
            // Check if this x-coordinate lies within the range of both line segments
            return x >= std::min(start.x, end.x) && x <= std::max(start.x, end.x) && x >= std::min(other.start.x, other.end.x)
                   && x <= std::max(other.start.x, other.end.x) && start.y >= std::min(other.start.y, other.end.y) && start.y <= std::max(other.start.y, other.end.y)
                   && end.y >= std::min(other.start.y, other.end.y) && end.y <= std::max(other.start.y, other.end.y);
        }
    }
}

std::ostream &operator<<(std::ostream& os, const Line& line) {
    auto [m, c] = line.equation();
    os << line.start << "-->" << line.end;
}


RegularShape::RegularShape(const std::vector<int>& vec) {
    int x1, y1, x2, y2;
    x1 = vec[0];
    y1 = vec[1];
    Line line;
    for (auto i = 2u; i < vec.size(); i += 2) {
        x2 = vec[i];
        y2 = vec[i + 1];
        line = Line(x1, y1, x2, y2);
        lines.push_back(line);
        x1 = x2;
        y1 = y2;
    }
    lines.emplace_back(x1, y1, vec[0], vec[1]);

}

bool RegularShape::intersects_line(const Line& tin_line) const {
    return std::ranges::any_of(lines, [&tin_line](const Line& line) {
        return line.intersects(tin_line);
    });
}

std::ostream &operator<<(std::ostream& os, const RegularShape& regularShape) {
    for (const auto& line: regularShape.lines) os << line << std::endl;
    return os;
}

Space::Space() {
    int x1, y1, x2, y2, num;
    unsigned buildings_count, lines_count;
    std::cin >> x1 >> y1 >> x2 >> y2 >> buildings_count;
    tin_line = Line(x1, y1, x2, y2);
    buildings = std::vector<RegularShape*>(buildings_count, nullptr);

    std::vector<int> points;
    for (auto i = 0u; i < buildings_count; ++i) {
        std::cin >> lines_count;
        points = std::vector<int>(lines_count * 2u);
        for (auto j = 0u; j < lines_count * 2; ++j) {
            std::cin >> num;
            points[j] = num;
        }
        buildings[i] = new RegularShape(points);
    }


}

void Space::run() {
    auto count = 0u;
    for (const auto& building: buildings) {
        if (building->intersects_line(tin_line)) ++count;
    }
    std::cout << count;
}



