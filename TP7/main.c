#include <MLV/MLV_all.h>
#include <unistd.h>
#include <time.h>
#include "graphic_module.h"
#include "sudoku.h"
#include "in_out.h"
#include "model_module.h"


void sudoku_game(int width, int height, char *grid_name) {
    int row, column;
    int mouse_x, mouse_y;
    Cell *cell;
    char *font;
    Board sudoku_board, numbers_board;

    font = "font/comici.ttf";

    fread_board(grid_name, &sudoku_board, 9);
    fread_board("data/number_grid.txt", &numbers_board, 3);

    complete_board(&sudoku_board, 50, 0, height, 9);
    complete_board(&numbers_board, (int) (width * 0.77), height / 3, height / 3, 3);

    MLV_create_window("SUDOKU", "sudoku de ouf guedin", width, height);

    draw_board(&sudoku_board, MLV_COLOR_WHITE, MLV_COLOR_GRAY60, font, 24);

    MLV_actualise_window();

    while (1) {
        MLV_wait_mouse(&mouse_x, &mouse_y);

        if (from_coordinates_to_cell_index(sudoku_board, &mouse_x, &mouse_y) &&
            sudoku_board.cell_grid[mouse_y][mouse_x].state != BLOCKED) {
            draw_board(&numbers_board, MLV_COLOR_WHITE, MLV_COLOR_WHITE, font, 24);

            cell = &sudoku_board.cell_grid[mouse_y][mouse_x];

            redraw_cell(cell, SELECTED, font, 24);

            MLV_wait_mouse(&mouse_x, &mouse_y);

            if (from_coordinates_to_cell_index(numbers_board, &mouse_x, &mouse_y)) {
                row = mouse_y;
                column = mouse_x;

                if (is_number_valid(&sudoku_board, row, column, numbers_board.cell_grid[mouse_y][mouse_x].number)) {
                    cell->number = numbers_board.cell_grid[mouse_y][mouse_x].number;
                    if (is_board_valid(sudoku_board, 9)) { break; }
                }
            }

            erase_board(numbers_board);
            redraw_cell(cell, NORMAL, font, 24);
        }
        MLV_actualise_window();

    }

    MLV_free_window();
}

void generate_sudoku(const char *file) {
    Board board;

    srand(time(NULL));

    solve_board(&board, 9);

    print_board(board);

    remove_numbers_in_board(&board);

    write_board(file, &board, 9);
}

int main(int argc, char *argv[]) {

    if (strcmp(argv[1], "-s") == 0) {
        sudoku_game(1200, 800, argv[2]);
    } else if (strcmp(argv[1], "-g") == 0) {
        if (!is_file_name_ok(argv[2])) {
            fprintf(stderr, "Wrong File name given");
            return 0;
        }

        generate_sudoku(argv[2]);

    } else {
        fprintf(stderr, "Wrong arguments given");
    }


    return 0;
}
