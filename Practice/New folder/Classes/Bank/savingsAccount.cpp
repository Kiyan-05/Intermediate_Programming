#include "savingsAccount.h"
#include <iostream>
using namespace std;

savingsAccount::savingsAccount(int account, double balance): bankAccount::bankAccount(account, balance)
{
    interest = 0.0;
}

savingsAccount::savingsAccount(int account, double balance, double varInterest): bankAccount::bankAccount(account,balance)
{
    interest = varInterest;
}

void savingsAccount::setInterestRate(double varInterest)
{
    interest = varInterest;
}

double savingsAccount::getInterestRate()
{
    return interest;
}

double savingsAccount::postInterest()
{
    return balance * (interest/100);
}

double savingsAccount::withdraw(double amount)
{
    if(amount < balance)
    {
        balance -= amount;
    }
    return amount;
}

void savingsAccount::printAccountInfo()
{
    cout<<"Savings Account"<<"\n-------------------";
    bankAccount::printAccountInfo();
    cout<<"\n Interest Rate: "<<interest<<" --- Post interest: "<<savingsAccount::postInterest();
}
