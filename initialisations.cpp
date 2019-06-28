#include <iostream>
#include <time.h>
#include "initialisations.h"

void initialiser(Cellule uneGrille[X][Y]){
    srand(time(NULL));
    for(unsigned int i=0; i<X; i++){
        for(unsigned int j=0; j<Y; j++){
            uneGrille[i][j].saCouleur = NOIR;
            uneGrille[i][j].estVivante = 0;
        }
    }

    for(unsigned int i=1; i<X-1; i++){
        for(unsigned int j=1; j<Y-1; j++){
            uneGrille[i][j].estVivante = rand()%2;
            if(uneGrille[i][j].estVivante){
                uneGrille[i][j].saCouleur = BLANC;
            }
        }
    }
}
