#include "cylinderTank.h"
#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846
using namespace std;

cylinderTank::cylinderTank()
{

}

void cylinderTank::setHeight(double height)
{
    this->height = height;
}

void cylinderTank::setRadius(double radius)
{
    this->radius = radius;
}

void cylinderTank::setDrainRate(double aveDrainRate)
{
    this->aveDrainRate = aveDrainRate;
}

void cylinderTank::setFillRate(double aveFillRate)
{
    this->aveFillRate = aveFillRate;
}

double cylinderTank::getHeight()
{
    return this->height;
}

double cylinderTank::getRadius()
{
    return this->radius;
}

double cylinderTank::getDrainRate()
{
    return this->aveDrainRate;
}

double cylinderTank::getFillRate()
{
    return this->aveFillRate;
}

double cylinderTank::volume()
{
    double volume = (M_PI * (pow(this->radius,2))) * this->height;
    return volume;
}

void cylinderTank::timeToFillEmpty()
{
    double time = cylinderTank::volume() / (this->aveFillRate - this->aveDrainRate);
    int mins = time / 60;
    int hours = mins / 60;
    int sec = time;
    cout<<"Time to fill the tank completely: "<<hours<<":"<<mins%60<<":"<<sec%60<<"\n";
}

void cylinderTank::timeToFillPartial(double varTime)
{
    double time = (cylinderTank::volume()*(varTime/100)) / (this->aveFillRate-this->aveDrainRate);
    int mins = time / 60;
    int hours = mins / 60;
    int sec = time;
    cout<<"Time to fill the tank completely: "<<hours<<":"<<mins%60<<":"<<sec%60<<"\n";
}

cylinderTank::~cylinderTank()
{

}
