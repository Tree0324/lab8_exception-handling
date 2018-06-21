#ifndef MINO_I_H
#define MINO_I_H
#include <iostream>
#include "Mino.h"
using namespace std;

class MinoI: public Mino{
    public:
        MinoI();
        virtual void paint();
};
#endif