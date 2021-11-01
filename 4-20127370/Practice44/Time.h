#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Time
{
private:
    int sec;
    int min;
    int hour;
public:
    Time();
    Time(int h, int m, int s);
    Time(int second);
    Time(const Time& t);
    void setSec(int s);
    int getSec();
    void setMin(int m);
    int getMin();
    void setHour(int h);
    int getHour();
    void setAbsSec(int s);
    int getAbsSec();
    int compareTime(Time t);
    bool operator>(Time t);
    bool operator<(Time t);
    bool operator==(Time t);
    bool operator>=(Time t);
    bool operator<=(Time t);
    bool operator!=(Time t);
    Time operator+(Time t);
    Time& operator++();
    Time operator++(int arg);
    friend std::ostream& operator<<(std::ostream& out, Time t);
    friend std::istream& operator>>(std::istream& in, Time t);
    ~Time();
};

#endif