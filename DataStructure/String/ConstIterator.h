    //
// Created by Adam Saher on 2022-09-20.
//

#ifndef KEVINWENG_VECTORCONSTITERATOR_H
#define KEVINWENG_VECTORCONSTITERATOR_H


class String;
struct ConstIterator {


    const char* value_;

public:
    ConstIterator(const char*);
    const char& operator*() const;
    ConstIterator operator+(const unsigned&) const;
    void operator++();
    ConstIterator operator++(int);
    bool operator>(const ConstIterator&) const;
    bool operator<(const ConstIterator&) const;
    bool operator==(const ConstIterator&) const;
    bool operator>=(const ConstIterator&) const;
    bool operator<=(const ConstIterator&) const;
};


#endif //KEVINWENG_VECTORCONSTITERATOR_H
