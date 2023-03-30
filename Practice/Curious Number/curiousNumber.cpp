#include <iostream>
using namespace std;

void curiousNumber(int x, int y);
int numFactorial(int x);
bool isNumberCurious(int x,int y);

int main()
{
    curiousNumber(10,1000000);
}

int numFactorial(int x)
{
    int res = 1;
    for(int i=x; i>=1; i--)
        res *= i;
    return res;
}

bool isNumberCurious(int x, int y)
{
    if(x == y)
        return 1;
    return 0;
}

void curiousNumber(int x, int y)
{
    int digit, temp, factSum;
    for(int i=x; i<=y; i++)
    {
        factSum = 0;
        for(temp = i; temp>0; temp/=10)
        {
            digit = temp%10;
            factSum += numFactorial(digit);
        }
        if(isNumberCurious(factSum,i))
        {
            cout<<i<<",";
        }
    }
}
