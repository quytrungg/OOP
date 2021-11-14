#include "Account.h"

int main(){
    SavingAccount a1;
    a1.createAccount(1, 4.3);
    a1.deposit(100000000);
    a1.increaseDuration();
    std::cout << "Interest: " << std::to_string(a1.calculateInterest()) << "\n";
    std::cout << "Current balance: " << std::fixed << a1.getBalance();
    return 0;
}