#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Vehicle
{
protected:
    float fuel; //litre
    float weight; //kg
    float distance; //km
public:
    Vehicle();
    float getDistance(){return distance;}
    float getFuel(){return fuel;}
    float getWeight(){return weight;}
    void addFuel(int f){fuel += f;}
    void addWeight(int w){weight += w;}
    void removeWeight(int w){weight -= w;}
    void runDistance(int d){distance += d;}
};

class MotorBike: public Vehicle
{
public:
    void currentFuel();
};

class Truck: public Vehicle
{
public:
    void currentFuel();
};


#endif