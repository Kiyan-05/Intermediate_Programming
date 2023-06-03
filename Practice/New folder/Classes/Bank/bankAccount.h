#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

class bankAccount
{
    protected:
        int accountNumber;
        double balance;

    public:
        bankAccount(int);
        bankAccount(int, double);
        void setAccountNumber(int);
        int getAccountNumber();
        double getBalance();
        void deposit(double);
        double withdraw(double);
        void printAccountInfo();
        ~bankAccount();
};

#endif // BANKACCOUNT_H_INCLUDED
