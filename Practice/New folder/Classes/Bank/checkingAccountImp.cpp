#include <iostream>
#include "checkingAccount.h"

using namespace std;

checkingAccount::checkingAccount(int account, double varMinBalance):bankAccount::bankAccount(account)
{
    interest = 0.0;
    minBalance = varMinBalance;
    serviceCharge = 0.0;
}

checkingAccount::checkingAccount(int account, double balance, double varInterest, double varMinBalance):bankAccount::bankAccount(account,balance)
{
    interest = varInterest;
    minBalance = varMinBalance;
}

void checkingAccount::setInterestRate(double varInterest)
{
    interest = varInterest;
}

double checkingAccount::getInterestRate()
{
    return interest;
}

void checkingAccount::setMinimumBalance(double varMinBalance)
{
    minBalance = varMinBalance;
}

double checkingAccount::getMinimumBalance()
{
    return minBalance;
}

void checkingAccount::setServiceCharge(double varServiceCharge)
{
    serviceCharge = varServiceCharge;
}

double checkingAccount::getServiceCharge()
{
    return serviceCharge;
}

double checkingAccount::postInterest()
{
    return balance * (interest/100);
}

bool checkingAccount::checkBalance()
{
    if(balance>minBalance)
        return 1;
    return 0;
}

void checkingAccount::printCheck()
{
    cout<<"\nAccount: "<<accountNumber;
    cout<<"\nBalance: "<<balance<<" --- Minimum balance: "<<minBalance;
    cout<<"\Interest Rate: "<<interest<<" --- Post interest: "<<checkingAccount::postInterest();
}

double checkingAccount::withdraw(double amount)
{
    double money = 0;
    if(amount < balance)
    {
        money = bankAccount::withdraw(amount);
        if(balance < minBalance) //if the balance is lower than the minimum balance setted
        {
            serviceCharge = 200.00;
            balance -= serviceCharge;
            cout<<"\nYou are charged "<<serviceCharge<<" to your balance.";
            cout<<"\nIf you don't maintain the minimum balance required: "<<minBalance<<" then you'll be charged monthly.";
        }
    }
    return money;
}

void checkingAccount::printAccountInfo()
{
    cout<<"Checkings Account"<<"\n------------------------";
    bankAccount::printAccountInfo();
    cout<<"\n-----------------------";
    cout<<"\nInterest Rate: "<<interest;
    cout<<"\nMinimum Balance: "<<minBalance;
    cout<<"\nService Charge: "<<serviceCharge;
}

checkingAccount::~checkingAccount()
{
}
