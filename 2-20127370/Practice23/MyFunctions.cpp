#include "MyFunctions.h"

//Input student information
void Student::InputStudent(){
    std::cin >> this->name;
    std::cin >> this->liter >> this->math;
}

//Output student information
void Student::OutputStudent(){
    std::cout << "Name: " << this->name;
    std::cout << "\nLiter: " << this->liter << "\nMath: " << this->math << "\n";
}

//Set literature point
void Student::SetLiter(float van){
    this->liter = van;
}

//Get literature point
float Student::GetLiter(){
    return this->liter;
}

//Set math point
void Student::SetMath(float toan){
    this->math = toan;
}

//Get math point
float Student::GetMath(){
    return this->math;
}

//Calculate GPA for student
float Student::CalculateGPA(){
    return (this->liter + this->math) / 2;
}

//Get grade for student
char Student::GetGrade(){
    float gpa = this->CalculateGPA();
    return gpa >= 9.0 ? 'A' : gpa >= 7.0 ? 'B' : gpa >= 5.0 ? 'C' : 'D';
}
