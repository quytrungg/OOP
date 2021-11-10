#include "Time.h"

Time::Time(){
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    this->hour = now->tm_hour;
    this->min = now->tm_min;
    this->sec = now->tm_sec;
}

Time::Time(int h, int m, int s){
    this->hour = h;
    this->min = m;
    this->sec = s;
}

Time::Time(int second){
    this->hour = second / 3600;
    second -= this->hour * 3600;
    this->min = second / 60;
    this->sec = second - (this->min * 60);
}

Time::Time(const Time& t){
    this->hour = t.hour;
    this->min = t.min;
    this->sec = t.sec;
}

void Time::setSec(int s){
    this->sec = s;
}

int Time::getSec(){
    return this->sec;
}

void Time::setMin(int m){
    this->min = m;
}

int Time::getMin(){
    return this->min;
}

void Time::setHour(int h){
    this->hour = h;
}

int Time::getHour(){
    return this->hour;
}

void Time::setAbsSec(int s){
    this->sec = s;
}

int Time::getAbsSec(){
    return this->hour*3600 + this->min * 60 + this->sec;
}

int Time::compareTime(const Time &t){
    if(this->hour > t.hour) return 1;
    else if(this->hour == t.hour && this->min > t.min) return 1;
    else if(this->min == t.min && this->sec > t.sec) return 1;
    else if(this->hour < t.hour) return -1;
    else if(this->hour == t.hour && this->min < t.min) return -1;
    else if(this->min == t.min && this->sec < t.sec) return -1;
    else return 0;
}

bool Time::operator>(const Time &t){
    return this->compareTime(t) == 1;
}

bool Time::operator<(const Time &t){
    return this->compareTime(t) == -1;
}

bool Time::operator==(const Time &t){
    return this->compareTime(t) == 0;
}

bool Time::operator>=(const Time &t){
    return this->compareTime(t) == 1 || this->compareTime(t) == 0;
}

bool Time::operator<=(const Time &t){
    return this->compareTime(t) == -1 || this->compareTime(t) == 0;
}

bool Time::operator!=(const Time &t){
    return this->compareTime(t) != 0;
}

Time Time::operator+(const Time &t){
    Time result;
    int temp = this->sec + t.sec;
    result.sec = temp % 60;
    int temp2 = this->min + t.min + (temp / 60);
    result.min = temp2 % 60;
    int temp3 = this->hour + t.hour + (temp2 / 60);
    result.hour = temp3 % 24;
    return result;
}

Time& Time::operator++(){
    this->sec += 1;
    if(this->sec > 60){
        this->min = this->sec / 60;
        this->sec = this->sec % 60;
    }
    return *this;
}

Time Time::operator++(int arg){
    Time old = *this;
    this->sec += 1;
    if(this->sec > 60){
        this->min = this->sec / 60;
        this->sec = this->sec % 60;
    }
    return old;
}

std::ostream& operator<<(std::ostream& out, Time t){
    out << t.hour << "h" << t.min << "m" << t.sec << "\n";
    return out;
}

std::istream& operator>>(std::istream& in, Time &t){
    do{
        in >> t.hour >> t.min >> t.sec;
    } while(t.hour > 24 || t.min > 60 || t.sec > 60);
    return in;
}

Time::~Time(){
    
}
