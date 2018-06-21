#ifndef MINO_T_H
#define MINO_T_H
#include <iostream>
#include "Mino.h"
using namespace std;

class MinoT: public Mino{
    public:
        MinoT();
        virtual void paint();
};
#endif

