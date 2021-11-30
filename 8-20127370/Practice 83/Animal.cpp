#include "Animal.h"

//Constructor for animal
Animal::Animal(int s){
    this->speed = s;
}

//Compare speed between 2 animals
void Animal::compareAnimal(Animal* a, Animal* b){
    if(a->speed > b->speed){
        std::cout << a->info() << " is faster than " << b->info() << "\n"; 
    }
    else if(b->speed > a->speed){
        std::cout << b->info() << " is faster than " << a->info() << "\n";
    }
    else std::cout << a->info() << " is as fast as " << b->info() << "\n";
}

//Constructor for cheetah
Cheetah::Cheetah(): Animal(100){}

//Constructor for antelope
Antelope::Antelope(): Animal(80){}

//Constructor for lion
Lion::Lion(): Animal(70){}

//Constructor for dog
Dog::Dog(): Animal(60){}

//Constructor for human
Human::Human(): Animal(30){}

//Constructor for horse
Horse::Horse(): Animal(60){}

//Animal information for cheetah
std::string Cheetah::info(){
    return "Cheetah";
}

//Animal information for antelope
std::string Antelope::info(){
    return "Antelope";
}

//Animal information for lion
std::string Lion::info(){
    return "Lion";
}

//Animal information for dog
std::string Dog::info(){
    return "Dog";
}

//Animal information for human
std::string Human::info(){
    return "Human";
}

//Animal information for horse
std::string Horse::info(){
    return "Horse";
}
