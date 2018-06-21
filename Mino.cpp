#include "Mino.h"

Mino::Mino(int mri):max_ri(mri) {rotate_index = 0;}
Mino& Mino::turn(){
    rotate_index=(rotate_index>=max_ri)?0:rotate_index+1;
    return *this;
}