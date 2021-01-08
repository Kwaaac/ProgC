#include "model_module.h"


void complete_board(Board *board, int start_x, int start_y, int length, int cell_number) {
    board->start_x = start_x;
    board->start_y = start_y;
    board->cell_number = cell_number;
    board->size_cell = length / cell_number;
    board->length = cell_number * board->size_cell;
}

Cell init_cell(int number, Cell_State state) {
    Cell cell;

    cell.number = number;
    cell.state = state;

    return cell;
}

Cell complete_cell(Cell cell, int x, int y, int size_cell) {
    cell.x = x;
    cell.y = y;
    cell.size_cell = size_cell;

    return cell;
}

int from_coordinates_to_cell_index(Board board, int *x, int *y) {
    int inter_x, inter_y;
    /* coordinates not inside the board */
    if (!((board.start_x <= *x && *x <= board.length + board.start_x) &&
        (board.start_y <= *y && *y <= board.length + board.start_y))) {
        return 0;
    }

    inter_x = ((*x - board.start_x) / board.size_cell);
    inter_y = (*y - board.start_y) / board.size_cell;

    if(!((0 <= inter_x && inter_x < board.cell_number) &&
            (0 <= inter_y && inter_y < board.cell_number))){
        return 0;
    }

    *x = inter_x;
    *y = inter_y;

    return 1;
}

int get_cell_index(Board sudoku_board, Board numbers_board, int *x, int *y) {
    if (!from_coordinates_to_cell_index(sudoku_board, x, y)) {
        return from_coordinates_to_cell_index(numbers_board, x, y);
    }

    return 1;
}
