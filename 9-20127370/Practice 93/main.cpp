#include "Property.h"

int main(){
    PropertyCompany p;
    p.inputList();
    std::cout << "Total property price: " << p.calculateTotalPrice() << "\n";
    return 0;
}