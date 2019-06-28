#include <iostream>
#include "verifications.h"
#include "initialisations.h"

void transformer(Cellule uneGrille[X][Y]){

    // VOISINS -> PROCHAIN ETAT
    for(int i=1; i<X-1; i++){
        for(int j=1; j<Y-1; j++){


            if(nbVoisins(uneGrille, i, j) == 3)
            {
                uneGrille[i][j].prochainEtat = true;    // 3 VOISINS -> DEVIENT VIVANT
            }
            else if(nbVoisins(uneGrille, i, j) == 2)
            {
                uneGrille[i][j].prochainEtat = uneGrille[i][j].estVivante;  // 2 VOISINS -> RESTE PAREIL
            }
            else
            {
                uneGrille[i][j].prochainEtat = false;   // AUTRE -> DEVIENT MORTE
            }

        }
    }


    // PROCHAIN ETAT -> ETAT ACTUEL
    for(unsigned int i=1; i<X-1; i++){
        for(unsigned int j=1; j<Y-1; j++){
            uneGrille[i][j].estVivante = uneGrille[i][j].prochainEtat;
            uneGrille[i][j].saCouleur = (uneGrille[i][j].estVivante) ? BLANC : NOIR;
        }
    }
}
