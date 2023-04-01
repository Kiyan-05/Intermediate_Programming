#include <iostream>
using namespace std;

void collatz(int,int);
bool isEven(int);

int main()
{
    collatz(10,1000);
}

bool isEven(int x)
{
    if(x%2==0)
        return 1;
    return 0;
}

void collatz(int x, int y)
{
    int sum=0;

    while(x<y && x!=1)
    {
        if(isEven(x))
        {
            x/=2;
        }
        else
        {
            x = (3*x)+1;
        }
        sum += x;
    }
    cout<<sum<<"\n";
}


