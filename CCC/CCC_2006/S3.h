//
// Created by Adam Saher on 2023-01-09.
//

#ifndef C_S3_H
#define C_S3_H


/*
Romy and Jules have been talking with each other on their cell phones. Unfortunately, their parents dislike each other
and have decided that they can no longer call each other. In fact, their parents have taken their cell phones away. So,
Romy and Jules must find some other way to communicate. After searching the web for ideas, they have decided to build a
“tin can” telephone.

Simply, a tin can telephone is two empty soup cans attached to each other with a string. To use it, the string must be
stretched tight and then one person speaks while the other person listens. It is important that nothing touches the
string so that it can vibrate and transfer sound from one can to the other.

To successfully set up a tin can telephone, Romy and Jules are going to need a clear line of sight between their two
bedroom windows. To determine if they can run the string between their rooms, they get out a map that uses simple
integer coordinates. Now consider the following three situations.

                  Jules
                   /(3,3)
             _____/_                          ______                         _______
            |    /  |                        |      |    Jules              |       |   Jules
            |   /   |                        |      |    /                  |       |  /
            |  /    |                        |      |   /                   |       | /
            | /     |                        |      |  /                    |       |/
             ‾‾‾‾‾‾‾                          ‾‾‾‾‾‾  /                      ‾‾‾‾‾‾‾/
            /                                        /                             /
      (0,0)/                                        /
        Romy                                   Romy                            Romy

         BLOCKED VIEW                       CLEAR VIEW                      BLOCKED VIEW


In these figures, “Romy” is Romy’s window and “Jules” is Jules’ window. In the first figure, there is a building between
their windows, and it blocks the line of sight between them. In the second figure, the building doesn't block their
view, and they can successfully set up a tin can phone. In the third figure, a line drawn from Romy’s coordinates to
Jules’ coordinates would touch the corner of the building. Since the string cannot touch anything, they cannot set up a
tin can telephone and the view is considered as blocked.

Input Specifications
The input begins with a line containing four integer coordinates representing the locations of Romy’s and Jules’ windows.
That is, the input x1 y1 x2 y2 represents the coordinates for Romy's followed by Jules' You may assume that
-1000 <= x <= 1000, and -1000 <= y <= 1000. The next line contains a single integer, n, where 0 <= n <= 100, identifying
the number of buildings that will follow on the next lines. Each building is on a separate line and begins with an
integer specifying the number of corners that the building has. This integer is followed by the integer coordinates of
the building’s corners, in either clockwise or counter-clockwise order. No building has more than 32 corners. The sample
input and output, shown below, corresponds to the first “blocked” situation described previously.

Output Specifications
For the input data, output a single number identifying the number of buildings that touch or block the line of sight.


Sample Input
0 0 3 3
1
4 1 2 2 2 2 1 1 1
Output for Sample Input
1

Sample Input 2
3 3 3 40
5
4 3 5 3 8 8 8 8 5
4 0 0 0 1 1 1 1 0
3 3 14 4 15 5 15
4 2 41 4 41 4 43 2 43
4 2 29 4 29 4 30 2 30
Output for Sample Input 2
3

Sample Input 3
0 -1 18 19
25
4 0 0 0 2 2 2 2 0
4 4 0 4 2 6 2 6 0
4 8 0 8 2 10 2 10 0
4 12 0 12 2 14 2 14 0
4 16 0 16 2 18 2 18 0
4 0 4 0 6 2 6 2 4
4 4 4 4 6 6 6 6 4
4 8 4 8 6 10 6 10 4
4 12 4 12 6 14 6 14 4
4 16 4 16 6 18 6 18 4
4 0 8 0 10 2 10 2 8
4 4 8 4 10 6 10 6 8
4 8 8 8 10 10 10 10 8
4 12 8 12 10 14 10 14 8
4 16 8 16 10 18 10 18 8
4 0 12 0 14 2 14 2 12
4 4 12 4 14 6 14 6 12
4 8 12 8 14 10 14 10 12
4 12 12 12 14 14 14 14 12
4 16 12 16 14 18 14 18 12
4 0 16 0 18 2 18 2 16
4 4 16 4 18 6 18 6 16
4 8 16 8 18 10 18 10 16
4 12 16 12 18 14 18 14 16
4 16 16 16 18 18 18 18 16
Output for Sample Input 3
5


Sample Input 4
4 4 20 4
4
3 6 5 9 5 7 10
3 6 4 7 4 7 3
3 8 3 8 4 9 3
8 10 2 10 6 12 6 12 3 14 3 14 6 16 6 16 2
Output for Sample Input 4
3
*/
#include <utility>
#include <vector>
#include <iostream>


class Point {
    int x, y;
public:
    Point();
    Point(const int&, const int&);
    bool operator>(const Point&) const;
    friend class Line;
    friend std::ostream& operator<<(std::ostream&, const Point&);
};

class Line {
    Point start, end;
public:
    Line();
    Line(const int&, const int&, const int&, const int&);
    [[nodiscard]] std::pair<double, double> equation() const;
    bool intersects(const Line&) const;
    friend std::ostream& operator<<(std::ostream&, const Line&);
};



class RegularShape {
    std::vector<Line> lines;
public:
    RegularShape(const std::vector<int>&);
    bool intersects_line(const Line& line) const;
    friend std::ostream& operator<<(std::ostream&, const RegularShape&);
    friend class Space;
};


class Space {
    Line tin_line;
    std::vector<RegularShape*> buildings;
public:
    Space();
    void run();
};






#endif //C_S3_H
