#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"


/**
 * Check if the number is valid on the row
 *
 * @warning Except the grid, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param grid Sudoku grid
 * @param row Row index
 * @param number Number between 1-9
 * @return 1 of the number can be placed on the row, 0 otherwise
 */
int is_row_valid(Board grid, int row, int number) {
    int i;
    for (i = 0; i < 9; i++) {
        if (grid[row][i] == number) { return 0; }
    }

    return 1;
}

/**
 * Check if the number is valid on the column
 *
* @warning Except the grid, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param grid Sudoku grid
 * @param column Row index
 * @param number Number between 1-9
 * @return 1 of the number can be placed on the column, 0 otherwise
 */
int is_column_valid(Board grid, int column, int number) {
    int i;
    for (i = 0; i < 9; i++) {
        if (grid[i][column] == number) { return 0; }
    }

    return 1;
}


/**
 * Check if the number is valid on the region
 *
 * @warning Except the grid, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param grid Sudoku grid
 * @param row Row index
 * @param column Column index
 * @param number Number between 1-9
 * @return 1 if the number is valid in the region, returns 0 otherwise
 */
int is_region_valid(Board grid, int row, int column, int number) {
    int i, j;

    row = row - row % 3;
    column = column - column % 3;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (grid[row + i][column + j] == number) { return 0; }
        }
    }

    return 1;
}

/**
 * Check on the grid if the given number at the given coordinates is valid
 *
 * @warning Except the grid, every argument should be between 1 and 9. Unless you want to play a weird sudoku, respect that
 * @param grid Sudoku grid
 * @param row Row index
 * @param column Column index
 * @param number Number between 1-9
 * @return 1 if the number is valid at this emplacement, returns 0 otherwise
 */
int is_number_valid(Board grid, int row, int column, int number) {
    return is_row_valid(grid, row, number) &&
           is_column_valid(grid, column, number) &&
           is_region_valid(grid, row, column, number);
}

/**
 * This function look trough the board to find an empty space and pass the row and column index to the given pointers
 *
 * @param grid Sudoku grid
 * @param row The row index pointer
 * @param column The column index pointer
 * @param max Max length of the grid
 * @return return 0 if the grid is full, 1 otherwise and pass the column and row index to the pointers
 */
int find_empty_space(Board grid, int *row, int *column, int max) {
    int i, j;
    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            if (grid[i][j] == 0) {
                *row = i;
                *column = j;
                return 1;
            }
        }
    }

    return 0;
}

/**
 * Recursively permute the sudoku grid to give every solution to a grid
 *
 * @param grid Sudoku grid
 * @param max Max length of the grid
 */
void solve_grid(Board grid, int max) {
    int i, row, column;
    /* If no empty space found, then it's done
       row and column are updated accordingly */
    if (find_empty_space(grid, &row, &column, max) == 0) {
        print_board(grid);
        return;
    }

    /* Looking for every number and permute recursively as the explained function in array.c*/
    for (i = 1; i <= max; i++) {
        if (is_number_valid(grid, row, column, i)) {
            grid[row][column] = i;
            solve_grid(grid, max);
            grid[row][column] = 0;
        }
    }
}

/**
 * Recursively permute the sudoku grid to count every solution to a grid and pass the result to the given pointer
 *
 * @param grid Sudoku grid
 * @param max Max length of the grid
 * @param nbr_find Pointer of the number
 */
void number_of_solving_grid(Board grid, int max, int *nbr_find) {
    int i, row, column;
    /* If no empty space found, then it's done
       row and column are updated accordingly */
    if (find_empty_space(grid, &row, &column, max) == 0) {
        *nbr_find += 1;
        return;
    }

    /* Looking for every number and permute recursively as the explained function in array.c*/
    for (i = 1; i <= max; i++) {
        if (is_number_valid(grid, row, column, i)) {
            grid[row][column] = i;
            number_of_solving_grid(grid, max, nbr_find);
            grid[row][column] = 0;
        }
    }
}

void print_board(Board grid) {
    int i, j;
    printf("Sudoku grid:\n");
    for (i = 0; i < 9; i++) {
        printf("\n-------------------------------------\n");
        for (j = 0; j < 9; j++) {
            if (j == 8) {
                printf("| %d |", grid[i][j]);
                break;
            }

            printf("| %d ", grid[i][j]);
        }

    }
    printf("\n-------------------------------------\n");
}
