#include "Header.h"

Student::Student(std::string ten){
    this->name.copy(ten);
    this->liter = 0;
    this->math = 0;
}

Student::Student(const Student &s){
    this->name.copy(s.name);
    this->liter = s.liter;
    this->math = s.math;
}

Student::Student(std::string ten, float van, float toan){
    this->name.copy(ten);
    this->liter = van;
    this->math = toan;
}

~Student(){
    std::cout << "Deallocated\n";
}
