//
// Created by Adam Saher on 2022-08-31.
//

#ifndef C_J3_H
#define C_J3_H
/*
TIME ZONES
Problem Description
A mobile cell service provider in Ottawa broadcasts an automated time standard to its mobile users that reflects the
local time at the user’s actual location in Canada. This ensures that text messages have a valid local time attached to
them.

For example, when it is 1420 in Ottawa on Tuesday February 24, 2009 (specified using military, 24 hour format), the
times across the country are shown in the table below:

Pacific Time        Mountain Time       Central Time        Eastern Time        Atlantic Time       Newfoundland Time
Victoria, BC        Edmonton, AB        Winnipeg, MB        Toronto, ON         Halifax, NS         St. John’s, NL
Tuesday             Tuesday             Tuesday             Tuesday             Tuesday             Tuesday
2/24/2009           2/24/2009           2/24/2009           2/24/2009           2/24/2009           2/24/2009
1120 PST            1220 MST            1320 CST            1420 EST            1520 AST            1550 Newfoundland ST

Write a program that accepts the time in Ottawa in 24 hour format and outputs the local time in each of the cities
listed above including Ottawa. You should assume that the input time will be valid (i.e., an integer between 0 and 2359
with the last two digits being between 00 and 59).
You should note that 2359 is one minute to midnight, midnight is 0, and 13 minutes after midnight is 13. You do not need
to print leading zeros, and input will not contain any extra leading zeros.

Sample Input 1
1300
Sample Output 1
1300 in Ottawa
1000 in Victoria
1100 in Edmonton
1200 in Winnipeg
1300 in Toronto
1400 in Halifax
1430 in St. John’s

Sample Input 2
17
Output for Sample Input 2
17 in Ottawa.
2117 in Victoria.
2217 in Edmonton.
2317 in Winnipeg.
17 in Toronto.
117 in Halifax.
147 in St. John's.

Sample Input 3
145
Sample Output 3
145 in Ottawa.
2245 in Victoria.
2345 in Edmonton.
45 in Winnipeg.
145 in Toronto.
245 in Halifax.
315 in St. John's.
*/
#include <utility>

class Time {
    unsigned hr;
    unsigned min;
public:
    Time();

    [[nodiscard]] std::pair<unsigned, unsigned> get_victoria() const;
};


#endif //C_J3_H
