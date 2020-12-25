#ifndef __SUDOKU__
#define __SUDOKU__

typedef int Board[9][9];

void print_board(Board grid);

void solve_grid(Board grid, int max);

void number_of_solving_grid(Board grid, int max, int *nbr_find);

#endif
