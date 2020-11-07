#include <iostream>
#include "display.h"
#include "initialisations.h"
#include "verifications.h"
#include "transformations.h"

/** GAME RULES
 * If a cell has exactly 3 living neighbors, it becomes alive.
 * If a cell has exactly 2 living neighbors, it stays in its current state.
 * If a cell has less than 2 or greater than 3 neighbors, it dies.
 */

int main () {

    Cell grid[X][Y];
    init(grid);
    display(grid);

    while (1) {
        system("clear");
        transform(grid);
        display(grid);
    }

    return 0;
}
