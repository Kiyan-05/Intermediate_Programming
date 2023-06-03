#include "point.h"
#ifndef POINT3D_H_INCLUDED
#define POINT3D_H_INCLUDED

class point3D: public point
{
private:
    double z;

public:
    point3D();
    void setZ(double);
    double getZ();
    point3D(double,double);
    void print();
    ~point3D();
};
#endif // POINT3D_H_INCLUDED
