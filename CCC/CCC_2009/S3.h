//
// Created by Adam Saher on 2023-02-08.
//

#ifndef C_S3_H
#define C_S3_H


/*
Facebook:

The main socializing tool for students today is Facebook. There are many interesting computational questions connected
to Facebook, such as the “degree of separation” between two people.
For example, in the diagram below, there are different paths between Abby and Alberto. Some of these paths are:

• Abhishek → Zoey → Alberto
• Abhishek → Natalie → Zoey → Alberto
• Abhishek → George → Ali → Kara → Richardo → Jeff → Alberto

The shortest path between Abby and Alberto has two steps (Abhishek → Zoey, and Zoey → Alberto), so we say the degree of
separation is 2. Additionally, Alberto would be a friend of a friend of Abby.


                     BRUCE(2)                    CHRIS(1)
                            \                    /
                             \                  /
                              \                /
                               \              /
                                  Abhishek(6)   -------------------- GEORGE(7)
                               /      |       \                         |
                              /       |        \                        |
                             /        |         \                       |
                            /         |          \                      |
                    ZOEY (3) ----- STEPHEN(4) --- NATHALIE(5)         ALI(8)
                     |                              |                   |
                     |‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾                    |
                     |                                                  |
                     |                                                KARA(9)
                     |                                               /     \
                     |                                              /       \
                     |                                             /         \
                     |                                            /           \
                     |                                           /             \
                     |                                          /               \
                     |                                         /                 \
                     |                                        /                   \
                     |                                       /                     \
                     |                                      /                       \
                    ALBERTO(15)                    RICHARDO(12) --- SIOBAHN(11) --- NOMAR(10)
                        \                            /
                         \                          /
                          \                        /                    KIM(16)
                           \                      /                    /       \
                            \                    /                    /         \
                             \                  /                    /           \
                              \                /                TREVOR(18) --- RICHARD(17)
                               \              /
                                \            /
                                   JEFF(13)
                                      |
                                      |
                                  TERRY(14)


You can assume an initial configuration of who is friends with who as outlined in the diagram above. You will need to
store these relationships in your program. These relationships can change though, and your program needs to handle these
changes. In particular, friendships can begin, possibly with new people. Friendships can end. You should be able to find
friends of friends and determine the degree of separation between two people.

Input/Output Description
Your program will read in six possible commands, with the action to be performed by your program outlined below. You may
assume that x and y are integers, with x ̸= y, x ≥ 1, y ≥ 1, x < 50 and y < 50. You may also assume that instructions
(i, d, n, f, s, q) occur one per line and parameters (zero, one or two integers) occur one per line.

• i x y – make person x and person y friends. If they are already friends, no change needs to be made. If either x or y
  is a new person, add them.
• d x y – delete the friendship between person x and person y.
• n x – output the number of friends that person x has.
• f x – output the number of “friends of friends” that person x has. Notice that x and direct friends of x are not
  counted as “friends of friends.”
• s x y – output the degree of separation between x and y. If there is no path from x to y, output Not connected.
• q – quit the program.

Sample Input 1:
i 20 10
i 20 9
n 20
f 20
s 20 6
q
Output for Sample Input 1:
2
3
4

Sample Input 2:
n 6
n 11
f 15
f 7
s 2 14
q
Output for Sample Input 2:
6
2
5
6
5

Sample Input 3:
i 14 16
i 17 12
d 11 12
f 14
s 16 8
s 17 8
q
Output for Sample Input 3:
4
4
3

Sample Input 4:
i 15 5
i 20 9
s 15 5
s 15 6
s 15 7
s 15 8
s 15 9
q
Output for Sample Input 4:
1
2
3
4
3


Sample Input 3:
i 19 18
n 19
f 19
s 19 20
f 6
s 5 10
i 20 11
f 20
s 20 1
i 12 4
s 20 1
d 4 6
s 20 1
f 6
q
Output for Sample Input 3:
1
2
Not connected
2
5
2
7
5
6
3
*/



#include <limits>
#include <functional>
#include <unordered_map>
#include <queue>
#include <set>
#include <vector>


class FriendNode {
    bool visited = false;
    unsigned distance = std::numeric_limits<unsigned>::max();
    std::set<FriendNode*> friends;
    friend class Facebook;
    friend struct Comparator;

    friend std::ostream& operator<<(std::ostream&, const FriendNode&);

};

struct Comparator {
    bool operator()(FriendNode* node1, FriendNode* node2) {
        return node1->distance > node2->distance;
    }
};

class Facebook {
    std::unordered_map<unsigned, FriendNode*> people;
    std::priority_queue<FriendNode*, std::vector<FriendNode*>, Comparator> nodes_queue;
public:
    Facebook();
    void befriend(const unsigned&, const unsigned&);
    void run();
    void reset() const;
    unsigned count_fof(FriendNode*) const;
    void dijkstra();
    friend std::ostream& operator<<(std::ostream&, const Facebook&);


};


#endif //C_S3_H
