#include "Animal.h"

int main(){
    Animal** a = new Animal*[6];
    a[0] = new Cheetah;
    a[1] = new Antelope;
    a[2] = new Lion;
    a[3] = new Dog;
    a[4] = new Human;
    a[5] = new Horse;

    Animal::compareAnimal(a[0], a[1]);
    Animal::compareAnimal(a[2], a[3]);
    Animal::compareAnimal(a[4], a[5]);

    return 0;
}