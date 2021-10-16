#ifndef HEADER_H
#define HEADER_H

#include <iostream>

//Fraction struct
struct Fraction{
    int tu;
    int mau;
};

//Swap 2 elements
template <class T>
void HoanVi(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
//Input an array of fractions
void InputFraction(T* &a, int n){
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
}

template <typename T>
//Output the array of fractions
void OutputFraction(T* &a, int n){
    for(int i = 0; i < n; i++){
        std::cout << a[i] << " ";
    }
}

int LCD(int a, int b);
Fraction ReduceFraction(Fraction &x);
Fraction InverseFraction(Fraction &a);
void CommonDenominator(Fraction &x, Fraction &y);
Fraction Operation(Fraction x, Fraction y, Fraction (*p) (Fraction, Fraction));
Fraction Add(Fraction x, Fraction y);
Fraction Mul(Fraction x, Fraction y);
std::ostream& operator<<(std::ostream& output, Fraction &fraction);
std::istream& operator>>(std::istream& input, Fraction &fraction);

#endif