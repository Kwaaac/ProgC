#ifndef __SUDOKU__
#define __SUDOKU__
#include "model_module.h"

int is_board_valid(Board board, int max);

int is_number_valid(Board *board, int row, int column, int number);

void solve_board(Board *board, int max);

void remove_numbers_in_board(Board *board);

void print_board(Board board);

#endif /* __SUDOKU__ */
