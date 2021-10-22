#include "MyFunctions.h"

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

//Input the fraction array
void Fraction::InputFraction(Fraction* &a, int n){
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
}

//Output the fraction array
void Fraction::OutputFraction(Fraction* a, int n){
    for(int i = 0; i < n; i++){
        std::cout << a[i] << " ";
    }
}

//Find the common denominator of 2 fractions
void Fraction::CommonDenominator(Fraction &p){
    this->num *= p.GetDen();
    p.SetNum(p.GetNum() * this->den);
    this->den *= p.GetDen();
    p.SetDen(this->den);
}

//Set numerator of fraction
void Fraction::SetNum(int tu){
    this->num = tu;
}

//Get numerator of fraction
int Fraction::GetNum(){
    return this->num;
}

//Set denominator of fraciton
void Fraction::SetDen(int mau){
    this->den = mau;
}

//Get denominator of fraction
int Fraction::GetDen(){
    return this->den;
}

//Reduce the fraction
Fraction Fraction::ReduceFraction(){
    Fraction reduce;
    int temp = LCD(this->num, this->den);
    this->num /= temp;
    this->den /= temp;
    reduce.SetNum(this->num);
    reduce.SetDen(this->den);
    return reduce;
}

//Inverse the fraction
Fraction Fraction::InverseFraction(){
    Fraction inverse;
    if(this->num != 0){
        SwapElement(this->num, this->den);
    }
    else std::cout << "This fraciton cannot be inversed\n";
    inverse.SetNum(this->num);
    inverse.SetDen(this->den);
    return inverse;
}

//Add 2 fractions
Fraction Fraction::Add(Fraction p){
    Fraction sum;
    sum.num = this->num * p.den + p.num * this->den;
    sum.den = this->den * p.den;
    sum.ReduceFraction();
    return sum;
}

//Multiply 2 fractions
Fraction Fraction::Mul(Fraction p){
    Fraction mul;
    mul.SetNum(this->num * p.GetNum());
    mul.SetDen(this->den * p.GetDen());
    mul.ReduceFraction();
    return mul;
}

//Compare 2 fractions
int Fraction::CompareFraction(Fraction p){
    this->CommonDenominator(p);
    if(this->num > p.GetNum() && this->den > 0 && p.GetDen() > 0){
        return 1;
    }
    else if(this->num < p.GetNum() && this->den < 0 && p.GetDen() < 0){
        return 1;
    }
    else if(this->num > p.GetNum() && this->den > 0 && p.GetDen() < 0){
        return 1;
    }
    else if(this->num < p.GetNum() && this->den > 0 && p.GetDen() > 0){
        return -1;
    }
    else if(this->num > p.GetNum() && this->den < 0 && p.GetDen() < 0){
        return -1;
    }
    else if(this->num < p.GetNum() && this->den < 0 && p.GetDen() > 0){
        return -1;
    }
    else return 0;
}

//Define > for fractions
bool Ascending(Fraction x, Fraction y){
    return x.CompareFraction(y) == 1;
}

//Define < for fractions
bool Descending(Fraction x, Fraction y){
    return x.CompareFraction(y) == -1;
}

//Define << for fractions
std::ostream& operator<<(std::ostream& output, Fraction &fraction){
    output << fraction.GetNum() << "/" << fraction.GetDen();
    return output;
}

//Define >> for fraction
std::istream& operator>>(std::istream& input, Fraction &fraction){
    int tu, mau;
    do{
        std::cin >> tu >> mau;
    } while(mau == 0);
    fraction.SetNum(tu);
    fraction.SetDen(mau);
    return input;
}

void Fraction::SortFraction(Fraction* a, int n, bool (*operation)(Fraction, Fraction)){
    for(int i = 0; i < n - 1; i++){
        int idx = i;
        for(int j = i + 1; j < n; j++){
            if((*operation)(a[i], a[j])){
                SwapElement(a[i], a[j]);
            }
        }
        //SwapElement(a[idx], a[i]);
    }
}
