#include <iostream>
#include <time.h>
#include "initialisations.h"

void init(Cell grid[X][Y]){
    srand(time(NULL));
    for(unsigned int i=0; i<X; i++){
        for(unsigned int j=0; j<Y; j++){
            grid[i][j].isAlive = 0;
        }
    }

    for(unsigned int i=1; i<X-1; i++){
        for(unsigned int j=1; j<Y-1; j++){
            grid[i][j].isAlive = rand()%2;
        }
    }
}
