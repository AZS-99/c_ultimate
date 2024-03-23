//
// Created by Adam Saher on 2022-11-24.
//

#ifndef C_BINARYHEAP_H
#define C_BINARYHEAP_H

#include <iostream>
#include <vector>

template <typename T>
class BinaryHeap {
    std::vector<T> heap;
public:
    void insert(const T&);
    void float_up(const unsigned&);
    void sink();
    template <typename U>
    friend std::ostream& operator<<(std::ostream&, const BinaryHeap<U>&);
};

template<typename T>
void BinaryHeap<T>::insert(const T& value) {
    heap.push_back(value);
    float_up(heap.size() - 1);

}

template<typename T>
void BinaryHeap<T>::float_up(const unsigned &index) {
    if (index == 0) return;
    unsigned parent_index = (index-1u) / 2u;
    if (heap[parent_index] > heap[index]) {
        std::swap(heap[parent_index], heap[index]);
        float_up(parent_index);
    }
}

template<typename U>
std::ostream& operator<<(std::ostream& os, const BinaryHeap<U>& binary_heap) {
    os << '[';
    for (auto& element: binary_heap.heap) os << element << ' ';
    return os << ']';
}


#endif //C_BINARYHEAP_H
