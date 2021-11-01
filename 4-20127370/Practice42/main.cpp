#include "Monomial.h"

int main(){
    Monomial a, b;
    std::cout << "Enter monomial A (Operator>>): ";
    std::cin >> a;
    std::cout << "Enter monomial B (Operator >>): ";
    std::cin >> b;

    Monomial sum = a + b;
    Monomial mul = a * b;
    std::cout << "Operator+ of A and B: " << sum << "\n";
    std::cout << "Operator* of A and B: " << mul << "\n";

    Monomial temp1 = a, temp2 = b;
    std::cout << "Operator= of A and B: " << temp1 << " " << temp2 << "\n";

    temp1 += temp2;
    std::cout << "Operator+= of A and B: " << temp1 << "\n";

    temp1 = a;
    temp1 *= temp2;
    std::cout << "Operator*= of A and B: " << temp1 << "\n";

    if(a > b) std::cout << "A > B\n";
    if(a < b) std::cout << "A < B\n";
    if(a == b) std::cout << "A = B\n";
    if(a != b) std::cout << "A != B\n";
    if(a >= b) std::cout << "A >= B\n";
    if(a <= b) std::cout << "A <= B\n";

    a++;
    std::cout << "A++: " << a << "\n";
    a--;
    std::cout << "A--: " << a << "\n";
    ++a;
    std::cout << "++A: " << a << "\n";
    --a;
    std::cout << "--A: " << a << "\n";

    Monomial temp = !a;
    a = !a;
    b = !b;
    std::cout << "Operator! of A and B: " << a << " " << b << "\n";

    std::cout << "Monomial A and B (Operator<<): " << a << " " << b;
    return 0;
}