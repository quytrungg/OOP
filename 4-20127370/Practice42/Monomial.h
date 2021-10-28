#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Monomial
{
private:
    float coe;
    int exp;
public:
    Monomial();
    Monomial(const Monomial& m);
    
    ~Monomial();
};




#endif