#ifndef CYLINDERTANK_H_INCLUDED
#define CYLINDERTANK_H_INCLUDED

class cylinderTank
{
private:
    double height;
    double radius;
    double aveDrainRate;
    double aveFillRate;

public:
    cylinderTank();
    void setHeight(double);
    void setRadius(double);
    void setDrainRate(double);
    void setFillRate(double);
    double getHeight();
    double getRadius();
    double getDrainRate();
    double getFillRate();
    double volume();

    void timeToFillEmpty();
    void timeToFillPartial(double);

    ~cylinderTank();
};

#endif // CYLINDERTANK_H_INCLUDED
