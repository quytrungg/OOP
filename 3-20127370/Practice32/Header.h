#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

class Student
{
private:
    char* name;
    float liter;
    float math;
public:
    Student(std::string ten);
    Student(const Student &s);
    Student(std::string ten, float van, float toan);
    ~Student();
    void OutputStudent();
};


#endif