#include "point.h"
#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

class line
{
private:
    point startPt;
    point endPt;

public:
    line();
    void setStartPt(double,double);
    void setEndPt(double,double);
    point getStartPt();
    point getEndPt();
    double distance();
    double angle();
    ~line();
};

#endif // LINE_H_INCLUDED
