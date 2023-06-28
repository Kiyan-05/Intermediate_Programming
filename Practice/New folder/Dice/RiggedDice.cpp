#include "RiggedDice.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

RiggedDice::RiggedDice():Dice(){}

RiggedDice::RiggedDice(int x):Dice(x){}

int RiggedDice::rollDice() const
{
	srand(time(NULL));
    return rand() % (numSides/25);
}

RiggedDice::~RiggedDice()
{
}
