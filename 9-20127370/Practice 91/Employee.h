#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

class Employee{
private:
    std::string name;
    int getInYear;
public:
    Employee(){}
    virtual void input();
    virtual double calculateSalary() = 0;
    virtual ~Employee(){}
};

class Officer: public Employee{
private:
    double salary;
    int vacation;
public:
    Officer(){}
    void input();
    double calculateSalary();
};

class Worker: public Employee{
private:
    int products;
public:
    Worker(){}
    void input();
    double calculateSalary();

};

class RandomIntegerGenerator{
public:
	RandomIntegerGenerator() { srand(time(NULL)); }
	int next() { return rand(); }
	int next(int ceiling) { return rand() % ceiling; }
	int next(int left, int right) { return left + rand() % (right + 1 - left); }
};

class Company{
private:
    std::vector<Employee*> emplist;
public:
    void inputList();
    double calculateTotalSalary();
    ~Company();
};

#endif