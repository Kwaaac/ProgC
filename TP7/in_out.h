#ifndef __IN_OUT__
#define __IN_OUT__

#include "sudoku.h"

int fread_board(const char *file, Board *board, int max);

int is_file_name_ok(const char *file_name);

int write_board(const char *file, Board *board, int max);

#endif
