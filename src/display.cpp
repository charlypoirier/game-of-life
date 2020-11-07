#include <iostream>
#include "display.h"
#include "initialisations.h"

void display(Cell grid[X][Y]){
    for(unsigned int i=0; i<X; i++){
        for(unsigned int j=0; j<Y; j++){
            if (grid[i][j].isAlive) {
                std::cout << "\033[1;47m \033[0m"; // White background
            } else {
                std::cout << "\033[1;40m \033[0m"; // Black background
            }
        }
        std::cout << std::endl;
    }
}
