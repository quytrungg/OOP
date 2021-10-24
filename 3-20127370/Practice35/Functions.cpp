#include "Header.h"

int Fraction::count = 0;

Fraction::Fraction(){
    this->count++;
    this->num = 0;
    this->den = 1;
}

Fraction::Fraction(int tu, int mau){
    this->count++;
    this->num = tu;
    this->den = mau;
}

Fraction::Fraction(int value){
    this->count++;
    this->num = value;
    this->den = 1;
}

Fraction::Fraction(const Fraction &p){
    this->count++;
    this->num = p.num;
    this->den = p.den;
}

void Fraction::OutputFraction(){
    std::cout << this->num << "/" << this->den << " ";
}

Fraction::~Fraction(){
    std::cout << "Deallocated\n";
}
