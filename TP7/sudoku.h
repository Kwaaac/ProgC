#ifndef __SUDOKU__
#define __SUDOKU__
#include "model_module.h"

/**
 * Check if the board is complete or not
 *
 * @param board sudoku board
 * @param max max size of the board
 * @return 1 if complete, 0 otherwise
 */
int is_board_valid(Board board, int max);

/**
 * Check on the board if the given number at the given coordinates is valid
 *
 * @warning Except the board, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param board Sudoku board
 * @param row Row index
 * @param column Column index
 * @param number Number between 1-9
 * @return 1 if the number is valid at this emplacement, returns 0 otherwise
 */
int is_number_valid(Board *board, int row, int column, int number);

/**
 * Recursively permute the sudoku board to give every solution to a board
 *
 * @param board Sudoku board
 * @param max Max length of the board
 */
void solve_board(Board *board, int max);

/**
 * @Deprecated Remove random number in a board
 *
 * @param board sudoku board
 */
void remove_numbers_in_board(Board *board);

/**
 * Print the given board
 *
 * @param board Sudoku board
 */
void print_board(Board board);

#endif /* __SUDOKU__ */
