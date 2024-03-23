//
// Created by Adam Saher on 2022-11-05.
//

#ifndef C_VECTOR_H
#define C_VECTOR_H


#include <cstdio>
#include <iostream>
#include "VectorConstIterator.h"

template <typename T>
class Vector {
    T* data_;
    size_t size_;
    size_t capacity_;
    static const unsigned DEFAULT_CAPACITY;
    template <typename U>
    friend std::ostream& operator<<(std::ostream&, const Vector<U>&);

    template <typename E>
    friend class VectorConstIterator;

public:
    Vector();
    Vector(const unsigned&);
    Vector(const unsigned&, const T&);
    Vector(const Vector&);
    Vector(Vector&&);
    ~Vector();
    Vector& operator=(const Vector&);
    Vector& operator=(Vector&&);
    T& operator[](const size_t&);
    T& back();
    bool empty() const;
    T& front();
    void clear();
    void insert(const T&, const size_t&);
    void pop_back();
    void push_back(const T&);
    size_t size() const;
    VectorConstIterator<T> cbegin() const;
    VectorConstIterator<T> cend() const;




private:
    void stretch();
};

template <typename T>
const unsigned Vector<T>::DEFAULT_CAPACITY = 10u;

template <typename T>
Vector<T>::Vector(){
    data_ = nullptr;
    size_ = 0ul;
    capacity_ = 0ul;
}

template <typename T>
Vector<T>::Vector(const unsigned& size){
    size_ = size;
    capacity_ = size_*2;
    data_ = new T[capacity_];
}

template <typename T>
Vector<T>::Vector(const unsigned& size, const T& value) {
    size_ = size;
    capacity_ = size*2;
    data_ = new T[capacity_];
    for (auto i = 0u; i < size; ++i) data_[i] = value;
}

template <typename T>
Vector<T>::Vector(const Vector<T>& src) {
    size_ = src.size_;
    capacity_ = src.capacity_;
    data_ = new T[capacity_];
    for (auto i = 0u; i < size_; ++i) data_[i] = src.data_[i];
}

template <typename T>
Vector<T>::Vector(Vector<T>&& src) {
    size_ = src.size_;
    capacity_ = src.capacity_;
    data_ = src.data_;

    src.size_ = 0ul;
    src.capacity_ = 0ul;
    src.data_ = nullptr;
}

template <typename T>
Vector<T>::~Vector() {
    delete[] data_;
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& src) {
    while (src.size_ > capacity_) stretch();
    size_ = src.size_;
    capacity_ = src.capacity_;
    for (auto i = 0u; i < size_; ++i) data_[i] = src.data_[i];
    return *this;
}

template <typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& src) {
    size_ = src.size_;
    capacity_ = src.capacity_;
    delete[] data_;
    data_ = src.data_;

    src.data_ = nullptr;
    src.size_ = 0ul;
    src.capacity_ = 0ul;
}

template <typename T>
T& Vector<T>::operator[](const size_t& index) {
    if(index >= size_) throw std::out_of_range("Index exceeds size");
    return *(data_+index);
}

template <typename T>
T& Vector<T>::back() {return *(data_+size_-1);}

template <typename T>
T& Vector<T>::front() {return *data_;}

template <typename T>
void Vector<T>::clear() {
    delete[] data_;
    size_ = 0ul;
    capacity_ = 0ul;
}

template<typename T>
void Vector<T>::insert(const T& value, const size_t& index) {
    if(size_ == capacity_) stretch();

}

template <typename T>
void Vector<T>::pop_back() {
    --size_;
}

template <typename T>
void Vector<T>::push_back(const T& value) {
    if(size_ == capacity_) stretch();
    data_[size_++] = value;
}

template <typename T>
size_t Vector<T>::size() const {return size_;}

template <typename T>
bool Vector<T>::empty() const {return size_ == 0ul;}

template <typename T>
void Vector<T>::stretch() {
    if (capacity_ == 0ul) capacity_ = DEFAULT_CAPACITY;
    capacity_ = 2*capacity_;
    T* data_cpy = new T[capacity_];
    for(auto i = 0u; i < size_; ++i) data_cpy[i] = data_[i];
    delete[] data_;
    data_ = data_cpy;
    data_cpy = nullptr;
}


template <typename T>
std::ostream& operator<<(std::ostream& cout, const Vector<T>& vector){
    if (vector.size_ == 0ul) return cout << "[]";
    cout << '[';
    for (auto i = 0u; i < vector.size_ - 1; ++i) cout << vector.data_[i] << ',';
    return cout << vector.data_[vector.size_ - 1] << ']';
}

template <typename T>
VectorConstIterator<T> Vector<T>::cbegin() const {
    return VectorConstIterator(data_);
}

template <typename T>
VectorConstIterator<T> Vector<T>::cend() const {
    return VectorConstIterator(data_+size_);
}



#endif //C_VECTOR_H
