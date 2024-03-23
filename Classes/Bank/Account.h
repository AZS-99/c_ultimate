//
// Created by Adam Saher on 2024-03-20.
//

#ifndef C_ACCOUNT_H
#define C_ACCOUNT_H


class Account {
    const unsigned SIN;
    char* forename;
    char* surname;
    double balance;

public:
    Account(const unsigned&, const char* forename, const char* surname, const double& = 0);


};


#endif //C_ACCOUNT_H
