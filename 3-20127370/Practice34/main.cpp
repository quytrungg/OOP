#include "Header.h"
#include "Functions.cpp"

int main(){
    Array<int> a(10);
    int* arr = new int[5];
    arr[0] = 3;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 7;
    Array<int> b(arr, 5);

    a.OutputArray();
    b.OutputArray();
    return 0;
}