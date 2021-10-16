#include "MyFunctions.h"

int main(){
    int n, option;
    std::cout << "Enter size of the array: ";
    std::cin >> n;
    Fraction* a = new Fraction[n];
    std::cout << "Input array (if fraction is invalid, it won't be counted): ";
    InputFraction(a, n);
    //Reduce/Inverse fraction
    for(int i = 0; i < n; i++){
        a[i] = ReduceFraction(a[i]);
        a[i] = InverseFraction(a[i]);
    }
    std::cout << "Fractions have been reduced and inversed\n";
    OutputFraction(a, n);
    //Sum fraction
    Fraction sum = Operation(a[0], a[1], Add);
    std::cout << "\nSum of the first 2 elements: " << sum << "\n";
    //Multiply fraction
    Fraction mul = Operation(a[0], a[1], Mul);
    std::cout << "Multiply of the first 2 elements: " << mul << "\n";
    OutputFraction(a, n);
    delete[] a;
    return 0;
}