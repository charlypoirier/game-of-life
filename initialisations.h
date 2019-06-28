#ifndef INITIALISATIONS_H
#define INITIALISATIONS_H

const int X = 30;     // Max: 50
const int Y = 40;  // Max: 195

enum Couleur{
    NOIR = 15,
    BLANC = 240
};

struct Cellule{
    bool estVivante;
    bool prochainEtat;
    Couleur saCouleur;
};

void initialiser(Cellule uneGrille[X][Y]);

#endif // INITIALISATIONS_H
