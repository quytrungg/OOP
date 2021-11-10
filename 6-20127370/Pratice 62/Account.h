#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Account
{
private:
    float m_balance;
public:
    float getBalance(){return m_balance;}
    void deposit(float money){m_balance += money;}
    void withdraw(float money){
        if(money <= m_balance){
            m_balance -= money;
        }
    }
};

class SavingAccount : public Account
{
private:
    int period;
    float rate;
    int duration;
public:
    int getPeriod(){return period;}
    float getRate(){return rate;}
    int getDuration(){return duration;}
    float calculateInterest(){

    }  
    
};


#endif