#include "point.h"
#ifndef POINT3D_H_INCLUDED
#define POINT3D_H_INCLUDED

class point3D: public point
{
public:
    point3D();
    point3D(double varX,double varZ);
    void setZ(double);
    double getZ();
    void print();
    ~point3D();
private:
    double z;
};
#endif // POINT3D_H_INCLUDED
