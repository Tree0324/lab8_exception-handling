#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 4
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_T 3

Mino * genMino(){
    int mino_type;
    Mino * ptr;
    mino_type = random() % NUM_MINO;
    switch(mino_type) {
        case MINO_S:
            ptr = new MinoS;
            break;
        case MINO_I:
            ptr = new MinoI;
            break;
        case MINO_L:
            ptr = new MinoL;
            break;
        case MINO_T:
            ptr = new MinoT;
            break;
    }
    return ptr;
}