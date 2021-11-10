#include <iostream>
#include <vector>

class Student
{
private:
    char* name;
    float liter;
    float math;
    float calculateGPA(){
        return (liter + math) / 2;
    }
public:
    Student(){
        name = nullptr;
        liter = 0;
        math = 0;
    }
    Student(const Student& s){
        
    }
    void excellentStudent(){
        if(calculateGPA() >= 8){
            std::cout << name << " ";
        }
    }
    ~Student(){
        delete[] name;
    }
};

class StudentList
{
private:
    std::vector<Student> li;
public:
    void printExcellentStudent(){
        for(int i = 0; i < li.size(); i++){
            li[i].excellentStudent();
        }
    }
};

class Point
{
private:
    float X;
    float Y;
public:

    Point operator+(const Point &p){
        Point sum;
        sum.X = X + p.X;
        sum.Y = Y + p.Y;
        return sum;
    }
    Point operator/(int num){
        Point div;
        div.X = X / num;
        div.Y = Y / num;
        return div;
    }
};

class Triangle
{
private:
    Point A;
    Point B;
    Point C;
public:
    Triangle(Point a, Point b, Point c){

    }
    Point findCentroid(){
        return (A + B + C) / 3;
    }
};


int main(){
    
    
    return 0;
}

