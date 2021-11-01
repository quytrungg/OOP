#include "Array.h"
#include "Array.cpp"

int main(){
    float *p = new float[5];
    p[0] = 3.2;
    p[1] = 3.14;
    p[2] = 1;
    p[3] = 5;
    p[4] = 9.6;

    Array<int> a;
    std::cout << "Enter Array A (size \\n elements): ";
    std::cin >> a;
    Array<int> b = a;

    Array<float> c(p, 5); 
    int* temp = c;

    std::cout << "Operator[] of A:\n";
    for(int i = 0; i < a.getSize(); i++)
        std::cout << "A[" << i << "] = " << a[i] << "\n";

    std::cout << "Operator<< for Array A: ";
    std::cout << a;
    std::cout << "Operator= for Array B (initialized from Array A): ";
    std::cout << b;
    std::cout << "Array C (float type, from a given array): ";
    std::cout << c;

    std::cout << "Typecast from Array C (float) -> (int): ";
    for(int i = 0; i < c.getSize(); i++){
        std::cout << temp[i] << " ";
    }
    return 0;
}