//
// Created by Adam Saher on 2022-09-05.
//

#ifndef C_J1_H
#define C_J1_H


/*
The Body Mass Index (BMI) is one of the calculations used by doctors to assess an adult’s health. The doctor measures
the patient’s height (in metres) and weight (in kilograms), then calculates the BMI using the formula
                                            BMI = weight / (height * height)

Write a program which prompts for the patient’s height and weight, calculates the BMI, and dis- plays the corresponding
message from the table below.

BMI Category                        Message
More than 25                        Overweight
Between 18.5 and 25                 Normal weight
Less than 18.5                      Underweight

Sample Input 1
Enter weight: 69
Enter height: 1.73
Sample Output 1
Normal weight

Explanation
The BMI is 69/(1.73 × 1.73), which is approximately 23.0545. According to the table, this is a “Normal weight”.

Sample Input 2 (user input is in italics)
Enter weight: 84.5
Enter height: 1.8
Output for Sample Input 2
Overweight

Explanation for Output in Sample Input 2
The BMI is 84.5/(1.8 × 1.8), which is approximately 26.0802. According to the table, this is “Overweight”.
 */

char* get_weight();

#endif //C_J1_H
