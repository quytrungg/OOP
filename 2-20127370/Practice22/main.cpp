#include "MyFunctions.h"

int main(){
    Monomial a, b;
    std::cout << "Input 2 monomials: ";
    a.InputMonomial();
    b.InputMonomial();
    std::cout << "The coefficient and exponent of the first monomial: ";
    std::cout << a.GetCoe() << " and " << a.GetExp() << "\n";

    float x;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Evaluate x of first monomial: " << a.EvaluateMonomial(x) << "\n";
    a = a.DeriveMonomial();
    b = b.DeriveMonomial();

    std::cout << "The 2 monomials have been derived!\nThe derived monomials: ";
    a.OutputMonomial();
    b.OutputMonomial();

    Monomial mul = a.MultiplyMonomial(b);
    std::cout << "\nThe multiplication of 2 monomials: ";
    mul.OutputMonomial();

    return 0;
}