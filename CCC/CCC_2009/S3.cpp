//
// Created by Adam Saher on 2023-02-08.
//

#include <iostream>
#include <queue>
#include "S3.h"


Facebook::Facebook() {
    for (auto i = 0u; i < 19u; ++i) people[i] = new FriendNode;
}

std::ostream &operator<<(std::ostream& os, const FriendNode& friendNode) {
    return os << friendNode.distance;
}

void Facebook::befriend(const unsigned& friend1, const unsigned& friend2) {
    people[friend1]->friends.insert(people[friend2]);
    people[friend2]->friends.insert(people[friend1]);
}

void Facebook::run() {
    char command;
    unsigned x, y;
    FriendNode* node;
    befriend(1u, 6u);
    befriend(2u, 6u);
    befriend(3u, 6u);
    befriend(3u, 4u);
    befriend(3u, 15u);
    befriend(4u, 6u);
    befriend(5u, 6u);
    befriend(6u, 7u);
    befriend(7u, 8u);
    befriend(8u, 9u);
    befriend(9u, 10u);
    befriend(9u, 12u);
    befriend(10u, 11u);
    befriend(11u, 12u);
    befriend(12u, 13u);
    befriend(16u, 17u);
    befriend(16u, 18u);
    befriend(17u, 18u);
    befriend(13u, 14u);
    befriend(13u, 15u);
    befriend(16u, 17u);
    befriend(16u, 18u);
    befriend(17u, 18u);

    do {
        std::cin >> command;
        std::set<FriendNode*> friends_of_friends;
        if (command == 'f' || command == 'n') {
            std::cin >> x;
            if (command == 'n') std::cout << people[x]->friends.size() << std::endl;
            else {
                std::cout << count_fof(people[x]) << std::endl;
                reset();
            }
        } else if (command != 'q') {
            std::cin >> x >> y;

            if (command == 'i') {
                if (!people.contains(x)) people[x] = new FriendNode;
                if (!people.contains(y)) people[y] = new FriendNode;
                people[x]->friends.insert(people[y]);
                people[y]->friends.insert(people[x]);
            } else if (command == 'd') {
                people[x]->friends.erase(people[y]);
                people[x]->friends.erase(people[y]);
            } else if (command == 's') {
                people[x]->distance = 0;
                nodes_queue.push(people[x]);
                dijkstra();
                if (people.contains(y)) std::cout << people[y]->distance << std::endl;
                else std::cout << "not connected" << std::endl;
                reset();
            }
        }
    } while(command != 'q');

}


void Facebook::reset() const {
    for (auto& [key, person]: people){
        person->visited = false;
        person->distance = std::numeric_limits<unsigned>::max();
    }

}

unsigned Facebook::count_fof(FriendNode* person) const {
    std::set<unsigned> fof;
    std::queue<FriendNode*> circle, tmp;

    person->visited = true;
    circle.push(person);
    for (auto i = 0u; i < 2u; ++i) {
        while(!circle.empty()) {
            for (auto child: circle.front()->friends) {
                if (!child->visited) {
                    child->visited = true;
                    tmp.push(child);
                }
            }
            circle.pop();
        }
        circle.swap(tmp);
    }
    return circle.size();


}

void Facebook::dijkstra() {
    FriendNode* node;
    while (!nodes_queue.empty()) {
        node = nodes_queue.top();
        nodes_queue.pop();
        node->visited = true;
        for (auto neighbour: node->friends) {
            if (!neighbour->visited) {
                neighbour->distance = std::min(neighbour->distance, node->distance + 1u);
                nodes_queue.push(neighbour);
            }
        }
    }
}

std::ostream &operator<<(std::ostream& os, const Facebook& facebook) {
    for (auto [key, person]: facebook.people) {
        os << key << ": " << *person << std::endl;
    }
}


