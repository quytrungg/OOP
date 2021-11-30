#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
protected:
    int speed;
public:
    Animal(){}
    Animal(int s);
    static void compareAnimal(Animal* a, Animal* b);
    virtual std::string info() = 0;
};

class Cheetah: public Animal{
private:
public:
    Cheetah();
    std::string info();
};

class Antelope: public Animal{
private:
public:
    Antelope();
    std::string info();
};

class Lion: public Animal{
private:
public:
    Lion();
    std::string info();
};

class Dog: public Animal{
private:
public:
    Dog();
    std::string info();
};

class Human: public Animal{
private:
public:
    Human();
    std::string info();
};

class Horse: public Animal{
private:
public:
    Horse();
    std::string info();
};

#endif