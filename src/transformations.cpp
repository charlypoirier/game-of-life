#include <iostream>
#include "verifications.h"
#include "initialisations.h"

void transform(Cell grid[X][Y]){

    // Neighbors -> Next state
    for(int i=1; i<X-1; i++){
        for(int j=1; j<Y-1; j++){
            if (neighbors(grid, i, j) == 3) {
                grid[i][j].nextState = true;
            } else if (neighbors(grid, i, j) == 2) {
                grid[i][j].nextState = grid[i][j].isAlive;
            } else {
                grid[i][j].nextState = false;
            }

        }
    }

    // Next state -> Current state
    for(unsigned int i=1; i<X-1; i++){
        for(unsigned int j=1; j<Y-1; j++){
            grid[i][j].isAlive = grid[i][j].nextState;
        }
    }
}
