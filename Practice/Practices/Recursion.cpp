#include <iostream>
using namespace std;

//int add(int,int);
int fib(int, int);
void printFib(int,int);

int main()
{
    //int x = 1;
    //int y = 5;
    //cout<<add(x,y);
    int i = 1;
    int x = 20;
    cout<<fib(i,x)<<",";
}
/*
int add(int x, int y)
{
    if(y==x)
    {
        return 1;
    }
    else
    {
        return y + add(x,y-1);
    }
}
*/

int fib(int i, int x)
{
    int n1 = 0;
    int n2 = 1;
    int fn = n1+n2;

    if(x==i)
    {
        return 0;
    }
    else
    {
        n2 = n1;
        n2 = fn;
        fn = n1+n2;
        x--;
        return (n2,fn);
    }
}

void printFib(int x, int y)
{
    if(x==y)
    {
        cout<<y;
    }
    else
    {
        cout<<printFib(x,fib(x,y))<<",";
    }
}
