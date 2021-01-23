#ifndef TP7_MODEL_MODULE_H
#define TP7_MODEL_MODULE_H

#include <stdio.h>
#include <stdlib.h>


/**
 *  @brief state of a cell
 * */
typedef enum cell_state {
    NORMAL, /**< Nothing special, the player can interact with */
    BLOCKED, /**< Cell the player cannot interect with */
    HOVERED, /**< When the cell is hovered (To implement the hovering color) */
    SELECTED /**< When the cell is selected by the player */
} Cell_State;

/**
 *  \struct A cell
 *
 *  @var int x              : Coordinate x in the window
 *  @var int y              : Coordinate y in the window
 *  @var int size_cell      : The size of the cell
 *  @var int number         : Number contained by the cell
 *  @var Cell_State state   : Actual state of the cell
 */
typedef struct cell {
    int x;
    int y;
    int size_cell;
    int number;
    Cell_State state;
} Cell;

/**
 *  @brief Structure of a sudoku board, this structure is also used to make the number pad
 *
 *  @var Cell cell_grid      : 2D array of cells to simulate a board containing every cells
 *
 *  @var int start_x        : Coordinate x, top left corner of the board
 *  @var int start_y        : Coordinate y, top left corner of the board
 *  @var int length         : length of the board
 *  @var int cell_number    : Number of cells contained in a row or column
 *  @var int size_cell      : The size of a cell
 *
 */

typedef struct board {

    Cell **cell_grid; /*!< 2D array of cells to simulate a board containing every cells */

    int start_x; /*!< 2Coordinate x, top left corner of the board */
    int start_y; /*!< 2Coordinate y, top left corner of the board */
    int length; /*!< length of the board */
    int cell_number; /*!< Number of cells contained in a row or column */
    int size_cell; /*!< The size of a cell*/
} Board;


/**
 * Initialise a sudoku board with data except the grid
 *
 * @param board
 * @param start_x
 * @param start_y
 * @param length
 * @param cell_number
 */
void init_board(Board *board, int start_x, int start_y, int length, int cell_number);

/**
 * Free the board and its cells
 *
 * @param board sudoku board
 */
void free_board(Board *board);

/**
 * Complete the datas of a cell
 *
 * @param cell Concerned cell
 * @param x x coordinate
 * @param y y coordinate
 * @param size_cell size of the cell
 * @return The updated cell
 */
Cell complete_cell(Cell cell, int x, int y, int size_cell);

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
int from_coordinates_to_cell_index(Board board, int *x, int *y);

#endif /*TP7_MODEL_MODULE_H*/
