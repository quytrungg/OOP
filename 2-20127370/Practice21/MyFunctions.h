#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Fraction
{
private:
    int num;
    int den;
public:
    void InputFraction(Fraction* &a, int n);
    void OutputFraction(Fraction* a, int n);
    void SetNum(int tu);
    int GetNum();
    void SetDen(int mau);
    int GetDen();
    Fraction ReduceFraction();
    Fraction InverseFraction();
    void CommonDenominator(Fraction &p);
    Fraction Add(Fraction p);
    Fraction Mul(Fraction p);
    int CompareFraction(Fraction p);
    void SortFraction(Fraction* a, int n, bool (*operation)(Fraction, Fraction));
};

template <typename T>
void SwapElement(T &a, T &b){
    T c = a;
    a = b;
    b = c;
}

int LCD(int a, int b);
bool Ascending(Fraction x, Fraction y);
bool Descending(Fraction x, Fraction y);
std::ostream& operator<<(std::ostream& output, Fraction &fraction);
std::istream& operator>>(std::istream& input, Fraction &fraction);

#endif