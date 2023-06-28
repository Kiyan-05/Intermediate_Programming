#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

class bankAccount
{
    protected:
        int accountNumber;
        double balance;

    public:
        bankAccount(int);               //acount#, default balance
        bankAccount(int, double);       //acount#,initial balance
        void setAccountNumber(int);     //change account number
        int getAccountNumber();         //retrieve
        double getBalance();            //retrieve
        void deposit(double);           //amount to deposit
        double withdraw(double);        //amount to withdraw and returns it
        void printAccountInfo();
        ~bankAccount();
};

#endif // BANKACCOUNT_H_INCLUDED
