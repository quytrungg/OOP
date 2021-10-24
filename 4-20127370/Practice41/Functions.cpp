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
    return sum;
}

Fraction operator*(Fraction p){

}

Fraction operator+=(Fraction p){

}

Fraction operator*=(Fraction p){

}

int compare(Fraction p){

}

bool operator>(Fraction p){

}

bool operator<(Fraction p){

}

bool operator==(Fraction p){

}

bool operator!=(Fraction p){

}

bool operator>=(Fraction p){

}

bool operator<=(Fraction p){

}

Fraction operator=(Fraction p){

}

Fraction& operator++(){

}

Fraction& operator--(){

}

Fraction operator++(int num){

}

Fraction operator--(int num){
    
}
