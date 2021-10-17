#include "Header.h"

Fraction::Fraction(){
    this->num = 0;
    this->den = 1;
}

Fraction::Fraction(int tu, int mau){
    this->num = tu;
    this->den = mau;
}

Fraction::Fraction(int value){
    this->num = value;
    this->den = 1;
}

Fraction::Fraction(const Fraction &p){
    this->num = p.num;
    this->den = p.den;
}

void Fraction::OutputFraction(){
    std::cout << this->num << "/" << this->den << " ";
}

Fraction::~Fraction(){
    std::cout << "Deallocated\n";
}
