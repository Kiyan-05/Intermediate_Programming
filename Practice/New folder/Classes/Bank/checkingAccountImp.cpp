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
    serviceCharge = 0;
    initBalance = balance;
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

void checkingAccount::setServiceCharge(double varServiceChargePercentage)
{
    serviceCharge = balance * (varServiceChargePercentage/100);
}

void checkingAccount::chargeServiceFee(int months)
{
    for(int i=0; i<= months; i++)
    {
        balance -= serviceCharge;
    }
}

double checkingAccount::getServiceCharge()
{
    return serviceCharge;
}

double checkingAccount::getInitBalance()
{
    return initBalance;
}

void checkingAccount::postInterest(int year)
{
    double amount = 0;
    for(int i=0; i<=year; i++)
    {
        amount = initBalance * (interest/100);
        balance -= amount;
    }
}

bool checkingAccount::checkBalance()
{
    if(balance<minBalance)
        return 1;
    return 0;
}

void checkingAccount::printCheck(double amount)
{
    cout<<"\n\nCheck"<<"\n---------------------";
    cout<<"\nAccount: "<<accountNumber;
    cout<<"\nBalance: "<<checkingAccount::withdraw(amount);
}

double checkingAccount::withdraw(double amount)
{
    double money = 0;
    if(amount < balance)
    {
        money = bankAccount::withdraw(amount);
        if(checkingAccount::checkBalance())    //if the balance is lower than the minimum balance setted
        {
            checkingAccount::chargeServiceFee(0);
            cout<<"\nYou are charged "<<serviceCharge<<" to your balance.";
            cout<<"\nIf you don't maintain the minimum balance required: "<<minBalance<<" then you'll be charged monthly.";
        }
    }
    return money;
}

void checkingAccount::printAccountInfo()
{
    cout<<"\nCheckings Account"<<"\n------------------------";
    bankAccount::printAccountInfo();
    cout<<"\n--------------------------";
    cout<<"\nInterest Rate: "<<interest<<"%";
    cout<<"\nMinimum Balance: "<<minBalance;
    if(!(checkingAccount::checkBalance()))
        serviceCharge = 0;
    cout<<"\nService Charge: "<<serviceCharge;
}

checkingAccount::~checkingAccount()
{
}
