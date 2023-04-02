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
    if(x==1)
    {
        return 1;
    }
    int n1 = 0;
    int n2 = 1;
    int fn = n1+n2;
    while(fn<=x)
    {
        if(fn==x)
        {
            return 1;
        }
        n1 = n2;
        n2 = fn;
        fn = n1+n2;
    }
    return 0;
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
