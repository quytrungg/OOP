#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Monomial
{
private:
    double coe;
    int exp;
public:
    void SetCoe(double heso);
    double GetCoe();
    void SetExp(int somu);
    int GetExp();
    void InputMonomial();
    void OutputMonomial();
    double EvaluateMonomial(float x);
    Monomial DeriveMonomial();
    Monomial MultiplyMonomial(Monomial &m);
};

#endif