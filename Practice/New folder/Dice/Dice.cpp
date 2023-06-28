#include "Dice.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

Dice::Dice()
{
	srand(time(NULL));
    numSides = 6;
}

Dice::Dice(int x)
{
	srand(time(NULL));
    numSides = x;
}

void Dice::setDiceSides(int x)
{
    numSides = x;
}

int Dice::rollDice() const
{
    return rand() % (numSides);
}

Dice::~Dice()
{
}
