#ifndef TP7_GRAPHIC_MODULE_H
#define TP7_GRAPHIC_MODULE_H

#include "sudoku.h"

void draw_board(Board *board, MLV_Color general_color, MLV_Color region_color, char *font, int size);

void draw_cell(int x, int y, int size_cell, int number, Cell_State cell_state, char *font, int size);

void redraw_cell(Cell *cell, Cell_State new_state, char *font_name, int size);

void erase_board(Board board);

#endif /*TP7_GRAPHIC_MODULE_H*/
