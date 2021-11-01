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
    void setCoe(float heso);
    float getCoe();
    void setExp(int somu);
    int getExp();
    Monomial operator+(Monomial m);
    Monomial operator*(Monomial m);
    bool operator>(Monomial m);
    bool operator<(Monomial m);
    bool operator==(Monomial m);
    bool operator>=(Monomial m);
    bool operator<=(Monomial m);
    bool operator!=(Monomial m);
    Monomial operator=(Monomial m);
    Monomial& operator+=(Monomial m);
    Monomial& operator*=(Monomial m);
    Monomial& operator++();
    Monomial& operator--();
    Monomial operator++(int num);
    Monomial operator--(int num);
    Monomial operator!();
    friend std::ostream& operator<<(std::ostream& out, Monomial m);
    friend std::istream& operator>>(std::istream& in, Monomial &m);
    ~Monomial();
};




#endif