//
// Created by Adam Saher on 2022-04-07.
//

#ifndef C_S5_H
#define C_S5_H
#include <vector>


/*
Mathematicians, as opposed to computer scientists, write expressions using single lower case letters as variables.
Addition is represented by a plus sign and multiplication is represented by placing the variables or expressions
adj with no symbol in between. Multiplication is done before addition unless the addition is parenthesized.

For this problem, we consider mathematical expressions consisting of only variables, addition, multiplication, and
parentheses. (There are no other symbols, like spaces, division, subtraction, or numerals in the input or output.) For
example,

a+b+c
xyz
xyz+ab+cd
(a+b)(c+d)e

Your task is to read in a number of expressions in this notation and to rearrange each, using the laws of algebra, to
equivalent expressions with no parentheses. For example,
                                                    (a+b)(c+d)e
Can be re-expressed as
                                                  ace+ade+bce+bde
If there are several solutions, any one will do. The order of variables within terms does not matter, nor does the order
of terms within the expression. You do not need to collect like terms; indeed, this is impossible as there are to be no
numerals in the output.

Input and Output Specification

The first line of input contains an integer restaurants_count. restaurants_count lines of input follow, each containing a valid expression as described
 above. No input line exceeds 100 characters. Your output should consist of restaurants_count lines, each giving a parenthesis-free
 expression equivalent to the corresponding line of input.
Sample Input

5
a+b+c
(a+b)(c+d)e
c+cb+a+c
(a+a)(a+a)
((a+b)+(f+g)(c+d))e


Output for Sample Input (order is irrelevant)

a+b+c
ace+ade+bce+bde
c+cb+a+c
aa+aa+aa+aa
ae+be+fce+fde+gce+gde
 */

std::vector<std::string> split(const std::string& str, char delimiter);
void remove_redundant_parentheses(std::string &str);
std::string expand(std::string&);



#endif //CCC_S5_H
