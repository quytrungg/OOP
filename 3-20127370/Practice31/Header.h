#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Fraction
{
private:
    int num;
    int den;
public:
    Fraction();
    Fraction(int tu, int mau);
    Fraction(int value);
    Fraction(const Fraction &p);
    ~Fraction();
    void OutputFraction();
};


#endif