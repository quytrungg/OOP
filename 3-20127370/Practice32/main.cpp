#include "Header.h"

int main(){
    Student a("Mai Quy Trung");
    Student b("Nguyen Quoc Huy", 9, 10);
    Student c = b;
    
    std::cout << "Student object with default score 0 \n";
    a.OutputStudent();
    std::cout << "Student object with name, liter and math points \n";
    b.OutputStudent();
    std::cout << "Student object copied from the above student info \n";
    c.OutputStudent();
    return 0;
}