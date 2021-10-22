#include "Header.h"

Student::Student(std::string ten){
    this->name = new char[ten.length() + 1];
    strcpy(this->name, ten.c_str());
    this->liter = 0;
    this->math = 0;
}

Student::Student(const Student &s){
    this->name = new char[strlen(s.name) + 1];
    strcpy(this->name, s.name);
    this->liter = s.liter;
    this->math = s.math;
}

Student::Student(std::string ten, float van, float toan){
    this->name = new char[ten.length() + 1];
    strcpy(this->name, ten.c_str());
    this->liter = van;
    this->math = toan;
}

Student::~Student(){
    delete[] this->name;
    std::cout << "Deallocated\n";
}

void Student::OutputStudent(){
    std::cout << this->name << ": " << this->liter << " " << this->math << "\n";
}
