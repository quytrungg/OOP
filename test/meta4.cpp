#include <iostream>
/*
class Base {
public:
    virtual void method() { std::cout << "Base"; }
};

class Derived : public Base {
public:
    virtual void method() { std::cout << "Derived"; }
};

int main(){
    Base *pBase = new Derived;
    pBase->method();
    return 0;
}
*/

template <class Derived> struct base {
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};

struct derived : base<derived> {
    void implementation() {
        std::cout << "Derived";
    }
};

int main(){
    derived b;
    b.interface();
    return 0;
}