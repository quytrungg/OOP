#ifndef CINEMA_H
#define CINEMA_H

#include <iostream>

class Cinema{
protected:
    bool** empty;
    int row, col;
    float maxPrice;
    bool discount;
public:
    Cinema();
    Cinema(int row, int col, float price);
    Cinema(const Cinema& c);
    Cinema& operator=(const Cinema& c);
    bool isEmpty(int row, int col);
    bool bookSeat(int row, int col);
    bool*& operator[](int row);

    float getPrice(int row);
    float getTotalPrice();
    bool getDiscount(){return discount;}
    friend std::ostream& operator<<(std::ostream& os, Cinema c);
    ~Cinema();
};

class StandardCinema: public Cinema{
public:
    StandardCinema(int row, int col);
};

class VIPCinema: public Cinema{
public:
    VIPCinema(int row, int col);
    void isThursday();
};

#endif