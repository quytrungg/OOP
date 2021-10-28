#ifndef HEADER_H
#define HEADER_H

#include <iostream>

template <typename T>
class Array
{
private:
    T* arr;
    T size;
public:
    Array();
    Array(T s);
    Array(T* &a, T s);
    Array(const Array &a);
    ~Array();
    void OutputArray();
    T& operator[](int pos);
};


#endif