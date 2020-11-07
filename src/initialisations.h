#ifndef INITIALISATIONS_H
#define INITIALISATIONS_H

const int X = 40;
const int Y = 90;

struct Cell{
    bool isAlive;
    bool nextState;
};

void init(Cell grid[X][Y]);

#endif // INITIALISATIONS_H
