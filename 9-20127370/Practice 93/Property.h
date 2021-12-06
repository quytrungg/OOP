#ifndef PROPERTY_H
#define PROPERTY_H

#include <iostream>
#include <vector>
#include <string>

class Property{
private:
    std::string code;
    float price;
    bool discount;
public:
    Property();
    Property(bool d);
    virtual void input();
    virtual float calculatePrice();
    virtual float calculateArea() = 0;
    virtual ~Property(){}
};

class Rectangle: public Property{
private:
    float width, height;
public:
    Rectangle();
    void input();
    float calculateArea();
    float calculatePrice();
};

class Trapezoid: public Property{
private:
    float p1, p2, h;
public:
    Trapezoid();
    void input();
    float calculateArea();
    float calculatePrice();
};

class PropertyCompany{
private:
    std::vector<Property*> list;
public:
    void inputList();
    float calculateTotalPrice();
    ~PropertyCompany();
};

#endif