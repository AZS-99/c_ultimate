//
// Created by Adam Saher on 2022-08-29.
//

#ifndef C_J5_S3_H
#define C_J5_S3_H

#include <array>
#include <vector>
#include <string>

/*
Problem: Main Roads
The Enemy relies heavily on the transportation of supplies and personnel between the specific points A and B. Points A
and B, as well as other points C, D, E, etc. are linked by a network of roads. Your mission, should you accept it, is to
identify a single road that may be bombed in order to cut off all traffic between A and B.

In the input, each point is identified by a single upper-case letter (there is a maximum of 26). Each string
of 2 characters of input identifies a pair of points connected by a road. The end of input is indicated by a string
containing **. All roads are two-way, that is, road AC is the same as road CA. There is at most one road between any
pair of points.

Your output should identify all roads such that bombing any one of them would halt all traffic between A and B. Your
output should list the roads, one per line, followed by a line stating that There are pens_count disconnecting roads,
where pens_count is the number of such roads. If there is no such road, output There are 0 disconnecting roads.

Sample Input 1
AC AD AE CE CF ED GF BG HB GH **
Output for Sample Input 1
CF
GF
There are 2 disconnecting roads.

Sample Input 2
AC CD DE EB **
Output for Sample Input 2
AC
CD
DE
EB
There are 4 disconnecting roads

Sample Input 2
EA EG EF FA FG GA FZ ZB ZX ZY BX BY XY **
Output 2
FZ
There is 1 disconnecting road.

Sample Input 3
ST PQ QR RS TA AB PB **
Output for Sample Input 3
There are 0 disconnecting roads

Sample Input 4
AC AD AE AF CD CE CF DE DF EF FG GB BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BX BY BZ HJ HK HL HM HN HO HP HQ HR HS HT HU HV HX HY HZ IK IL IM IN IO IP IQ IR IS IT IU IV IX IY IZ JL JM JN JO JP JQ JR JS JT JU JV JX JY JZ KM KN KO KP KQ KR KS KT KU KV KX KY KZ LM LN LO LP LQ LR LS LT LU LV LX LY LZ MN MO MP MQ MR MS MT MU MV MX MY MZ NO NP NQ NR NS NT NU NV NX NY NZ OP OQ OR OS OT OU OV OX OY OZ PQ PR PS PT PU PV PX PY PZ QR QS QT QU QV QX QY QZ RS RT RU RV RX RY RZ ST SU SV SX SY SZ TU TV TX TY TZ UV UX UY UZ VX VY VZ XY XZ YZ **
Output for Sample Input 4
FG
GB
There are 2 disconnecting roads.

 */

struct LetterNode {
    bool visited = false;
    bool on_path = false;
    std::array<LetterNode*, 26> neighbours{};
public:
    friend class Roads;
};

class Roads {
    std::array<LetterNode*, 26> nodes{};
    std::vector<std::string> lines;
public:
    Roads();
    void get_main_roads();
    void reset();
    void mark_if_on_path(LetterNode *src, LetterNode *destination);
};


#endif //C_J5_S3_H
