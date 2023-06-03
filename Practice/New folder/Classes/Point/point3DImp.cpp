#include <iostream>
#include "point3D.h"
using namespace std;

point3D::point3D()
{

    this->z = 0;
}

point3D::point3D(double x, double z)
{
    this->z = z;
}

void point3D::setZ(double z)
{
    this->z = z;
}

double point3D::getZ()
{
    return this->z;
}

void point3D::print()
{
    point::print();
    cout<<" z: "<<this->z;
}

point3D::~point3D()
{

}
