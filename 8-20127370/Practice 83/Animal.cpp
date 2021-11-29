#include "Animal.h"

Animal::Animal(int s){
    this->speed = s;
}

bool Animal::compareAnimal(Animal* a, Animal* b){
    return a->speed > b->speed;
}

Cheetah::Cheetah(int s): Animal(100){}

Antelope::Antelope(int s): Animal(80){}

Lion::Lion(int s): Animal(70){}

Dog::Dog(int s): Animal(60){}

Human::Human(int s): Animal(30){}

Horse::Horse(int s): Animal(60){}
