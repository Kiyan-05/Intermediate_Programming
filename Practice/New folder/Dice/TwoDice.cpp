#include "TwoDice.h"
#include <iostream>

TwoDice::TwoDice()
{
    d1 = Dice();
    d2 = RiggedDice();
    suffleSize = 10;
    dice1Suffle = new int[suffleSize];
    dice2Suffle = new int[suffleSize];
}

TwoDice::TwoDice(int sides, int suf)
{
    d1 = Dice(sides);
    d2 = RiggedDice(sides);
    suffleSize = suf;
    dice1Suffle = new int[suffleSize];
    dice2Suffle = new int[suffleSize];
}

TwoDice::~TwoDice()
{
    delete [] dice1Suffle;
    delete [] dice2Suffle;
}

void TwoDice::suffle()
{
    for(int i=0; i<suffleSize; i++)
    {
        dice1Suffle[i] = d1.rollDice();
        dice2Suffle[i] = d2.rollDice();
    }
}

int TwoDice::dice1SuffleAt(int x)
{
    return dice1Suffle[x];
}

int TwoDice::dice2SuffleAt(int x)
{
    return dice2Suffle[x];
}

int TwoDice::getSuffleSize()
{
    return suffleSize;
}
