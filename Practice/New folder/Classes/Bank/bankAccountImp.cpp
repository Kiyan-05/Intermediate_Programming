#include <iostream>
#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount(int account)
{
    accountNumber = account;
    balance  = 0;
}

bankAccount::bankAccount(int account, double varBalance)
{
    accountNumber = account;
    balance = varBalance;
}

void bankAccount::setAccountNumber(int account)
{
    accountNumber = account;
}

int bankAccount::getAccountNumber()
{
    return accountNumber;
}

double bankAccount::getBalance()
{
    return balance;
}

void bankAccount::deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;
        cout<<"\nYou successfully deposited: "<<amount;
        cout<<"\nYour updated balance: "<<balance;
    }
    else
    {
        cout<<"\nInvalid amount";
    }
}

double bankAccount::withdraw(double amount)
{
    if(amount > 0 && amount < balance)
    {
        balance -= amount;
        return amount;
    }
    return 0;
}

void bankAccount::printAccountInfo()
{
    cout<<"\nAccount Info"<<"\n--------------------------";
    cout<<"\nAccount Number: "<<accountNumber;
    cout<<"\nBalance: "<<balance;
}

bankAccount::~bankAccount()
{
}
