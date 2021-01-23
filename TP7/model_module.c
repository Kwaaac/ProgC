#include "model_module.h"

/**
 * Initialise a sudoku board with data except the grid
 *
 * @param board
 * @param start_x
 * @param start_y
 * @param length
 * @param cell_number
 */
void init_board(Board *board, int start_x, int start_y, int length, int cell_number) {
    board->start_x = start_x;
    board->start_y = start_y;
    board->cell_number = cell_number;
    board->size_cell = length / cell_number;
    board->length = cell_number * board->size_cell;
}

/**
 * Free the board and its cells
 *
 * @param board sudoku board
 */
void free_board(Board *board) {
    int i;
    for (i = 0; i < board->cell_number; i++)
        free(board->cell_grid[i]);
    free(board->cell_grid);
    free(board);
}

/**
 * Complete the datas of a cell
 *
 * @param cell Concerned cell
 * @param x x coordinate
 * @param y y coordinate
 * @param size_cell size of the cell
 * @return The updated cell
 */
Cell complete_cell(Cell cell, int x, int y, int size_cell) {
    cell.x = x;
    cell.y = y;
    cell.size_cell = size_cell;

    return cell;
}

/**
 * The function gives the row and the column of the cell of the grid the player clicked on.
 * The function does not change x and y if the player is not on a cell.
 *
 * @warning This function must be used after the player clicked on the board
 * @param board Grid to check in
 * @param x x coordinate (not row)
 * @param y y coordinate (not column)
 * @return 1 if the player clicked in a cell, 0 otherwise
 */
int from_coordinates_to_cell_index(Board board, int *x, int *y) {
    int inter_x, inter_y;

    /* coordinates not inside the board */
    if (!((board.start_x <= *x && *x <= board.length + board.start_x) &&
          (board.start_y <= *y && *y <= board.length + board.start_y))) {
        return 0;
    }

    inter_x = ((*x - board.start_x) / board.size_cell);
    inter_y = (*y - board.start_y) / board.size_cell;

    /* If inside the board, double check if the row and column are correct for the grid's array */
    if (!((0 <= inter_x && inter_x < board.cell_number) &&
          (0 <= inter_y && inter_y < board.cell_number))) {
        return 0;
    }

    *x = inter_x;
    *y = inter_y;

    return 1;
}
