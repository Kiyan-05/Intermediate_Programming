#include "point.h"
#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
class line
{
public:
    void setStartPt(double,double);
    void setEndPt(double,double);
    point getStartPt();
    point getEndPt();
    double distance();
    double angle();
    line();
    ~line();
private:
    point startPt;
    point endPt;
};
#endif // LINE_H_INCLUDED
