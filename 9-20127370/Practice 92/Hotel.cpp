#include "Hotel.h"

//Default constructor for hotel
Hotel::Hotel(){
    this->rent = 0;
    this->price = 0;
    this->discount = false;
}

//Constructor for hotel
Hotel::Hotel(bool d, double p){
    this->discount = d;
    this->price = p;
}

//Default constructor for Room A
RoomA::RoomA():Hotel(true, A){
    this->service = 0;
}

//Input a hotel room
void Hotel::input(){
    std::cout << "Enter rent days: ";
    std::cin >> this->rent;
}

//Calculate the hotel room rent price
double Hotel::calculateRent(){
    if (this->rent > 9 && this->discount == true)
        return (double) this->price * ((this->rent - 9) * 0.9 + 9);
    else return (double) this->price * this->rent;
}

//Input room A
void RoomA::input(){
    Hotel::input();
    std::cout << "Enter price of service: ";
    std::cin >> this->service;
}

//Calculate room A rent price
double RoomA::calculateRent(){
    return Hotel::calculateRent() + this->service;
}

//Default constructor for Room B
RoomB::RoomB():Hotel(true, B){}

//Input room B
void RoomB::input(){
    Hotel::input();
}

//Default constructor for Room C
RoomC::RoomC():Hotel(false, C){}

//Input room C
void RoomC::input(){
    Hotel::input();
}

//Input list of hotel rooms
void HotelRoomList::inputList(){
    int n, option;
    Hotel* h;
    std::cout << "Hotel California\n1. Room A\n2. Room B\n3. Room C\nEnter number of rooms: ";
    std::cin >> n;
    std::cout << "\n";
    for(int i = 0; i < n; i++){
        std::cout << "Enter room type: ";
        std::cin >> option;
        if(option == 1) h = new RoomA;
        else if(option == 2) h = new RoomB;
        else h = new RoomC;
        h->input();
        this->list.push_back(h);
        std::cout << "\n";
    }
}

//Calculate the total rent price
double HotelRoomList::calculateTotalRent(){
    double total = 0;
    for(int i = 0; i < this->list.size(); i++){
        total += this->list[i]->calculateRent();
    }
    return total;
}

//Deallocate the hotel room list of pointers
HotelRoomList::~HotelRoomList(){
    for(int i = 0; i < this->list.size(); i++){
        delete this->list[i];
    }
}
