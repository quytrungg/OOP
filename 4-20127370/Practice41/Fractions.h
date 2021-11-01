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
    Fraction(const Fraction& p);
    void SetNum(int tu);
    int GetNum();
    void SetDen(int mau);
    int GetDen();
    Fraction ReduceFraction();
    void CommonDenominator(Fraction &p);
    Fraction operator+(Fraction p);
    Fraction operator*(Fraction p);
    Fraction& operator+=(Fraction p);
    Fraction& operator*=(Fraction p);
    int compare(Fraction p);
    bool operator>(Fraction p);
    bool operator<(Fraction p);
    bool operator==(Fraction p);
    bool operator!=(Fraction p);
    bool operator>=(Fraction p);
    bool operator<=(Fraction p);
    Fraction operator=(int num);
    Fraction& operator++();
    Fraction& operator--();
    Fraction operator++(int num);
    Fraction operator--(int num);
    friend std::ostream& operator<<(std::ostream& output, Fraction &p);
    friend std::istream& operator>>(std::istream& input, Fraction &p);
    operator float();
    operator int();
    ~Fraction();
};

int LCD(int a, int b);

#endif