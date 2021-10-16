#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    float liter, math;
public:
    void InputStudent();
    void OutputStudent();
    void SetName(std::string ten);
    std::string GetName();
    void SetLiter(float van);
    float GetLiter();
    void SetMath(float toan);
    float GetMath();
    float CalculateGPA();
    char GetGrade();
};

#endif