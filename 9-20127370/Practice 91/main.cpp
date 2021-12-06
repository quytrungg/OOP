#include "Employee.h"

int main(){
    Company c;
	c.inputList();
	std::cout << "Total salary of all employees: " << c.calculateTotalSalary();
    return 0;
}