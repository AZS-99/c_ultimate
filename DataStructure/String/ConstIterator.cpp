//
// Created by Adam Saher on 2022-09-20.
//

#include "ConstIterator.h"

ConstIterator::ConstIterator(const char* value)  {value_ = value;}

const char& ConstIterator::operator*() const {
    return *value_;
}


void ConstIterator::operator++() {
     ++value_;
}

ConstIterator ConstIterator::operator++(int) {
    return {++value_};
}

ConstIterator ConstIterator::operator+(const unsigned int& value) const {
    return {value_+value};
}

bool ConstIterator::operator>(const ConstIterator& other) const {return *value_ > *other.value_;}
bool ConstIterator::operator<(const ConstIterator& other) const {return *value_ < *other.value_;}
bool ConstIterator::operator>=(const ConstIterator& other) const {return *value_ >= *other.value_;}
bool ConstIterator::operator<=(const ConstIterator& other) const {return *value_ <= *other.value_;}

bool ConstIterator::operator==(const ConstIterator& other) const {return value_ == other.value_;}






