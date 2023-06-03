#include "point.h"
#include <iostream>
using namespace std;

void point::setX(double varX)
{
    x = varX;
}
void point::setY(double varY)
{
    y = varY;
}
double point::getX()
{
    return x;
}
double point::getY()
{
    return y;
}
point::point()
{
    x=0;
    y=0;
}
point::point(double varX)
{
    x = varX;
    y=0;
}
void point::print()
{
    cout<<"x:"<<x<<" y:"<<y;
}
point::~point()
{
}
