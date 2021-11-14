#include "Account.h"

int main(){
    SavingAccount a1;
    a1.createAccount(1, 4.3 / 100);
    a1.deposit(1000000000);
    a1.increaseDuration();
    std::cout << std::to_string(a1.calculateInterest());
    return 0;
}