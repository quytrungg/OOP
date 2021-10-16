#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class AbstractEmployee{
    virtual void askForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    std::string company;
    int age;
protected:
    std::string name;
public:
    void setName(std::string n){
        name = n;
    }
    std::string getName(){
        return name;
    }
    void setCompany(std::string c){
        company = c;
    }
    std::string getCompany(){
        return company;
    }
    void setAge(int a){
        if(age >= 18) age = a;
    }
    int getAge(){
        return age;
    }

    void introduce(){
        std::cout << "Name: " << name << "\n";
        std::cout << "Company: " << company << "\n";
        std::cout << "Age: " << age << "\n";
    }
    Employee(std::string n, std::string c, int a){
        name = n;
        company = c;
        age = a;
    }

    virtual void askForPromotion(){
        if(age > 30) std::cout << name << " got promoted!" << "\n";
        else std::cout << name << " got no promotion!" << "\n";
    }
    virtual void work(){
        std::cout << name << " is checking email, task backlog, performing tasks...\n";
    }
};

class Developer: public Employee{
public:
    std::string majLanguage;
    Developer(std::string n, std::string c, int a, std::string m):Employee(n, c, a){
        majLanguage = m;
    }

    void fixBug(){
        std::cout << name << " fixed bug using " << majLanguage << "\n";
    }
    void work(){
        std::cout << name << " is writing " << majLanguage << " code\n";
    }
};

class Teacher: public Employee{
public:
    std::string subject;
    void prepareLesson(){
        std::cout << name << " is preparing " << subject << " lesson\n";
    }
    Teacher(std::string n, std::string c, int a, std::string s):Employee(n, c, a){
        subject = s;
    }
    void work(){
        std::cout << name << " is teaching " << subject << "\n";
    }
};

int main(){
    Employee emp1 = Employee("Trung", "KHTN", 18);
    emp1.introduce();

    Employee emp2 = Employee("Truong", "KHTN" , 35);
    emp2.introduce();

    emp1.askForPromotion();
    emp2.askForPromotion();

    Developer d = Developer("Trung", "KHTN", 18, "C++");
    d.fixBug();
    d.askForPromotion();

    Teacher t = Teacher("Jack", "Kul School", 35, "History");
    t.prepareLesson();
    t.askForPromotion();

    d.work();
    t.work();

    Employee* e1=&d;
    Employee* e2=&t;

    e1->work();
    e2->work();

    return 0;
}