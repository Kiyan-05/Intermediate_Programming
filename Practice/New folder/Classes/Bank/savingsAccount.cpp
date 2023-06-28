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

double savingsAccount::postInterest(int year)
{
    double amount = 0;
    for(int i=0; i<=year; i++)
    {
        amount += balance * (interest/100);
    }
    balance += amount;
    return balance;
}

double savingsAccount::withdraw(double amount)
{
    double money = bankAccount::withdraw(amount);
    return money;
}

void savingsAccount::printAccountInfo()
{
    cout<<"\nSavings Account"<<"\n-------------------";
    bankAccount::printAccountInfo();
    cout<<"\nInterest Rate: "<<interest<<"%";
}

savingsAccount::~savingsAccount()
{
}
