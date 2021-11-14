#include "Transport.h"

Vehicle::Vehicle(){
    this->fuel = 0;
    this->weight = 0;
    this->distance = 0;
}

void MotorBike::currentFuel(){
    this->fuel -= this->distance * 0.02 + this->weight * 0.01;
}

void Truck::currentFuel(){
    this->fuel -= this->distance * 0.2 + this->weight * 0.001;
}
