#include "Fractions.h"

Fraction::Fraction(){

}

Fraction::Fraction(const Fraction& p){
    this->num = p.num;
    this->den = p.den;
}

//Find the largest common divisor
int LCD(int a, int b){
    if(a > b) return LCD(b, a);
    do{
        int r = b % a;
        b = a;
        a = r;
    } while(a != 0);
    return b;
}

//Set numerator for fraction
void Fraction::SetNum(int tu){
    this->num = tu;
}

//Get numerator for fraction
int Fraction::GetNum(){
    return this->num;
}

//Set denominator for fraction
void Fraction::SetDen(int mau){
    this->den = mau;
}

//Get denominator for fraction
int Fraction::GetDen(){
    return this->den;
}

//Reduce the fraction
Fraction Fraction::ReduceFraction(){
    int temp = LCD(this->num, this->den);
    this->num = this->num / temp;
    this->den = this->den / temp;
    return *this;
}

//Find the commmon denominator of 2 fractions
void Fraction::CommonDenominator(Fraction &p){
    this->num *= p.den;
    p.num = p.num * this->den;
    this->den *= p.den;
    p.den = this->den;
}

//Overload operator +
Fraction Fraction::operator+(Fraction p){
    Fraction sum;
    sum.num = this->num * p.den + p.num * this->den;
    sum.den = this->den * p.den;
    sum.ReduceFraction();
    return sum;
}

//Overload operator *
Fraction Fraction::operator*(Fraction p){
    Fraction mul;
    mul.SetNum(this->num * p.GetNum());
    mul.SetDen(this->den * p.GetDen());
    mul.ReduceFraction();
    return mul;
}

//Overload operator +=
Fraction& Fraction::operator+=(Fraction p){
    *this = *this + p;
    this->ReduceFraction();
    return *this;
}

//Overload operator *=
Fraction& Fraction::operator*=(Fraction p){
    *this = *this * p;
    this->ReduceFraction();
    return *this;
}

//Compare between 2 fractions
int Fraction::compare(Fraction p){
    this->CommonDenominator(p);
    if(this->num > p.GetNum() && this->den > 0 && p.GetDen() > 0){
        this->ReduceFraction();
        return 1;
    }
    else if(this->num < p.GetNum() && this->den < 0 && p.GetDen() < 0){
        this->ReduceFraction();
        return 1;
    }
    else if(this->num > p.GetNum() && this->den > 0 && p.GetDen() < 0){
        this->ReduceFraction();
        return 1;
    }
    else if(this->num < p.GetNum() && this->den > 0 && p.GetDen() > 0){
        this->ReduceFraction();
        return -1;
    }
    else if(this->num > p.GetNum() && this->den < 0 && p.GetDen() < 0){
        this->ReduceFraction();
        return -1;
    }
    else if(this->num < p.GetNum() && this->den < 0 && p.GetDen() > 0){
        this->ReduceFraction();
        return -1;
    }
    else{
        this->ReduceFraction();
        return 0;
    }
}

//Overload operator >
bool Fraction::operator>(Fraction p){
    return this->compare(p) == 1;
}

//Overload operator <
bool Fraction::operator<(Fraction p){
    return this->compare(p) == -1;
}

//Overload operator ==
bool Fraction::operator==(Fraction p){
    return this->compare(p) == 0;
}

//Overload operator !=
bool Fraction::operator!=(Fraction p){
    return this->compare(p) != 0;
}

//Overload operator >=
bool Fraction::operator>=(Fraction p){
    return this->compare(p) == 1 || this->compare(p) == 0;
}

//Overload operator <=
bool Fraction::operator<=(Fraction p){
    return this->compare(p) == -1 || this->compare(p) == 0;
}

//Overload operator =
Fraction Fraction::operator=(int num){
    this->num = num;
    this->den = 1;
    return *this;
}

//Overload operator ++ (Prefix)
Fraction& Fraction::operator++(){
    this->num += this->den;
    this->ReduceFraction();
    return *this;
}

//Overload operator -- (Prefix)
Fraction& Fraction::operator--(){
    this->num -= this->den;
    this->ReduceFraction();
    return *this;
}

//Overload operator ++ (Postfix)
Fraction Fraction::operator++(int num){
    Fraction old = *this;
    this->num += this->den;
    this->ReduceFraction();
    old.ReduceFraction();
    return old;
}

//Overload operator -- (Postfix)
Fraction Fraction::operator--(int num){
    Fraction old = *this;
    this->num -= this->den;
    this->ReduceFraction();
    old.ReduceFraction();
    return old;
}

//Overload operator << (cout)
std::ostream& operator<<(std::ostream& output, Fraction &p){
    output << p.num << "/" << p.den << " ";
    return output;
}

//Overload operator >> (cin)
std::istream& operator>>(std::istream& input, Fraction &p){
    int tu, mau;
    do{
        std::cin >> tu >> mau;
    } while(mau == 0);
    p.num = tu;
    p.den = mau;
    return input;
}

Fraction::operator float(){
    return (float) this->num / this->den;
}

Fraction::operator int(){
    return (int) this->num / this->den;
}

Fraction::~Fraction(){
    
}
