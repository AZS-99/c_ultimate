//
// Created by Adam Saher on 2022-11-05.
//

#ifndef C_VECTORCONSTITERATOR_H
#define C_VECTORCONSTITERATOR_H

#include <iostream>
template <typename T> class Vector;

template <typename T>
class VectorConstIterator {
    const T* value_;
    friend std::ostream& operator<<(std::ostream&, const VectorConstIterator<T>&);
public:
    VectorConstIterator(const T*);
    const T& operator*() const;
    VectorConstIterator operator+(const unsigned&) const;
    void operator++();
    VectorConstIterator operator++(int);
    bool operator>(const VectorConstIterator<T>&) const;
    bool operator<(const VectorConstIterator<T>&) const;
    bool operator==(const VectorConstIterator<T>&) const;
    bool operator>=(const VectorConstIterator<T>&) const;
    bool operator<=(const VectorConstIterator<T>&) const;
    bool operator!=(const VectorConstIterator<T>&) const;
};

template <typename T>
VectorConstIterator<T>::VectorConstIterator(const T* value)  {value_ = value;}

template <typename T>
const T& VectorConstIterator<T>::operator*() const {
    return *value_;
}

template <typename T>
void VectorConstIterator<T>::operator++() {
    ++value_;
}

template <typename T>
VectorConstIterator<T> VectorConstIterator<T>::operator++(int) {
    return {++value_};
}

template <typename T>
VectorConstIterator<T> VectorConstIterator<T>::operator+(const unsigned int& value) const {
    return {value_+value};
}

template <typename T> bool VectorConstIterator<T>::operator>(const VectorConstIterator<T>& other) const {return *value_ > *other.value_;}
template <typename T> bool VectorConstIterator<T>::operator<(const VectorConstIterator<T>& other) const {return *value_ < *other.value_;}
template <typename T> bool VectorConstIterator<T>::operator>=(const VectorConstIterator<T>& other) const {return *value_ >= *other.value_;}
template <typename T> bool VectorConstIterator<T>::operator<=(const VectorConstIterator<T>& other) const {return *value_ <= *other.value_;}
template <typename T> bool VectorConstIterator<T>::operator==(const VectorConstIterator<T>& other) const {return value_ == other.value_;}
template <typename T> bool VectorConstIterator<T>::operator!=(const VectorConstIterator<T>& other) const {return !(*this == other);}

template <typename T>
std::ostream &operator<<(std::ostream& cout, const VectorConstIterator<T>& const_iterator) {
    return cout << *const_iterator.value_;
}


#endif //C_VECTORCONSTITERATOR_H
