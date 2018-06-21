#ifndef MINO_L_H
#define MINO_L_H
#include <iostream>
#include "Mino.h"
using namespace std;

class MinoL: public Mino{
    public:
        MinoL();
        virtual void paint();
};
#endif