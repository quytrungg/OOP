#include "MyFunctions.h"

int main(){
    Student a, b;
    std::cout << "Input student info: \n";
    a.InputStudent();
    b.InputStudent();

    std::cout << "Info of the first student: ";
    std::cout << ": " << a.GetLiter() << " " << a.GetMath() << "\n";

    std::cout << "GPA of 2 students: ";
    std::cout << a.CalculateGPA() << " " << b.CalculateGPA() << "\n";
    
    std::cout << "Grade of 2 students: ";
    std::cout << a.GetGrade() << " " << b.GetGrade() << "\n";

    std::cout << "Output student info\n";
    a.OutputStudent();
    b.OutputStudent();

    return 0;
}