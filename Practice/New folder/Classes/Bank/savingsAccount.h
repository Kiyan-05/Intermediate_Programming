#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include "bankAccount.h"

class savingsAccount
{
private:
    double interest;

public:
    savingsAccount(int,double);
    savingsAccount(int,double,double);
    void setInterestRate(double);
    double getInterestRate();
    double postInterest();

    double withdraw(double);
    void printAccountInfo();
};

#endif // SAVINGSACCOUNT_H_INCLUDED
