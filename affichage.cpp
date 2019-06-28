#include <iostream>
#include <windows.h>
#include "affichage.h"
#include "initialisations.h"

void afficherGrille(Cellule uneGrille[X][Y]){
    for(unsigned int i=0; i<X; i++){
        for(unsigned int j=0; j<Y; j++){
            changerCouleur(uneGrille[i][j].saCouleur);
            std::cout << ' ';
        }
        std::cout << std::endl;
    }

    changerCouleur(NOIR);
}



void changerCouleur(Couleur uneCouleur){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, uneCouleur);
}
