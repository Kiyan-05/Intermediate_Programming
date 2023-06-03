#include <iostream>
#include "point.h"

using namespace std;

point::point()
{
    this->x = 0;
    this->y = 0;
}

point::point(double x)
{
    this->x = x;
    this->y = 0;
}
void point::setX(double x)
{
    this->x = x;
}

void point::setY(double y)
{
    this->y = y;
}

double point::getX()
{
    return this->x;
}

double point::getY()
{
    return this->y;
}

void point::print()
{
    cout<<"x: "<<this->x<<" y: "<<this->y;
}

point::~point()
{

}
