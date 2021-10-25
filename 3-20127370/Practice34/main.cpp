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
    Array<int> c = a;
    Array<int> d;

    a.OutputArray();
    b.OutputArray();
    c.OutputArray();
    d.OutputArray();
    return 0;
}