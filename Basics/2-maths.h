//
// Created by Adam Saher on 2023-03-25.
//

#ifndef C_2_MATHS_H
#define C_2_MATHS_H

/*
The two roots of a quadratic equation, for example, ax^2 + bx + c = 0, can be
obtained using the quadratic formula:
                                        -b ± √(b^2 - 4ac)
                                   x = ——————————————————
                                              2a

b^2 - 4ac is called the discriminant of the quadratic equation. If it is positive, the equation has two real roots. If
it is zero, the equation has one root. If it is negative, the equation has no real roots.

Write a program that prompts the user to enter values for a, b, and c and displays the result based on the discriminant.
If the discriminant is positive, display two roots. If the discriminant is 0, display one root. Otherwise, display The
equation has no real roots. Here are some sample runs.

Sample Input 1:
Enter a, b, c: 1.0, 3, 1
The roots are -0.381966 and -2.61803

Sample Input 2:
Enter a, b, c: 1, 2.0, 1
The root is -1

Sample Input 3:

Enter a, b, c: 1, 2, 3
The equation has no real roots
*/





/*
You can use Cramer’s rule to solve the following 2 * 2 system of linear equation:
 ax + by = e
 cx + dy = f

     ed - bf            af - ec
 x = ———————       y =  ———————
     ad - bc            ad - bc


Write a program that prompts the user to enter a, b, c, d, e, and f and display the result. If ad – bc is 0, report that
The equation has no solution.

Sample Input 1:
Enter a, b, c, d, e, f: 9.0, 4.0, 3.0, -5.0, -6.0, -21.0
Output for Sample Input 1:
x is -2.0 and y is 3.0


Sample Input 2:
Enter a, b, c, d, e, f: 1.0, 2.0, 2.0, 4.0, 4.0, 5.0
Output for Sample Input 2:
The equation has no solution
 */


#endif //C_2_MATHS_H
