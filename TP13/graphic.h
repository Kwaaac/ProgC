#ifndef TP13_GRAPHIC_H
#define TP13_GRAPHIC_H

#include <MLV/MLV_all.h>

void draw_board(unsigned long int n, int queens[], int queen_size, int cell_size);

int from_coordinates_to_cell_index(int *x, int *y);

#endif /*TP13_GRAPHIC_H*/
