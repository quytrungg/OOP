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

//Find the common denominator
void CommonDenominator(Fraction &x, Fraction &y){
    if(x.mau != y.mau){
        x.tu *= (y.mau);
        y.tu *= (x.mau);
        x.mau *= y.mau;
        y.mau = x.mau;
    }
}

//Compare between 2 fractions
int CompareFraction(Fraction x, Fraction y){
    CommonDenominator(x, y);
    if(x.tu < y.tu && x.mau > 0 && y.mau > 0){
        return -1;
    }
    else if(x.tu > y.tu && x.mau < 0 && y.mau < 0){
        return -1;
    }
    else if(x.tu < y.tu && x.mau < 0 && y.mau > 0){
        return -1;
    }
    else if(x.tu > y.tu && x.mau > 0 && y.mau > 0){
        return 1;
    }
    else if(x.tu < y.tu && x.mau < 0 && y.mau < 0){
        return 1;
    }
    else if(x.tu > y.tu && x.mau > 0 && y.mau < 0){
        return 1;
    }
    else return 0;
}

//Define > for fraction
bool operator>(Fraction x, Fraction y){
    return CompareFraction(x, y) == 1;
}

//Define < for fraction
bool operator<(Fraction x, Fraction y){
    return CompareFraction(x, y) == -1;
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
    }while(fraction.mau == 0);
    return input;
}