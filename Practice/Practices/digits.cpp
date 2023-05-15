#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int);
bool has_unique_digits(int);
int count_prime_number_with_unique_digits(int,int);
int smallest_prime_with_unique_digits(int);

int main()
{
    //int a = 100;
    //int b = 200;
    //cout<<count_prime_number_with_unique_digits(a,b);

    cout<<smallest_prime_with_unique_digits(15);
}

bool has_unique_digits(int n)
{
    vector<bool> digits(10,false);
    while(n>0)
    {
        int digit = n%10;
        if(digits[digit])
        {
            return false;
        }
        digits[digit] = true;
        n/=10;
    }
    return true;
}

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int count_prime_number_with_unique_digits(int a, int b)
{
    int cnt = 0;
    for(int n=a; n<=b; n++)
    {
        if(isPrime(n)&& has_unique_digits(n))
            cnt++;
    }
    return cnt;
}

int smallest_prime_with_unique_digits(int n)
{
    for(int p=n; ;p++)
    {
        if(isPrime(p)&&has_unique_digits(p))
            return p;
    }
    return 0;
}
