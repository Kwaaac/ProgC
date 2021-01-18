#ifndef TP7_MODEL_MODULE_H
#define TP7_MODEL_MODULE_H

#include <stdio.h>

typedef enum cell_state {
    NORMAL,
    BLOCKED,
    HOVERED,
    SELECTED
} Cell_State;

typedef struct cell {
    int x;
    int y;
    int size_cell;
    int number;
    Cell_State state;
} Cell;

typedef struct board {

    Cell cell_grid[9][9];

    int start_x;
    int start_y;
    int length;
    int cell_number;
    int size_cell;
} Board;

void complete_board(Board *board, int start_x, int start_y, int length, int cell_number);

Cell init_cell(int number, Cell_State state);

Cell complete_cell(Cell cell, int x, int y, int size_cell);

int from_coordinates_to_cell_index(Board board, int *x, int *y);

int get_cell_index(Board sudoku_board, Board numbers_board, int *x, int *y);


#endif /*TP7_MODEL_MODULE_H*/
