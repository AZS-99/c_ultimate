//
// Created by Adam Saher on 2022-10-06.
//

#ifndef C_J4_H
#define C_J4_H

#include <array>

/*
You exchange text messages with your friends. Since you receive so many messages, you want to measure how long your
friends have to wait for your replies.

Your message device records each received and sent message in order using the following two kinds of entries:
    • R X indicates a message was received from a friend numbered X;
    • S X indicates a message was sent to a friend numbered X.
Your message device sends and receives messages instantaneously, and for each consecutive pair of entries described
above, either
    • a single entry W X is recorded in between them indicating they occur X seconds apart, or
    • there is no entry between them and they occur one second apart.

Several rules of message etiquette are always followed:
    • the only messages you send are replies to messages that you have received;
    • you send at most one reply to any message from any particular friend;
    • your friends do not send a subsequent message until you have replied to their previous message.

The wait time for a message is the time that passes between when you receive it and the time you reply to it. If a
friend X received a reply to each message they sent, the total wait time for friend X is the sum of all wait times for
all messages from friend X. Otherwise, the total wait time for friend X is −1.
Your job is to determine the total wait time for each friend.

Input Specification
The input consists of the integer M (1 ≤ M ≤ 20), followed by M lines, where each line consists of one character
(W, R, or S), followed by a space, followed by an integer X (1 ≤ X ≤ 100). These M lines are the entries described above
(in order).

Output Specification
Output one line for each friend that sent a message in the form X T where X is a friend number and T is the total wait
time for friend X. The lines are in increasing order of the friend numbers.

Sample Input 1
5
R 2
R 3
W 5
S 2
S 3
Output for Sample Input 1
2 6
3 6

Explanation of Output for Sample Input 1
Friend 2 sends a message at time 0 and Friend 3 sends a message at time 1. Friend 2 receives a reply at time 6 and
Friend 3 receives a reply at time 7.

Sample Input 2
14
R 12
W 2
R 23
W 3
R 45
S 45
R 45
S 23
R 23
W 2
S 23
R 34
S 12
S 34
Output for Sample Input 2
12 13
23 8
34 2
45 -1

Explanation of Output for Sample Input 2
For Friend 12, a message is received at time 0 and replied to at time 13. For Friend 23, two messages are exchanged,
with the first message having a wait time of 6 seconds and the second message having a wait time of 2 seconds. For
Friend 34, a message is received at time 10 and replied to at time 12. Friend 45 sends a message which is never replied
to.
*/

class Texting {
    unsigned time = 0u;
    std::array<unsigned, 101> time_stamps{};
    std::array<bool, 101> is_waiting{};
    std::array<unsigned, 101> wait_time{};
public:
    Texting();
    void run();
};




#endif //C_J4_H
