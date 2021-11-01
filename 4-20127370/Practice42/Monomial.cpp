#include "Monomial.h"

Monomial::Monomial(){

}

void Monomial::setCoe(float heso){
    this->coe = heso;
}

float Monomial::getCoe(){
    return this->coe;
}
void Monomial::setExp(int somu){
    this->exp = somu;
}

int Monomial::getExp(){
    return this->exp;
}

Monomial Monomial::operator+(Monomial m){
    if(this->exp != m.exp){
        std::cout << "The monomials don't have the same exponent!\n";
        exit(0);
    }
    else{
        Monomial sum;
        sum.coe = this->coe + m.coe;
        sum.exp = this->exp;
        return sum;
    }
}

Monomial Monomial::operator*(Monomial m){
    Monomial mul;
    mul.coe = this->coe * m.coe;
    mul.exp = this->exp + m.exp;
    return mul;
}

bool Monomial::operator>(Monomial m){
    return this->exp > m.exp || (this->exp == m.exp && this->coe > m.coe);
}

bool Monomial::operator<(Monomial m){
    return this->exp < m.exp || (this->exp == m.exp && this->coe < m.coe);
}

bool Monomial::operator==(Monomial m){
    return this->exp == m.exp && this->coe == m.coe;
}

bool Monomial::operator>=(Monomial m){
    return *this > m || *this == m;
}

bool Monomial::operator<=(Monomial m){
    return *this < m || *this == m;
}

bool Monomial::operator!=(Monomial m){
    return this->exp != m.exp || this->coe != m.coe;
}

Monomial Monomial::operator=(Monomial m){
    this->coe = m.coe;
    this->exp = m.exp;
    return *this;
}

Monomial& Monomial::operator+=(Monomial m){
    if(this->exp != m.exp){
        std::cout << "The monomials don't have the same exponent!\n";
        exit(0);
    }
    else{
        this->coe += m.coe;
        return *this;
    }
}

Monomial& Monomial::operator*=(Monomial m){
    this->exp += m.exp;
    this->coe *= m.coe;
    return *this;
}

Monomial& Monomial::operator++(){
    this->exp += 1;
    return *this;
}

Monomial& Monomial::operator--(){
    this->exp -= 1;
    return *this;
}

Monomial Monomial::operator++(int num){
    Monomial old = *this;
    this->coe += 1;
    return old;
}

Monomial Monomial::operator--(int num){
    Monomial old = *this;
    this->coe -= 1;
    return old;
}

Monomial Monomial::operator!(){
    Monomial temp = *this;
    temp.coe *= temp.exp;
    temp.exp -= 1;
    return temp;
}

std::ostream& operator<<(std::ostream& out, Monomial m){
    out << m.coe << "x^" << m.exp;
    return out;
}

std::istream& operator>>(std::istream& in, Monomial &m){
    in >> m.coe >> m.exp;
    return in;
}

Monomial::~Monomial(){

}
