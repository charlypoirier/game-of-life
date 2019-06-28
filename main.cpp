#include <iostream>
#include "affichage.h"
#include "initialisations.h"
#include "verifications.h"
#include "transformations.h"

/** REGLES DU JEU :
 *
 * Si une cellule a exactement trois voisines vivantes, elle est vivante à l’étape suivante.
 * C’est le cas de la cellule verte dans la configuration de gauche.
 *
 * Si une cellule a exactement deux voisines vivantes, elle reste dans son état actuel à l’étape suivante.
 * Dans le cas de la configuration de gauche, la cellule située entre les deux cellules vivantes reste morte à l’étape suivante.
 *
 * Si une cellule a strictement moins de deux ou strictement plus de trois voisines vivantes, elle est morte à l’étape suivante.
 * C’est le cas de la cellule rouge dans la configuration de gauche.
 *
 */

int main()
{
    Cellule laGrille[X][Y];

    initialiser(laGrille);
    afficherGrille(laGrille);

    while(1){
        system("cls");
        transformer(laGrille);
        afficherGrille(laGrille);
    }

    return 0;
}
