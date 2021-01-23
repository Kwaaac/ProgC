#ifndef __IN_OUT__
#define __IN_OUT__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "sudoku.h"

/**
 * Initialise a board and allocate its cells depending of the given file
 *
 * @param file sudoku file
 * @param board soduko board
 * @param max max size of the board
 * @return 1 if the board has been created, 0 if errors occurred
 */
int fread_board(const char *file, Board *board, int max);

/**
 * Check if a file exist
 *
 * @param file_name The name of the file
 * @return 1 if the file exist, 0 otherwise
 */
int is_file_name_ok(const char *file_name);

/**
 * Write a board in a file
 *
 * @param file the file to be written in
 * @param board sudoku board
 * @param max size of the sudoku
 * @return 1 if the file has been written, 0 if opening error occured
 */
int write_board(const char *file, Board *board, int max);

#endif
