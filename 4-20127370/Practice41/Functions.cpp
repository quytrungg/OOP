#include "Header.h"

void Fraction::SetNum(int tu){
    this->num = tu;
}

int Fraction::GetNum(){
    return this->num;
}

void Fraction::SetDen(int mau){
    this->den = mau;
}

int Fraction::GetDen(){
    return this->den;
}

Fraction::Fraction(int num, int den){
    this->num = num;
    this->den = den;
}

Fraction Fraction::ReduceFraction(){
    Fraction reduce;
    int temp = LCD(this->num, this->den);
    this->num /= temp;
    this->den /= temp;
    reduce.SetNum(this->num);
    reduce.SetDen(this->den);
    return reduce;
}

void Fraction::CommonDenominator(Fraction &p){
    this->num *= p.GetDen();
    p.SetNum(p.GetNum() * this->den);
    this->den *= p.GetDen();
    p.SetDen(this->den);
}

std::ostream& Fraction::operator<<(std::ostream& output, Fraction &p){
    output << this->num << "/" << this->den << " ";
    return output;
}

std::istream& Fraction::operator>>(std::istream& input, Fraction &p){
    do{
        input >> this->num >> this->den;
    } while(this->mau == 0);
    return input;
}

Fraction Fraction::operator+(Fraction p){
    Fraction sum;
    sum.SetNum(this->num * p.GetDen() + p.GetNum() * this->den);
    sum.SetDen(this->den * p.GetDen());
    sum.ReduceFraction();
    return sum;
}

Fraction Fraction::operator*(Fraction p){
    Fraction mul;
    mul.SetNum(this->num * p.GetNum());
    mul.SetDen(this->den * p.GetDen());
    mul.ReduceFraction();
    return mul;
}

Fraction Fraction::operator+=(Fraction p){
    Fraction sum;
    this = this + p;
    this->ReduceFraction();
    sum.SetNum(this->num);
    sum.SetDen(this->den);
    return sum;
}

Fraction Fraction::operator*=(Fraction p){
    Fraction mul;
    this = this * p;
    this->ReduceFraction();
    mul.SetNum(this->num);
    mul.SetDen(this->den);
    return mul;
}

int Fraction::compare(Fraction p){

}

bool Fraction::operator>(Fraction p){

}

bool Fraction::operator<(Fraction p){

}

bool Fraction::operator==(Fraction p){

}

bool Fraction::operator!=(Fraction p){

}

bool Fraction::operator>=(Fraction p){

}

bool Fraction::operator<=(Fraction p){

}

Fraction Fraction::operator=(Fraction p){

}

Fraction& Fraction::operator++(){

}

Fraction& Fraction::operator--(){

}

Fraction Fraction::operator++(int num){

}

Fraction Fraction::operator--(int num){
    
}
