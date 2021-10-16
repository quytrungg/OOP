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

//Sort the array in asscending order
template <typename T>
void SortAscending(T* &a, int n){
    for(int i = 0; i <  n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) HoanVi(a[i], a[j]);
        }
    }
}

//Sort the array in descending order
template <typename T>
void SortDescending(T* &a, int n){
    for(int i = 0; i <  n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]) HoanVi(a[i], a[j]);
        }
    }
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
void CommonDenominator(Fraction &x, Fraction &y);
int CompareFraction(Fraction x, Fraction y);
bool operator>(Fraction x, Fraction y);
bool operator<(Fraction x, Fraction y);
std::ostream& operator<<(std::ostream& output, Fraction &fraction);
std::istream& operator>>(std::istream& input, Fraction &fraction);

#endif