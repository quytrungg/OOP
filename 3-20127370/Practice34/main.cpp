#include "Header.h"
#include "Functions.cpp"

int main(){
    Array<int> a(10);
    int* arr = new int[5];
    arr[0] = 3;
    arr[1] = 5;
    arr[2] = 7;
    arr[3] = 9;
    arr[4] = 10;
    Array<int> b(arr, 5);
    Array<int> c = b;
    Array<int> d;

    std::cout << "Array object with default elements 0: ";
    a.OutputArray();
    std::cout << "Array object with given array and lengeth: ";
    b.OutputArray();
    std::cout << "Array object copied form the above array object: ";
    c.OutputArray();
    std::cout << "Array object with default constructor: ";
    d.OutputArray();
    b[1] = 100;
    std::cout << b[1] << "\n";
    return 0;
}