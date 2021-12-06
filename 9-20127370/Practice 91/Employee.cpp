#include "Employee.h"

//Input an employee
void Employee::input(){
    std::string temp;
    std::cout << "Enter name: ";
    std::cin.ignore();
    std::getline(std::cin, temp, '\n');
    this->name = temp;
    std::cout << "Enter get-in year: ";
    std::cin >> this->getInYear;
}

//Input an officer
void Officer::input(){
    Employee::input();
    std::cout << "Enter salary and vacation days: ";
    std::cin >> this->salary >> this->vacation;
}

//Calculate salary of an officer
double Officer::calculateSalary(){
    return (double) this->salary - this->vacation * 10.0;
}

//Input a worker
void Worker::input(){
    Employee::input();
    std::cout << "Enter number of products: ";
    std::cin >> this->products;
}

//Calculate salary of a worker
double Worker::calculateSalary(){
    return (double) this->products * 10.0;
}

//Input a list of employees
void Company::inputList(){
    int n, option;
	Employee* p;
	std::cout << "Employee:\n1. Worker\n2. Officer\n\nNumber of employees: ";
	std::cin >> n;
	for (int i = 0; i < n; i++){
		std::cout << "Enter employee type: ";
		std::cin >> option;
		if (option == 1) p = new Worker;
		else p = new Officer;
		p->input();
		this->emplist.push_back(p);
		std::cout << "\n";
	}
}

//Calculate the total salary of all employees
double Company::calculateTotalSalary(){
    double total = 0;
    for(int i = 0; i < this->emplist.size(); i++){
        total += this->emplist[i]->calculateSalary();
    }
    return total;
}

//Deallocate the employee list of pointers
Company::~Company(){
    for(int i = 0; i < this->emplist.size(); i++){
        delete this->emplist[i];
    }
}
