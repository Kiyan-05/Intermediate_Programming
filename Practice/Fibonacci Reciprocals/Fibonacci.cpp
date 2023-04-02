#include <iostream>
using namespace std;

bool isFib(int x);
void dispFibsInRange(int s=0, int e=10);
void dispFibsReciprocalInRange(int s=0, int e=10);
double FibsReciprocalSumInRange(int s, int e);

int main()
{
    dispFibsInRange();
    dispFibsReciprocalInRange();
    cout<<"\nReciprocal sum: "<<FibsReciprocalSumInRange(0,10);
}

bool isFib(int x)
{
    bool res=0;
    int n1 = 0;
    int n2 = 1;

    if(n2==x)
    {
        res = 1;
    }
    int temp = n1+n2;
    while(temp<=x)
    {
        if(temp==x)
        {
            res = 1;
        }
        n1=n2;
        n2=temp;
        temp=n1+n2;
    }
    return res;
}

void dispFibsInRange(int s, int e)
{
    cout<<"Fibonacci Sequence: ";
    while(s<=e)
    {
        if(isFib(s)==1)
        {
            cout<<s<<", ";
        }
        s++;
    }
}

void dispFibsReciprocalInRange(int s, int e)
{
    cout<<"\nReciprocal: ";
    while(s<=e)
    {
        if(isFib(s)==1)
        {
            double num = s;
            double var = 1/num;
            cout<<var<<", ";
        }
        s++;
    }
}

double FibsReciprocalSumInRange(int s, int e)
{
    float sum = 0;
    while(s<=e)
    {
        if(isFib(s)==1)
        {
            double num = s;
            double var = 1/num;
            sum += var;
        }
        s++;
    }
    return sum;
}
