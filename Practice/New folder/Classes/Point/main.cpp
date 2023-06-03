#include <iostream>
#include "point.h"
#include "point3D.h"
#include "line.h"
using namespace std;

int main()
{
    point p1;
     p1.setX(5);
     p1.setY(5);
     p1.setX(10);
    p1.print();


       point3D p2 ;
       p2.print();
       cout<<endl;
       p2.setX(3);
       p2.setY(5);
       p2.setZ(7);
       p2.print();
    cout<<endl;
    line l;
    l.setStartPt(1,2);
    l.setEndPt(13,8);
    cout<<l.distance()<<endl;
    cout<<l.angle();

}
