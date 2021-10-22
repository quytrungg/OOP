#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Array
{
private:
    int* arr;
    int size;
public:
    Array();
    Array(int s);
    Array(int* a, int s);
    Array(const Array &a);
    ~Array();
};


#endif