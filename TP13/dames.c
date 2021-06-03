#include <stdio.h>
#include <limits.h>
#include "dames.h"
#include "bit.h"

/**
 * This function convert an x, y value in a board to a bit position
 *
 * @param x the row of the cell
 * @param y the column of the cell
 */
int convert_xy_to_bit_position(int x, int y) {
    return x * CHAR_BIT + y;
}

/**
 * Print every cell of the board in command line
 *
 * @param n the board
 */
void print_bord_command_line(unsigned long int n) {
    int i;
    for (i = BOARD_LENGTH; i >= 0; i--) {
        printf("%d ", bit_value_ULI(n, i));
        if (i % (CHAR_BIT) == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

/**
 * Function that check if every cells are menaced by a queen
 *
 * @param n the board
 * @return 1 if every cell are menaced, 0 otherwise
 */
int is_bord_full(unsigned long int n) {
    int i;
    for (i = BOARD_LENGTH; i >= 0; i--) {
        if (bit_value_ULI(n, i) == 0) {
            return 0;
        }
    }

    return 1;
}

/**
 * Inform if the queen can be placed at the given coordinates
 *
 * @param n The board
 * @param x The row of the coordinates
 * @param y The column of the coordinates
 * @return 1 if the queen can be placed, 0 otherwise
 */
int is_queen_placeable(unsigned long int n, int x, int y) {
    int position = convert_xy_to_bit_position(x, y);
    return bit_value_ULI(n, position);
}

int stop_diago_left(int position, int next_position) {
    return position - ((int) position / 8) * 8 > next_position - ((int) next_position / 8) * 8;
}

int stop_diago_right(int position, int next_position) {
    return position - ((int) position / 8) * 8 < next_position - ((int) next_position / 8) * 8;
}

int line_and_column(int position, int next_position) {
    return 0;
}

void set_cells(unsigned long int *n, int position, int min, int max, int delta, int func(int, int)) {
    int i;
    for (i = position; i < max; i = i + delta) {
        if (func(position, i)) {
            break;
        }
        set_positive_bit_ULI(n, i);
    }

    for (i = position; i >= min; i = i - delta) {
        if (func(i, position)) {
            break;
        }
        set_positive_bit_ULI(n, i);
    }
}

/**
 * Set every bits of the board to 1 on the line of the given position
 *
 * @param n The board
 * @param position The position of the queen
 */
void set_line(unsigned long int *n, int position) {
    int min = CHAR_BIT * ((int) position / 8);
    int max = CHAR_BIT * ((int) position / 8 + 1);

    set_cells(n, position, min, max, 1, line_and_column);
}

/**
 * Set every bits of the board to 1 on the line of the given position
 *
 * @param n The board
 * @param position The position of the queen
 */
void set_column(unsigned long int *n, int position) {
    set_cells(n, position, 0, 64, 8, line_and_column);
}

/**
 * Set every bits of the board to 1 on the line of the given position
 *
 * @param n The board
 * @param position The position of the queen
 */
void set_diagonals(unsigned long int *n, int position) {
    int i;
    /*First diagonal*/
    set_cells(n, position, 0, 64, 9, stop_diago_left);

    /*Second diagonal*/
    set_cells(n, position, 0, 64, 7, stop_diago_right);
}

void set_cells_queen(unsigned long int *n, int queens[], int *queen_size, int x, int y) {
    int position = convert_xy_to_bit_position(x, y);
    queens[*queen_size] = position;
    *queen_size += 1;

    set_line(n, position);
    set_column(n, position);
    set_diagonals(n, position);
}
