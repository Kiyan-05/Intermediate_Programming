#include <iostream>
#include "Dice.h"
#include "RiggedDice.h"
#include "TwoDice.h"
using namespace std;

int main()
{
    cout<<"Test";
    TwoDice TD(6,15);
    TD.suffle();

    cout<<"Dice 1 Results:"<<endl;
    for (int i=0;i<TD.getSuffleSize();i++)
    {
     cout<<TD.dice1SuffleAt(i)<<",";
    }
    cout<<endl;

    cout<<"Dice 2 Results:"<<endl;
    for (int i=0;i<TD.getSuffleSize();i++)
    {
     cout<<TD.dice2SuffleAt(i)<<",";
    }
}
