#include "dice.h"
#ifndef RIGGEDDICE_H_INCLUDED
#define RIGGEDDICE_H_INCLUDED

class RiggedDice: public Dice
{
    public:
        RiggedDice();
        RiggedDice(int);
        int rollDice()const;
        ~RiggedDice();
};

#endif // RIGGEDDICE_H_INCLUDED
