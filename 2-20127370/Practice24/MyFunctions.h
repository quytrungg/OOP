#ifndef HEADER_H
#define HEADER_H

#include <iostream>

template <typename T>
void SwapElement(T &a, T &b){
    T c = a;
    a = b;
    b = c;
} 

class Array
{
private:
    int* arr;
    int size;
public:
    void InputArray();
    void OutputArray();
    void SetSize(int s);
    int GetSize();
    void SetElement(int pos, int e);
    int GetElement(int pos);
    int FindElement(int e);
    void Sort(bool(*sort)(int, int));
};

bool Ascending(int a, int b);
bool Descending(int a, int b);

#endif