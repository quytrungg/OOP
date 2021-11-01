#ifndef HEADER_H
#define HEADER_H

#include <iostream>

template <typename T>
class Array
{
private:
    T* element;
    int size;
public:
    int getSize(){return size;}
    Array();
    Array(T* &a, int s);
    Array(const Array& a);
    Array& operator=(const Array& a);
    T& operator[](int pos);
    template <typename V>
    friend std::ostream& operator<<(std::ostream& out, Array<V> a);
    template <typename V>
    friend std::istream& operator>>(std::istream& in, Array<V> &a);
    template <typename T2>
    operator T2*();
    ~Array();
};

#endif