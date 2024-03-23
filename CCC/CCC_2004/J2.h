//
// Created by Adam Saher on 2022-09-27.
//

#ifndef C_J2_H
#define C_J2_H


#include <vector>

/*
In CS City, a mathematical place to live, the mayor is elected every 4 years, the treasurer is appointed every 2 years,
the chief programmer is elected every 3 years and the dog-catcher is replaced every 5 years.
This year, Year X, the newly elected mayor announced the appointment of the new treasurer, a new dog-catcher and
congratulated the chief programmer for winning the recent election. That is, all positions were changed over. This is
highly unusual. You will quantify how unusual this really is.
Write a program that inputs the year X and the future year Y and lists all years between X and Y inclusive when all
positions change.

Sample Input 1
Enter the current year: 2004
Enter a future year: 2100
Output for Sample Input 1
All positions change in year 2004
All positions change in year 2064

Sample input 2
Enter the current year: 2000
Enter a future year: 2124
Output for Sample Input 2
All positions would change in year 2000
All positions would change in year 2060
All positions would change in year 2120
*/

std::vector<unsigned> years();


#endif //C_J2_H
