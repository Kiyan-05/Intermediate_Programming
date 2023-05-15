#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int);

int main()
{
    int n = 10;
    cout<<isPrime(n);
}

bool isPrime(int n)
{
    if(n==1&&n==2)
        return true;
    int temp = sqrt(n)+1;
    for(int i=2; i<=temp; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
