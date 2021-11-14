#include "Account.h"

void SavingAccount::createAccount(int p, float r){
    this->period = p;
    this->rate = r;
    this->duration = 0;
}

float SavingAccount::calculateInterest(){
    int time = this->duration / this->period;
    float rate = this->rate / 12 * time;
    return this->m_balance * (pow(1.0 + rate / 100, time) - 1);
}

void SavingAccount::updateDeposit(float money){
    this->deposit(money + this->calculateInterest());
    this->duration = 0;
}

void SavingAccount::updateWithdraw(float money){
    if(money < this->m_balance + this->calculateInterest()){
        this->withdraw(money - this->calculateInterest());
        this->duration = 0;
    }
}

float SavingAccount::increaseDuration(){
    return this->duration++;
}
