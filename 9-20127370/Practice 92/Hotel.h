#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#define A 300
#define B 200
#define C 100

class Hotel{
private:
    int rent;
    double price;
    bool discount;
public:
    Hotel();
    Hotel(bool d, double p);
    virtual void input();
    virtual double calculateRent();
    virtual ~Hotel(){}
};

class RoomA: public Hotel{
private:
    float service;
public:
    RoomA();
    void input();
    double calculateRent();
};

class RoomB: public Hotel{
private:
public:
    RoomB();
    void input();
};

class RoomC: public Hotel{
private:
public:
    RoomC();
    void input();
};

class HotelRoomList{
private:
    std::vector<Hotel*> list;
public:
    void inputList();
    double calculateTotalRent();
    ~HotelRoomList();
};

#endif