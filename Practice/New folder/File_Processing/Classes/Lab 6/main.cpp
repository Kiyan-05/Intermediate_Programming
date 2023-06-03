#include <iostream>
#include "cylinderTank.h"
#include <vector>
using namespace std;
void printCylinderTank(cylinderTank tank);
void printFillRate(cylinderTank tank);

int main()
{
    // Set the tank properties
    vector<cylinderTank> tanks;
    cylinderTank tank;
    tank.setHeight(22.4);
    tank.setRadius(10.7);
    tank.setFillRate(2.5);
    tank.setDrainRate(1.8);

    cylinderTank tank2;
    tank2.setHeight(18.4);
    tank2.setRadius(3.2);
    tank2.setFillRate(1.5);
    tank2.
    setDrainRate(2.8);

    tanks.push_back(tank);
    tanks.push_back(tank2);
    printCylinderTank(tank);
    cout<<"\n";
    printCylinderTank(tank2);

}

void printCylinderTank(cylinderTank tank)
{
    cout<<"Cylinder Tank Height: "<<tank.getHeight()<< " -- Radius: "<<tank.getRadius();
    cout<<"\nAverage to fill the tank at the same time (liters/sec) - "<<tank.getFillRate()<<"\n";
    cout<<"Average to drain the tank at the same time (liters/sec) - "<<tank.getDrainRate()<<"\n";
    double volume = tank.volume();
    cout<< "Cylinder Tank Volume: " << volume << "cubic meters\n";
    printFillRate(tank);
}

void printFillRate(cylinderTank tank)
{
    if(tank.getFillRate()>tank.getDrainRate())
    {
        tank.timeToFillEmpty();
        double fillPercentage = 60.0;
        tank.timeToFillPartial(fillPercentage);
    }
    else
    {
        cout<<"Since the Fill Rate is lower than the Drain Rate, it'll infinetly try to fill the tank.\n";
    }
}
