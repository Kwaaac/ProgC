#include <MLV/MLV_all.h>
#include "graphic_module.h"
#include "sudoku.h"

/**
 * Return a color depending of a state
 *
 * @param cell_state state of a cell
 * @return MLV_color color
 */
MLV_Color get_color_from_state(Cell_State cell_state) {
    switch (cell_state) {
        case NORMAL:
            return MLV_COLOR_BLACK;

        case BLOCKED:
            return MLV_COLOR_GRAY21;
        case HOVERED:
            return MLV_COLOR_YELLOW3;

        case SELECTED:
            return MLV_COLOR_RED3;

        default:
            return MLV_COLOR_BLACK;

    }
}

/**
 *  Draw a cell depending of it's coordinates, size, state and font
 *
 * @param Cell cell to be drawed
 * @param font_name Name of the font
 * @param size Size of the drawed number
 */
void draw_cell(Cell *cell, char *font_name, int size) {
    MLV_Color background_color;
    MLV_Font *font;
    char nbr[2];

    font = MLV_load_font(font_name, size);

    background_color = get_color_from_state(cell->state);

    /* Draw background */
    MLV_draw_filled_rectangle(cell->x + 1, cell->y + 1, cell->size_cell - 1, cell->size_cell - 1, background_color);

    /* draw the number */
    if (cell->number != 0) {
        sprintf(nbr, "%d", cell->number);
        MLV_draw_text_with_font(cell->x + cell->size_cell / 2 - size / 2 + 5,
                                cell->y + cell->size_cell / 2 - size / 2, nbr, font,
                                MLV_COLOR_WHITE);
    }

    MLV_free_font(font);
}

/**
 * Change the state of a cell, draw it and actualise the window
 *
 * @param cell Cell to be drawed
 * @param new_state New state of the cell
 * @param font_name Font of the number
 * @param size Size of the number
 */
void redraw_cell(Cell *cell, Cell_State new_state, char *font_name, int size) {
    cell->state = new_state;
    draw_cell(cell, font_name, size);
    MLV_actualise_window();
}

/**
 * Draw the lines of a grid, use two differents color to distinct the regions
 *
 * @param board sudoku bod
 * @param general_color Color of the lines
 * @param region_color Color of the region lines
 */
void draw_grid(Board *board, MLV_Color general_color, MLV_Color region_color) {
    int i;
    MLV_Color color;

    for (i = 0; i <= board->cell_number; i++) {
        /* distinct the regions */
        if (i % 3 == 0) {
            color = general_color;
        } else {
            color = region_color;
        }

        MLV_draw_line(board->start_x,
                      i * board->size_cell + board->start_y,
                      board->length + board->start_x,
                      i * board->size_cell + board->start_y,
                      color);
        MLV_draw_line(i * board->size_cell + board->start_x,
                      board->start_y,
                      i * board->size_cell + board->start_x,
                      board->length + board->start_y,
                      color);
    }
}

/**
 * Draw every cells of a bord
 *
 * @param board sudoku board
 * @param font_name font to be used
 * @param size size of the text
 */
void draw_every_cells(Board *board, char *font_name, int size) {
    int i, j;
    Cell cell;

    for (i = 0; i < board->cell_number; i++) {
        for (j = 0; j < board->cell_number; j++) {

            /* gives the cells every data it needs */
            board->cell_grid[i][j] = complete_cell(board->cell_grid[i][j], board->start_x + board->size_cell * j,
                                                   board->start_y + board->size_cell * i, board->size_cell);

            cell = board->cell_grid[i][j];

            draw_cell(&cell, font_name, size);
        }
    }
}

/**
 * Draw every aspect of the board and actualise the windows
 *
 * @param board sudoku board
 * @param general_color Color of the lines
 * @param region_color Color of the region lines
 * @param font_name font to be used
 * @param size size of the text
 */
void draw_board(Board *board, MLV_Color general_color, MLV_Color region_color, char *font_name, int size) {
    draw_grid(board, general_color, region_color);

    draw_every_cells(board, font_name, size);

    MLV_actualise_window();
}

/**
 * Erase a sudoku board
 *
 * @param board
 */
void erase_board(Board board) {
    MLV_draw_filled_rectangle(board.start_x, board.start_y, board.length + 1, board.length + 1, MLV_COLOR_BLACK);
    MLV_actualise_window();
}



