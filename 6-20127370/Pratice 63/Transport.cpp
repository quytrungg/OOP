#include "Transport.h"

Vehicle::Vehicle(){
    this->fuel = 0;
    this->weight = 0;
    this->distance = 0;
}

void MotorBike::currentFuel(){
    this->fuel -= this->distance * this->rate1 + this->weight * this->rate2 * this->distance / 100;
}

void Truck::currentFuel(){
    this->fuel -= this->distance * this->rate1 + this->weight * this->rate2 * this->distance / 100;
}
