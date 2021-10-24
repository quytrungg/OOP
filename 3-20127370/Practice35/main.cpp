#include "Header.h"

int main(){
    Fraction a;
    Fraction b(3);
    Fraction c(4, 9);
    Fraction d = c;

    a.OutputFraction();
    b.OutputFraction();
    c.OutputFraction();
    d.OutputFraction();
    std::cout << "\nNumber of objects: " << Fraction::getCount() << "\n";
    return 0;
}