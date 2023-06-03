#include "point3D.h"
#include <iostream>
using namespace std;

point3D::point3D()
{
    z=0;
}
void point3D::setZ(double varZ)
{
    z=varZ;
}

double point3D::getZ()
{
    return z;
}

void point3D::print()
{
    point::print();
    cout<<" z:"<<z;
}
point3D::~point3D()
{
}

point3D::point3D(double varX,double varZ)
    :point(varX)
{
    z = varZ;
}

