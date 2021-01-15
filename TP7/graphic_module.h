#ifndef TP7_GRAPHIC_MODULE_H
#define TP7_GRAPHIC_MODULE_H

#include "sudoku.h"

/**
 * Draw every aspect of the board and actualise the windows
 *
 * @param board sudoku board
 * @param general_color Color of the lines
 * @param region_color Color of the region lines
 * @param font_name font to be used
 * @param size size of the text
 */
void draw_board(Board *board, MLV_Color general_color, MLV_Color region_color, char *font, int size);

/**
 *  Draw a cell depending of it's coordinates, size, state and font
 *
 * @param Cell cell to be drawed
 * @param font_name Name of the font
 * @param size Size of the drawed number
 */
void draw_cell(Cell *cell, char *font, int size);

/**
 * Change the state of a cell, draw it and actualise the window
 *
 * @param cell Cell to be drawed
 * @param new_state New state of the cell
 * @param font_name Font of the number
 * @param size Size of the number
 */
void redraw_cell(Cell *cell, Cell_State new_state, char *font_name, int size);

/**
 * Erase a sudoku board
 *
 * @param board
 */
void erase_board(Board board);

#endif /*TP7_GRAPHIC_MODULE_H*/
