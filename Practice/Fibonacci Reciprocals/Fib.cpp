#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printFibonacci(int n);
int fib(int n);

int main()
{
  printFibonacci(5);
}

void printFibonacci(int n)
{
  cout<<"The "<<n<<"th fibonacci number is: "<<fib(n);
}

int fib(int n)
{
    if(n==1)

      return 0;

   else
       if(n == 2)

           return 1;
   else

       return fib(n-1) + fib(n-2);
}
