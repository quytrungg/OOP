#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Fraction
{
private:
    int num;
    int den;
    static int count;
public:
    Fraction();
    Fraction(int tu, int mau);
    Fraction(int value);
    Fraction(const Fraction &p);
    ~Fraction();
    void OutputFraction();
    static int getCount(){
        return count;
    }
};

#endif