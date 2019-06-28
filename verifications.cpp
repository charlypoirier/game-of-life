#include <iostream>
#include "initialisations.h"

int nbVoisins(Cellule uneGrille[X][Y], int x, int y){
    int leN = 0;

    for(int k = x-1; k <= x+1; k++){
        for(int l = y-1; l <= y+1; l++){
            if(!(k == x && l == y)){
                if(uneGrille[k][l].estVivante){
                    leN++;
                }
            }
        }
    }

    return leN;
}
