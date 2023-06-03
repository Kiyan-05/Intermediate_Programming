#include "line.h"
#include <iostream>
#include <cmath>
using namespace std;

    line::line()
    {
        startPt.setX(0);
        startPt.setY(0);
        endPt.setX(0);
        endPt.setY(0);
    }
    void line::setStartPt(double x,double y)
    {
        startPt.setX(x);
        startPt.setY(y);
    }

    void line::setEndPt(double x,double y)
    {
        endPt.setX(x);
        endPt.setY(y);
    }

    point line::getStartPt()
    {
        return startPt;
    }

    point line::getEndPt()
    {
        return endPt;
    }

    double line::distance()
    {
        double x1 = startPt.getX();
        double y1 = startPt.getY();
        double x2 = endPt.getX();
        double y2 = endPt.getY();
        return sqrt(pow((x2-x1),2)+(pow((y2-y1),2)));
    }

    double line::angle()
    {
        double x1 = startPt.getX();
        double y1 = startPt.getY();
        double x2 = endPt.getX();
        double y2 = endPt.getY();
        return atan((y2-y1)/(x2-x1))*57.2958;
    }

    line::~line()
    {

    }

