//
// Created by Adam Saher on 2022-10-01.
//

#ifndef KEVINWENG_ITERATOR_H
#define KEVINWENG_ITERATOR_H

#include <iostream>

class String;

struct Iterator {
    char* value_;
    friend std::ostream& operator<<(std::ostream&, const Iterator&);
public:
    Iterator(char*);
    char& operator*() const;
    Iterator operator+(const unsigned&) const;
    void operator++();
    Iterator operator++(int);
    bool operator>(const Iterator&) const;
    bool operator<(const Iterator&) const;
    bool operator==(const Iterator&) const;
    bool operator>=(const Iterator&) const;
    bool operator<=(const Iterator&) const;
    bool operator!=(const Iterator&) const;
};


#endif //KEVINWENG_ITERATOR_H
