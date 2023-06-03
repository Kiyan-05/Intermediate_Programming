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

void checkingAccount::postInterest()
{

}

bool checkingAccount::checkBalance()
{
    if(balance>minBalance)
        return 1;
    return 0;
}

void checkingAccount::printCheck()
{

}

double checkingAccount::withdraw(double amount)
{
    double money = 0;
    if(amount<balance)
    {
        money = bankAccount::withdraw(amount);
    }
    return money;
}

void checkingAccount::printAccountInfo()
{
    cout<<"Checkings Account"<<"\n------------------------";
    bankAccount::printAccountInfo();
    cout<<"\n-----------------------";
    cout<<"Interest Rate: "<<interest;
    cout<<"Minimum Balance: "<<minBalance;
    cout<<"Service Charge: "<<serviceCharge;
}

checkingAccount::~checkingAccount()
{
}
