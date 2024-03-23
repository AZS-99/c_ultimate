//
// Created by Adam Saher on 2022-10-22.
//

#ifndef C_NODE_H
#define C_NODE_H


#include <iostream>

template <typename T>
struct Node{
    T data_;
    Node* nxt_;
    size_t size_;

    Node* find(const unsigned&);
    Node* last();
    Node* penultimate();

public:
    Node();
    Node(const T&, Node<T>* = nullptr);
    Node(const Node&);
    Node(Node&&) noexcept ;
    ~Node();
    Node& operator=(const Node&);
    Node& operator=(Node&&) noexcept;
    T& operator[](const size_t&);

    T& back();
    T& front();
    void merge(Node*);
    void insert(const unsigned&, const T&);
    void pop(const size_t& = 0u);
    void push_back(const T&);
    void reverse();
    [[nodiscard]] size_t size() const;

    static std::pair< Node<T>*,  Node<T>*> copy( Node*,  Node*);

    template<typename U>
    friend std::ostream& operator<<(std::ostream&, const Node<U>&);


};

template <typename T>
Node<T>::Node() {
    data_ = T{};
    nxt_ = nullptr;
    size_ = 1ul;
}

template <typename T>
Node<T>::Node(const T& data, Node<T>* nxt) {
    data_ = data;
    nxt_ = nxt;
    size_ = 1ul;
}

template <typename T>
Node<T>::Node(const Node<T>& src) {
    std::cout << "copy constructor" << std::endl;
    data_ = src.data_;
    size_ = src.size_;
    if(src.nxt_ == nullptr) nxt_ == nullptr;
    else nxt_ = new Node<T>(*src.nxt_);
}

template <typename T>
Node<T>::Node(Node<T> && src) noexcept {
    std::cout << "move constructor" << std::endl;
    data_ = src.data_;
    nxt_ = src.nxt_;
    size_ = src.size_;

    src.data_ = T{};
    src.nxt_ = nullptr;
    src.size_ = 1ul;
}

template <typename T>
Node<T>::~Node() {
    if (nxt_ == nullptr) return;
    if (!nxt_->nxt_) {
        delete nxt_;
        return;
    }
    delete nxt_;
}


template <typename T>
Node<T>& Node<T>::operator=(const Node<T>& src) {
    if (this != *src) {
        data_ = src.data_;

        auto [node1, node2] = Node<T>::copy(this->nxt_, src.nxt_);
        if (size_ > src.size_){
            delete node1->nxt_;
            node1->nxt_ = nullptr;

        } else if (src.size_ > size_){
            node1->nxt_ = new Node(*node2->nxt_);
        }
    }
    return *this;
}


template <typename T>
Node<T>& Node<T>::operator=(Node<T>&& node) noexcept {
    data_ = node.data_;
    nxt_ = node.nxt_;
    node.nxt_ = nullptr;
}

template <typename T>
T& Node<T>::back() {
    auto node = last();
    return node->data_;
}


template<typename T>
Node<T>* Node<T>::find(const unsigned& index) {
    if (index == 0u) return this;
    return this->nxt_->find(index-1);
}

template <typename T>
T& Node<T>::front() {
    return data_;
}


template <typename T>
void Node<T>::insert(const unsigned int& index, const T& value) {
    if (index > size_) throw std::out_of_range("index out of bounds!");
    auto node_before = find(index - 1);
    auto new_node = new Node<T>(value, node_before->nxt_);
    node_before->nxt_ = new_node;
}


template <typename T>
void Node<T>::merge(Node<T>* src) {
    if (!src) return;
    if (!nxt_){
        nxt_ = new Node<T>(*src);
        return;
    }
    nxt_->merge(src->nxt_);
    src->nxt_ = nxt_;
    nxt_ = src;
}

template <typename T>
void Node<T>::pop(const size_t& index) {
    if(index == 0) {
        std::swap(data_, nxt_->data_);
        Node* tmp = nxt_;
        nxt_ = nxt_->nxt_;
        tmp->nxt_ = nullptr;
        delete tmp;
        return;
    }
    nxt_->pop(index-1);
}

template <typename T>
void Node<T>::push_back(const T& value) {
    ++size_;
    if(nxt_ == nullptr) nxt_ = new Node<T>(value);
    else nxt_->push_back(value);
}

template <typename T>
void Node<T>::reverse() {
    if (!this || !this->nxt_) return;
    nxt_->reverse();
    std::swap(data_, nxt_->data_);
    auto tmp = nxt_;
    nxt_ = nxt_->nxt_;
    tmp->nxt_ = nullptr;
    last()->nxt_ = tmp;
}


template <typename T>size_t Node<T>::size() const {return size_;}


template <typename T>
Node<T>* Node<T>::last() {
    if(!nxt_) return this;
    return nxt_->last();
}


template<typename T>
std::pair<Node<T> *, Node<T> *> Node<T>::copy(Node* original, Node* src) {
    original->data_ = src->data_;
    std::cout << original->data_ << std::endl;
    if (!(original->nxt_ && src->nxt_)) return std::make_pair(original, src);
    Node<T>::copy(original->nxt_, src->nxt_);

}


template <typename T>
Node<T>* Node<T>::penultimate() {
    if(size_ == 2) return this;
    return nxt_->penultimate();
}


template <typename T>
std::ostream& operator<<(std::ostream& cout, const Node<T>& node){
    cout << node.data_ << " --> ";
    if (node.nxt_ == nullptr) return cout << '|';
    return cout << *node.nxt_;
}

#endif //C_NODE_H