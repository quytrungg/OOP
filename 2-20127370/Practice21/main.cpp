#include "MyFunctions.h"

int main(){
    int n;
    std::cout << "Enter size of the array: ";
    std::cin >> n;
    Fraction* a = new Fraction[n];
    std::cout << "Enter array: ";
    a->InputFraction(a, n);
    std::cout << "Numerator and denominator of the first element: ";
    std::cout << a[0].GetNum() << " and " << a[0].GetDen() << "\n";

    for(int i = 0; i < n; i++){
        a[i].ReduceFraction();
        a[i].InverseFraction();
    }
    std::cout << "The fraction array has been reduced and inversed\n";

    Fraction add = a[0].Add(a[1]);

    Fraction mul = a[0].Mul(a[1]);
    std::cout << "Add: " << add << "\n";
    std::cout << "Mul: " << mul << "\n";
    std::cout << "Compare: " << a[0].CompareFraction(a[1]) << "\n";

    for(int i = 0; i < n; i++){
        a[i].ReduceFraction();
    }
    std::cout << "Output array: ";
    a->OutputFraction(a, n);

    delete[] a;
    return 0;
}