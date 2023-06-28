#include "twoDice.h"

TwoDice::TwoDice()
{
    d1.setDiceSides(6);
    d2.setDiceSides(6);
    suffleSize = 10;
    dice1Suffle = new int(suffleSize);
    dice2Suffle = new int(suffleSize);
}

TwoDice::TwoDice(int sides, int suf)
{
    d1.setDiceSides(sides);
    d2.setDiceSides(sides);
    suffleSize = suf;
    dice1Suffle = new int(suffleSize);
    dice2Suffle = new int(suffleSize);
}

TwoDice::~TwoDice()
{
    delete [] dice1Suffle;
    delete [] dice2Suffle;
}

void TwoDice::suffle()
{
    for(int i=0; i<6; i++)
    {
        int tempd1 = d1.rollDice();
        int tempd2 = d2.rollDice();
        dice1Suffle[i] = tempd1;
        dice2Suffle[i] = tempd2;
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
