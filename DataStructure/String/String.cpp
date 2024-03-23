//
// Created by Adam Saher on 2022-09-20.
//

#include "String.h"

const unsigned String::DEFAULT_CAPACITY = 3u;

String::String() {
    data_ = nullptr;
    size_ = 0u;
    capacity_ = 0u;
}

String::String(const char* string){
    size_ = strlen(string);
    capacity_ = 2*size_ + 1;
    this->data_ = new char[capacity_];
    std::strcpy(this->data_, string);

}

String::String(const String& src) {
    size_ = src.size_;
    capacity_ = src.capacity_;
    data_ = new char[capacity_];
    strcpy(data_, src.data_);
}

String::String(String&& src) {
    size_ = src.size_;
    capacity_ = src.capacity_;
    data_ = src.data_;

    src.data_ = nullptr;
    src.size_ = 0u;
    src.capacity_ = 0u;
}

String::~String() {
    delete[] data_;
}

String& String::operator=(const String& src) {
    if (src.size_+1 > capacity_){
        delete[] data_;
        size_ = src.size_;
        capacity_ = size_*2 + 1;
        data_ = new char[src.capacity_];
    }
    strcpy(data_, src.data_);
    return *this;
}

String& String::operator=(String&& src) {
    delete[] data_;
    size_ = src.size_;
    data_ = src.data_;
    capacity_ = src.capacity_;

    src.data_ = nullptr;
    src.size_ = 0u;
    src.capacity_ = 0u;
    return *this;
}

String& String::operator+=(const char& src) {
    if (src == '\0') return *this;
    if (data_ == nullptr){
        data_ = new char[2];
        data_[0] = src;
        data_[1] = '\0';
        size_ = 2u;
        capacity_ = 2*size_;
        return *this;
    }

    size_ += 2;

    if (capacity_ >= size_){
        data_[size_] = src;
        data_[size_+1] = '\0';
    } else{
        char* datacpy = new char[2*size_+1];
        strcpy(datacpy, data_);

        datacpy[size_] = src;
        datacpy[size_+1] = '\0';

        delete[] data_;
        data_= datacpy;
        capacity_ = 2*size_+1;
    }

    return *this;
}

String& String::operator+=(const String& src) {
    this->append(src);
    return *this;
}

String& String::append(const char& string) {
    if (string == '\0') return *this;
    if (data_ == nullptr){
        size_ = 1u;
        capacity_ = 3u;

        data_ = new char[capacity_];
        data_[0] = string;
        data_[1] = '\0';

        return *this;
    }

    size_ += 1;

    if (capacity_ >= size_+1){
        data_[size_] = string;
        data_[size_+1] = '\0';
    } else{
        char* datacpy = new char[2*size_+1];
        strcpy(datacpy, data_);

        datacpy[size_] = string;
        datacpy[size_+1] = '\0';

        delete[] data_;
        data_= datacpy;
        capacity_ = 2*size_+1;
    }

    return *this;
}

String& String::append(const char* string) {
    if (string[0] == '\0') return *this;
    if (data_ == nullptr){
        size_ = strlen(string);
        data_ = new char[2*strlen(string) + 1];
        strcpy(data_, string);
        capacity_ = strlen(data_);
        return *this;
    }


    if (capacity_ >= size_+strlen(string)+1){
        for(auto i = 0; i < strlen(string); i++){
            data_[size_+i] = string[i];
        }
        data_[size_+strlen(string)] = '\0';
        size_ = strlen(data_);
    } else{

        char* datacpy = new char[2*(size_+strlen(string))+1];
        strcpy(datacpy, data_);

        for (auto i = 0u; i < strlen(string); i++){
            datacpy[i+size_] = string[i];
        }
        datacpy[size_+strlen(string)] = '\0';

        delete[] data_;
        data_= datacpy;
        capacity_ = strlen(data_) + 1;
        size_ += strlen(string);
    }
    return *this;
}

String& String::append(const String& string) {
    if (string.data_ == nullptr) return *this;
    if (data_ == nullptr){
        data_ = new char[string.capacity_];
        strcpy(data_, string.data_);
        capacity_ = string.capacity_;
        size_ = string.size_;
        return *this;
    }

    this->append(string.data_);

    return *this;
}

char& String::back() {
    return data_[size_-1];
}

char& String::front() {
    return data_[0];
}

char* String::data() const{
    return data_;
}

void String::clear(){
    delete[] data_;
    data_ = nullptr;
    size_ = 0u;
}

unsigned String::size() const {
    return size_;
}


unsigned String::capacity() const {
    return capacity_;
}


String& String::insert(const unsigned int& index, const char & src) {
    if (index > size_){
        throw std::out_of_range("");
    }

    if (data_ == nullptr){
        data_ = new char[DEFAULT_CAPACITY];
        data_[0] = src;
        data_[1] = '\0';
        size_ = 1;
        capacity_ = DEFAULT_CAPACITY;
        return *this;
    }

    //if (size_ == capacity_)

    char* data_cpy = new char[size_ + 2];

    if (index == size_){
        strcpy(data_cpy, data_);
        data_cpy[index] = src;
    }
    else {
        auto i = 0u;
        auto j = 0u;
        while (j < size_) {
            if (i != index) {
                data_cpy[i] = data_[j];
                i += 1;
                j += 1;
            } else {
                data_cpy[i] = src;
                i += 1;
            }

        }

    }
    data_cpy[size_+1] = '\0';
    delete[] data_;
    data_ = data_cpy;
    size_ += 1;

    return *this;

}

String& String::insert(const unsigned int& index, const unsigned int& count, const char& src) {
    if (index > size_){
        throw std::out_of_range("Error in insert");
    }
    if (data_ == nullptr){
        data_ = new char[count + 1];
        for(auto i = 0u; i < count; i++){
            data_[i] = src;
        }
        data_[count] = '\0';
        size_ = count;
        return *this;
    }

    if (size_+count+1 >= capacity_) this->stretch();

    char* data_cpy = new char[capacity_];
    if (index == size_){
        strcpy(data_cpy, data_);
        for(unsigned i = size_; i < index+count; i++){
            data_cpy[i] = src;
        }
    } else{
        auto i = 0u;
        auto j = 0u;
        while(j < size_){
            if (i >= index && i < index+count){
                data_cpy[i] = src;
                ++i;
            } else{
                data_cpy[i] = data_[j];
                ++i;
                ++j;
            }
        }
    }

    data_cpy[size_ + count] = '\0';
    delete[] data_;
    data_ = data_cpy;
    size_ += count;

    return *this;
}

std::ostream& operator<<(std::ostream& cout, const String& string){
    return cout << string.data_;
}

void String::stretch() {
    capacity_ *= 2;
    char* data_cpy = new char[capacity_];
    strcpy(data_cpy, data_);
    delete[] data_;
    data_ = data_cpy;
    data_cpy = nullptr;

}

ConstIterator String::cbegin() const {
    return ConstIterator(data_);
}

ConstIterator String::cend() const {
    return ConstIterator(data_+size_);
}

Iterator String::begin() {
    return Iterator(data_);
}

Iterator String::end() {
    return Iterator(data_+size_);
}