//
// Created by Adam Saher on 2022-11-18.
//

#include <algorithm>
#include "J4.h"

void arrange() {
    std::vector<unsigned> task(8, 0);
    std::vector<std::vector<unsigned>> preRequisite(8);
    preRequisite[1].push_back(7);
    task[7]++;
    preRequisite[1].push_back(4);
    task[4]++;
    preRequisite[2].push_back(1);
    task[1]++;
    preRequisite[3].push_back(4);
    task[4]++;
    preRequisite[3].push_back(5);
    task[5]++;

    unsigned a, b;
    std::cin >> a >> b;
    while (a != 0 && b != 0){
        preRequisite[a].push_back(b);
        task[b]++;

        std::cin >> a >> b;
    }

    std::priority_queue<unsigned, std::vector<unsigned>, std::greater<>> PQ;
    std::queue<unsigned> sequence;

    for (unsigned i = 1u; i < 8u; i++) if (task[i] == 0) PQ.push(i);


    unsigned key;
    while (!PQ.empty()){
        key = PQ.top();
        sequence.push(key);
        PQ.pop();
        for (unsigned taskNum: preRequisite[key]) {
            task[taskNum]--;
            if (task[taskNum] == 0) PQ.push(taskNum);
        }
    }

    if (sequence.size() == 7){
        while (!sequence.empty()) {
            std::cout << sequence.front() << " ";
            sequence.pop();
        }
    }
    else std::cout << "Cannot complete these tasks. Going to bed.";

}