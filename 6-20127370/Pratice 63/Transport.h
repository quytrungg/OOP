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
private:
    const float rate1 = 0.02;
    const float rate2 = 0.01;
public:
    void currentFuel();
};

class Truck: public Vehicle
{
private:
    const float rate1 = 0.2;
    const float rate2 = 0.001;
public:
    void currentFuel();
};


#endif