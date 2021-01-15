#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"


/**
 * Check if the number is valid on the row
 *
 * @warning Except the board, every argument should be between 1 and 9. Unless you want to play a weird sudoku_exercice, respect that
 * @param board Sudoku board
 * @param row Row index
 * @param number Number between 1-9
 * @return 1 of the number can be placed on the row, 0 otherwise
 */
int is_row_valid(Board *board, int row, int number) {
    int i;
    for (i = 0; i < 9; i++) {
        if (board->cell_grid[row][i].number == number) {
            return 0;
        }
    }
    return 1;
}

/**
 * Check if the number is valid on the column
 *
 * @warning Except the board, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param board Sudoku board
 * @param column Row index
 * @param number Number between 1-9
 * @return 1 of the number can be placed on the column, 0 otherwise
 */
int is_column_valid(Board *board, int column, int number) {
    int i;
    for (i = 0; i < 9; i++) {
        if (board->cell_grid[i][column].number == number) { return 0; }
    }

    return 1;
}


/**
 * Check if the number is valid on the region
 *
 * @warning Except the board, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param board Sudoku board
 * @param row Row index
 * @param column Column index
 * @param number Number between 1-9
 * @return 1 if the number is valid in the region, returns 0 otherwise
 */
int is_region_valid(Board *board, int row, int column, int number) {
    int i, j;

    row = row - row % 3;
    column = column - column % 3;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board->cell_grid[row + i][column + j].number == number) { return 0; }
        }
    }

    return 1;
}

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
int is_number_valid(Board *board, int row, int column, int number) {
    return is_row_valid(board, row, number) &&
           is_column_valid(board, column, number) &&
           is_region_valid(board, row, column, number);
}

/**
 * This function look trough the board to find an empty space and pass the row and column index to the given pointers
 *
 * @param board Sudoku board
 * @param row The row index pointer
 * @param column The column index pointer
 * @param max Max length of the board
 * @return return 0 if the board is full, 1 otherwise and pass the column and row index to the pointers
 */
int find_empty_space(Board *board, int *row, int *column, int max) {
    int i, j;
    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            if (board->cell_grid[i][j].number == 0) {
                *row = i;
                *column = j;
                return 1;
            }
        }
    }

    return 0;
}

/**
 * Recursively permute the sudoku board to give every solution to a board
 *
 * @param board Sudoku board
 * @param max Max length of the board
 */
void solve_board(Board *board, int max) {
    int row, column, rdm, i;
    rdm = 1 + rand() % 10;
    /* If no empty space found, then it's done
       row and column are updated accordingly */
    if (find_empty_space(board, &row, &column, max) == 0) {
        return;
    }

    /* Looking for every number and permute recursively as the explained function in array.c */
    for (i = rdm; i != 0; i = (i + 1) % 9) {
        if (is_number_valid(board, row, column, i)) {
            printf("rdm: %d\n", i);
            board->cell_grid[row][column].number = rdm;
            solve_board(board, max);
            board->cell_grid[row][column].number = 0;
        }
    }

}

/**
 * @Deprecated Remove random number in a board
 *
 * @param board sudoku board
 */
void remove_numbers_in_board(Board *board) {
    int i, j;
    int count = 20;

    while (count != 0) {
        i = rand() % 9;
        j = rand() % 9;

        if (board->cell_grid[i][j].number != 0) {
            board->cell_grid[i][j].number = 0;
            count--;
        }
    }

}

/**
 * Recursively permute the sudoku board to count every solution to a board and pass the result to the given pointer
 *
 * @param board Sudoku board
 * @param max Max length of the board
 * @param nbr_find Pointer of the number
 */
void number_of_solving_board(Board *board, int max, int *nbr_find) {
    int i, row, column;
    /* If no empty space found, then it's done
       row and column are updated accordingly */
    if (find_empty_space(board, &row, &column, max) == 0) {
        *nbr_find += 1;
        return;
    }

    /* Looking for every number and permute recursively as the explained function in array.c*/
    for (i = 1; i <= max; i++) {
        if (is_number_valid(board, row, column, 0)) {
            board->cell_grid[row][column].number = i;
            number_of_solving_board(board, max, nbr_find);
            board->cell_grid[row][column].number = 0;
        }
    }
}


/**
 * Print the given board
 *
 * @param board Sudoku board
 */
void print_board(Board board) {
    int i, j;
    printf("Sudoku board:\n");
    for (i = 0; i < 9; i++) {
        printf("\n-------------------------------------\n");
        for (j = 0; j < 9; j++) {
            if (j == 8) {
                printf("| %d |", board.cell_grid[i][j].number);
                break;
            }

            printf("| %d ", board.cell_grid[i][j].number);
        }

    }
    printf("\n-------------------------------------\n");
}

/**
 * Check if the board is complete or not
 *
 * @param board sudoku board
 * @param max max size of the board
 * @return 1 if complete, 0 otherwise
 */
int is_board_valid(Board board, int max) {
    int i, j;

    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            if (board.cell_grid[i][j].number == 0) {
                return 0;
            }
        }
    }

    return 1;
}
