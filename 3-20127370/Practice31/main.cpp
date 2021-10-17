#include "Header.h"

int main(){
    Fraction a, b(3, 4), c(5);
    Fraction d = b;

    a.OutputFraction();
    b.OutputFraction();
    c.OutputFraction();
    d.OutputFraction();
    std::cout << "\n";
    return 0;
}