#include <iostream>
#include "cylinderTank.h"

using namespace std;

int main()
{
    // Set the tank properties
    cylinderTank tank;
    tank.setHeight(12.4);
    tank.setRadius(6.7);
    tank.setFillRate(2.5);
    tank.setDrainRate(1.8);

    cout<<"Cylinder Tank Height: "<<tank.getHeight()<< " -- Radius: "<<tank.getRadius();
    double volume = tank.volume();
    cout<< "\n\nCylinder Tank Volume: " << volume << "cubic meters\n";

    tank.timeToFillEmpty();

    double fillPercentage = 60.0;
    tank.timeToFillPartial(fillPercentage);

    tank.timeToDrainEmpty();
    double drainPercentage = 40.0;
    tank.timeToDrainPartial(drainPercentage);
}
