#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int isPrime(int);
int greatestPrimeFactor(int);

int main()
{
    int var = 0;
    cin>>var;
    cout<<greatestPrimeFactor(var);
}

int isPrime(int n)
{
    int temp = sqrt(n)+1;

    if(n==1&&n==2)
        return 1;

    for(int i=2; i<temp; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}

int greatestPrimeFactor(int n)
{
    vector<int> f;
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i) && n%i==0)
        {
            f.push_back(i);
            while(n%i==0)
                n/=i;
        }
    }
    return f.back();
}
