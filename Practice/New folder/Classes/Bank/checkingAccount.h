#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include "bankAccount.h"

class checkingAccount: public bankAccount           //inherits bankAccount
{
    private:
        double interest;
        double initBalance;                         //initial balance that was borrowed from the bank
        double minBalance;
        double serviceCharge;

    public:
        checkingAccount(int,double);                //acount#,minimum balance
        checkingAccount(int,double,double,double);  //account#,init balance, interest, minimum balance
        void setInterestRate(double);
        double getInterestRate();

        void setMinimumBalance(double);
        double getMinimumBalance();
        double getInitBalance();

        void chargeServiceFee(int);             //this method is used whenever months has passed by and the user hasn't filled up the minimum balance yet
        void setServiceCharge(double);         //may vary according to the number of months passed
        double getServiceCharge();

        void postInterest(int);                   //year
        bool checkBalance();
        void printCheck(double);
        double withdraw(double);
        void printAccountInfo();
        ~checkingAccount();
};

#endif // CHECKINGACCOUNT_H_INCLUDED
