#include <iostream>
#include "checkingAccount.h"
#include "savingsAccount.h"
using namespace std;

int main()
{
    //For the checkingsAccount
    checkingAccount acc1(1024567,15000,2.0,2500);
    cout<<"Before any transaction\n";
        acc1.printAccountInfo();
    cout<<"\n\nThe user wants a 2500 check from his account";
        acc1.printCheck(2500);
    acc1.setServiceCharge(2.5);
    cout<<"\n\nThe user wants to deposit exceeding his minimum balance.\n";
        acc1.withdraw(11000);
        acc1.printAccountInfo();
    cout<<"\n\nThe user deposited 5000\n";
        acc1.deposit(5000);
    cout<<"\n\nAssuming the time has exceed 4 years.\n";
        acc1.postInterest(4);
        acc1.printAccountInfo();

    //For the Savings Account
    savingsAccount acc2(1035678,25000);
    cout<<"\n\nBefore any transaction.\n";
        acc2.setInterestRate(3.3);
        acc2.printAccountInfo();
    cout<<"\n\nThe user deposited 2500\n";
        acc2.deposit(2500);
    cout<<"\n\nAssuming the time has exceed to 5 years";
        acc2.postInterest(5);
        acc2.printAccountInfo();
}
