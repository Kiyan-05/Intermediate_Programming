#include <iostream>
using namespace std;

int squareOfInt(int);
int cubeOfInt(int&);
int productXY(const int&, const int&);
double defParamExp(int a, double b, int c=1, double d=3.5);

int main()
{
    //passing by value
    //int y = 5;
    //squareOfInt(y);
    //cout<<y<<endl;

    //passing by reference
    //int a = 3;
    //cubeOfInt(a);
    //cout<<a<<endl;

    //int x=10;
    //int c=5;
    //cout<<productXY(x,c);
    int x=3;
    double z=1.5;
    cout<<defParamExp(1,2.5)<<endl;
    cout<<defParamExp(x,z,7)<<endl;
    cout<<defParamExp(x,1.1,7,z)<<endl;
}

double defParamExp(int a, double b, int c, double d)
{
    return (a+c)*(b-d);
}

int squareOfInt(int y)
{
    y = y*y;
    return y;
}

int cubeOfInt(int &b)
{
    b = b*b*b;
    return b;
}

int productXY(const int &x, const int &y)
{
    //read only variable
    int z = x*y;
    return z;
}
