//
// Created by Adam Saher on 2022-09-08.
//

#ifndef C_J1_H
#define C_J1_H

/*
Moe Bull has a cell phone and after a month of use is trying to decide which price plan is the best for his usage
pattern. He has two options, each plan has different costs for daytime minutes, evening minutes and weekend minutes.

                                                COSTS

Plan                Daytime                     Evening                     Weekend

A                   100 Free mins then          15 cents/min                20 cents/min
                    25 cents/min

B                   250 free min then           35 cents/min                25 cents/min
                    45 cents/min


Write a program that will input the number of each type of minutes and output the cheapest plan for this usage pattern,
using the format shown below. The input will be in the order of daytime minutes, evening minutes and weekend minutes. In
the case that the two plans are the same price, output both plans.


Sample Session 1:
Number of daytime minutes?
251
Number of evening minutes?
10
Number of weekend minutes?
60

Output:
Plan A costs 51.25
Plan B costs 18.95
Plan B is cheapest.


Sample Session 2
Number of daytime minutes?
162
Number of evening minutes?
61
Number of weekend minutes?
66

Output:
Plan A costs 37.85
Plan B costs 37.85
Plan A and B are the same price.


NOTE: If you wish, you may output the prices in cents instead of dollars. For example, for Session 1, Plan A would cost
5125 cents and Plan B would cost 1895 cents.
 */

void print_costs();

#endif //C_J1_H
