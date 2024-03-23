//
// Created by Adam Saher on 2022-09-20.
//

#ifndef KEVINWENG_STRING2_H
#define KEVINWENG_STRING2_H

#include <iostream>
#include <cstring>
#include "ConstIterator.h"
#include "Iterator.h"

class String {
    char* data_;
    unsigned size_;
    unsigned capacity_;
    static const unsigned DEFAULT_CAPACITY;
    friend std::ostream& operator<<(std::ostream&, const String&);
    friend ConstIterator;
    friend Iterator;
public:
    String();
    String(const char*);
    String(const String&);
    String(String&&);
    ~String();
    String& operator=(const String&);
    String& operator=(String&&);
    String& operator+=(const char&);
    String& operator+=(const String&);
    String& append(const char*);
    String& append(const String&);
    String& append(const char&);
    char& back();
    char& front();
    char* data() const;
    void clear();
    String& insert(const unsigned&, const char&);
    String& insert(const unsigned&, const unsigned&, const char&);
    unsigned size() const;
    unsigned capacity() const;
    ConstIterator cbegin() const;
    ConstIterator cend() const;
    Iterator begin();
    Iterator end();

private:
    void stretch();
};


#endif //KEVINWENG_STRING2_H
