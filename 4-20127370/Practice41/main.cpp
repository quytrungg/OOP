#include "Fractions.h"

int main(){
    Fraction a, b;
    std::cout << "Enter fraction A: ";
    std::cin >> a;
    std::cout << "Enter second fraction B: ";
    std::cin >> b;

    Fraction sum = a + b;
    Fraction mul = a * b;
    std::cout << "Sum of A and B: " << sum << "\n";
    std::cout << "Muliply of A and B: " << mul << "\n";

    Fraction temp1 = a, temp2 = b;
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

    std::cout << a << " " << b;
    return 0;
}