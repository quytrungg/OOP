#include "Animal.h"

Animal::Animal(int s){
    this->speed = s;
}

void Animal::compareAnimal(Animal* a, Animal* b){
    if(a->speed > b->speed){
        std::cout << a->info() << " is faster than " << b->info() << "\n"; 
    }
    else if(b->speed > a->speed){
        std::cout << b->info() << " is faster than " << a->info() << "\n";
    }
    else std::cout << a->info() << " is as fast as " << b->info() << "\n";
}

Cheetah::Cheetah(): Animal(100){}

Antelope::Antelope(): Animal(80){}

Lion::Lion(): Animal(70){}

Dog::Dog(): Animal(60){}

Human::Human(): Animal(30){}

Horse::Horse(): Animal(60){}

std::string Cheetah::info(){
    return "Cheetah";
}

std::string Antelope::info(){
    return "Antelope";
}

std::string Lion::info(){
    return "Lion";
}

std::string Dog::info(){
    return "Dog";
}

std::string Human::info(){
    return "Human";
}

std::string Horse::info(){
    return "Horse";
}
