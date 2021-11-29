#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
protected:
    int speed;
public:
    Animal(){}
    Animal(int s);
    bool compareAnimal(Animal* a, Animal* b);
};

class Cheetah: public Animal{
private:
public:
    Cheetah(int s);
};

class Antelope: public Animal{
private:
public:
    Antelope(int s);
};

class Lion: public Animal{
private:
public:
    Lion(int s);
};

class Dog: public Animal{
private:
public:
    Dog(int s);
};

class Human: public Animal{
private:
public:
    Human(int s);
};

class Horse: public Animal{
private:
public:
    Horse(int s);
};

#endif