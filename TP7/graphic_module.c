#include <MLV/MLV_all.h>
#include "graphic_module.h"
#include "sudoku.h"

void draw_cell(int x, int y, int size_cell, int number, Cell_State cell_state, char *font_name, int size) {
    MLV_Color background_color;
    MLV_Font *font;
    char nbr[2];

    font = MLV_load_font(font_name, size);

    switch (cell_state) {
        case NORMAL:
            background_color = MLV_COLOR_BLACK;
            break;
        case BLOCKED:
            background_color = MLV_COLOR_GRAY21;
            break;
        case HOVERED:
            background_color = MLV_COLOR_YELLOW3;
            break;
        case SELECTED:
            background_color = MLV_COLOR_RED3;
            break;
        default:
            background_color = MLV_COLOR_BLACK;
            break;
    }

    /* Draw background */
    MLV_draw_filled_rectangle(x + 1, y + 1, size_cell - 1, size_cell - 1, background_color);

    /* draw the number */
    if (number != 0) {
        sprintf(nbr, "%d", number);
        MLV_draw_text_with_font(x + size_cell / 2 - size / 2 + 5,
                                y + size_cell / 2 - size / 2, nbr, font,
                                MLV_COLOR_WHITE);
    }

    MLV_free_font(font);
}

void redraw_cell(Cell *cell, Cell_State new_state, char *font_name, int size) {
    draw_cell(cell->x, cell->y, cell->size_cell, cell->number, new_state, font_name, size);
    MLV_actualise_window();
}

void draw_grid(Board *board, MLV_Color general_color, MLV_Color region_color) {
    int i;
    MLV_Color color;

    for (i = 0; i <= board->cell_number; i++) {
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


void draw_every_cells(Board *board, char *font_name, int size) {
    int i, j;
    Cell cell;

    for (i = 0; i < board->cell_number; i++) {
        for (j = 0; j < board->cell_number; j++) {
            board->cell_grid[i][j] = complete_cell(board->cell_grid[i][j], board->start_x + board->size_cell * j,
                                                   board->start_y + board->size_cell * i, board->size_cell);

            cell = board->cell_grid[i][j];

            draw_cell(cell.x, cell.y, board->size_cell, cell.number, cell.state, font_name, size);
        }
    }
}

void draw_board(Board *board, MLV_Color general_color, MLV_Color region_color, char *font_name, int size) {
    draw_grid(board, general_color, region_color);

    draw_every_cells(board, font_name, size);



    MLV_actualise_window();
}

void erase_board(Board board) {
    MLV_draw_filled_rectangle(board.start_x, board.start_y, board.length + 1, board.length + 1, MLV_COLOR_BLACK);
}



