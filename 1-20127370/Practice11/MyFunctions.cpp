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

//Reduce the fraction
Fraction ReduceFraction(Fraction &x){
    int temp = LCD(x.tu, x.mau);
    x.tu /= temp;
    x.mau /= temp;
    return x;
}

//Inverse the fraction
Fraction InverseFraction(Fraction &a){
    if(a.tu != 0){
        HoanVi(a.tu, a.mau);
    }
    else std::cout << "Fraction cannot be inversed!\n";
    return a;
}

//Find the common denominator
void CommonDenominator(Fraction &x, Fraction &y){
    if(x.mau != y.mau){
        x.tu *= (y.mau);
        y.tu *= (x.mau);
        x.mau *= y.mau;
        y.mau = x.mau;
    }
}

Fraction Operation(Fraction x, Fraction y, Fraction (*p) (Fraction, Fraction)){
    return p(x, y);
}

//Define + for fraction
Fraction Add(Fraction x, Fraction y){
    Fraction z;
    CommonDenominator(x, y);
    z.tu = x.tu + y.tu;
    z.mau = y.mau;
    z = ReduceFraction(z);
    return z;
}

//Define * for fraction
Fraction Mul(Fraction x, Fraction y){
    Fraction z;
    z.tu = x.tu * y.tu;
    z.mau = x.mau * y.mau;
    z = ReduceFraction(z);
    return z;
}

//Define the ostream to cout values
std::ostream& operator<<(std::ostream& output, Fraction &fraction){
    output << fraction.tu << "/" << fraction.mau;
    return output;
}

//Define the istream to cin values
std::istream& operator>>(std::istream& input, Fraction &fraction){
    do{
        input >> fraction.tu >> fraction.mau;
    } while(fraction.mau == 0);
    return input;
}