#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include "bankAccount.h"

class checkingAccount: public bankAccount
{
    private:
        double interest;
        double minBalance;
        double serviceCharge;

    public:
        checkingAccount(int,double);
        checkingAccount(int,double,double,double);
        void setInterestRate(double);
        double getInterestRate();

        void setMinimumBalance(double);
        double getMinimumBalance();

        void setServiceCharge(double);
        double getServiceCharge();

        double postInterest();
        bool checkBalance();
        void printCheck();
        double withdraw(double);
        void printAccountInfo();
        ~checkingAccount();
};

#endif // CHECKINGACCOUNT_H_INCLUDED
