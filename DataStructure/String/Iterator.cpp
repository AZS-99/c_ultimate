//
// Created by Adam Saher on 2022-10-01.
//

#include "Iterator.h"

Iterator::Iterator(char* value)  {value_ = value;}

char& Iterator::operator*() const {
    return *value_;
}

void Iterator::operator++() {
    ++value_;
}

Iterator Iterator::operator++(int) {
    return {++value_};
}

Iterator Iterator::operator+(const unsigned int& value) const {
    return {value_+value};
}

bool Iterator::operator>(const Iterator& other) const {return *value_ > *other.value_;}
bool Iterator::operator<(const Iterator& other) const {return *value_ < *other.value_;}
bool Iterator::operator>=(const Iterator& other) const {return *value_ >= *other.value_;}
bool Iterator::operator<=(const Iterator& other) const {return *value_ <= *other.value_;}
bool Iterator::operator==(const Iterator& other) const {return value_ == other.value_;}
bool Iterator::operator!=(const Iterator& other) const {return !(*this == other);}

std::ostream &operator<<(std::ostream& cout, const Iterator& const_iterator) {
    return cout << *const_iterator.value_;
}