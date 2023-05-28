#include "cylinderTank.h"
#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846
using namespace std;

cylinderTank::cylinderTank()
{

}

cylinderTank::~cylinderTank()
{

}

void cylinderTank::setHeight(double varHeight)
{
    height = varHeight;
}

void cylinderTank::setRadius(double varRadius)
{
    radius = varRadius;
}

void cylinderTank::setDrainRate(double varAveDrainRate)
{
    aveDrainRate = varAveDrainRate;
}

void cylinderTank::setFillRate(double varAveFillRate)
{
    aveFillRate = varAveFillRate;
}

double cylinderTank::getHeight()
{
    return height;
}

double cylinderTank::getRadius()
{
    return radius;
}

double cylinderTank::getDrainRate()
{
    return aveDrainRate;
}

double cylinderTank::getFillRate()
{
    return aveFillRate;
}

double cylinderTank::volume()
{
    double volume = (M_PI * (pow(radius,2))) * height;
    return volume;
}

void cylinderTank::timeToFillEmpty()
{
    double time = cylinderTank::volume() / aveFillRate;
    cout<<"Time to fill the tank completely: "<<time << " seconds.\n";
}

void cylinderTank::timeToFillPartial(double varTime)
{
    double time = (cylinderTank::volume()*varTime) / aveFillRate;
    cout<<"Time to fill the tank to "<<varTime<<"% is approximately "<<time << " seconds.\n";
}

void cylinderTank::timeToDrainEmpty()
{
    double time = cylinderTank::volume()/ aveDrainRate;
    cout<<"Time to drain the tank completely: "<<time << " seconds.\n";
}

void cylinderTank::timeToDrainPartial(double varTime)
{
    double time = (cylinderTank::volume() * varTime) / aveDrainRate;
    cout<<"Time to drain the tank to "<<varTime<<"% is approximately "<<time << " seconds.\n";
}
