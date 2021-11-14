#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>

class Account
{
protected:
    float m_balance;
public:
    Account(){m_balance = 0;}
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
    int period; //months
    float rate; //yearly
    float duration; //months
public:
    void createAccount(int p, float r);
    int getPeriod(){return period;}
    float getRate(){return rate;}
    float getDuration(){return duration;}
    float calculateInterest();
    void updateDeposit(float money);
    void updateWithdraw(float money);
    float increaseDuration();
};


#endif