#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
using namespace std;

Mino* bad_mino_ptr[10000];
int j = 0;

void new_hand()
{
    cout << "new_hand(): delete mino_ptr["<< j << ", " << j+1 << "]" << endl;
    delete [] bad_mino_ptr[j++];
    delete [] bad_mino_ptr[j++];
}

int main(){
    set_new_handler(new_hand);
    Mino * mino_ptr;
    srandom(time(NULL));
    for(int i=0;i<10;++i)
    {
        mino_ptr = genMino();
        mino_ptr->paint();
        cout << endl;
        int a = rand()%2;
        if (a)
            mino_ptr -> turn();
        delete mino_ptr;
    }

        //bad mino ptr
    for(int i = 0; i< 10000; i++)
    {
        cout << "for loop: new mino_ptr[" << i << "]" << endl;
        bad_mino_ptr[i] = genMino();
    }

    return 0;
}