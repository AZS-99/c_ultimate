//
// Created by Adam Saher on 2022-11-24.
//

#ifndef C_HEAPNODE_H
#define C_HEAPNODE_H

template <typename T>
class HeapNode {
    T value;
    HeapNode* next;
public:
    HeapNode(const T& value, HeapNode* = nullptr);
};

template<typename T>
HeapNode<T>::HeapNode(const T &value, HeapNode* next) {
    this->value = value;
    this->next = next;
}


#endif //C_HEAPNODE_H
