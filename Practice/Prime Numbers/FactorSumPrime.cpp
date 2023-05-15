#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int);
void start(void);
int step2(int);
int step3(int,int);

int main()
{
    start();
}

int isPrime(int n)
{
    if(n==1||n==2)
        return 1;

    int limit = sqrt(n)+1;
    for(int i=2; i<=limit; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void start()
{
    int primeFactors[4] = {15,19,20,11};

    for(int i=0; i<4; i++)
    {
        step2(primeFactors[i]);
    }
}

int step2(int n)
{
    int temp, temp2=n-1, res;
    for(int i=2; i<n; i++)
    {
        if(isPrime(i))
        {
            step3(n,i);
        }

    }
}

int step3(int n, int a)
{
    for(int i=n; i<n/2; i--)
    {
        if(isPrime(i))
        {
            int res = a+i;
            if(res==n)
            {

            }
        }
    }
}

