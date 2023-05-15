#include <iostream>

bool isWellOrdered(int);

int main()
{
    int n = 145;
    std::cout<<isWellOrdered(n);
}

bool isWellOrdered(int n)
{
    int temp = n/10;
    while(n>0)
    {
        if(temp%10<=n%10)
        {
            temp /= 10;
            n /= 10;
        }
        return false;
    }
    return true;
}
