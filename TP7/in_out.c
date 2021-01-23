#include "in_out.h"

/**
 * Initialise a board and allocate its cells depending of the given file
 *
 * @param file sudoku file
 * @param board soduko board
 * @param max max size of the board
 * @return 1 if the board has been created, 0 if errors occurred
 */
int fread_board(const char *file, Board *board, int max) {
    FILE *f;
    int i, j;
    int entry;

    board->length = 0;
    board->start_x = 0;
    board->start_y = 0;
    board->size_cell = 0;
    board->cell_number = max;

    board->cell_grid = (Cell **) malloc(max * sizeof(Cell *));
    for (i = 0; i < max; i++)
        board->cell_grid[i] = (Cell *) malloc(max * sizeof(Cell));

    f = fopen(file, "r");
    if (f == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier %s\n", file);
        return 0;
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            fscanf(f, "%d", &entry);

            board->cell_grid[i][j].number = entry;
            board->cell_grid[i][j].x = 0;
            board->cell_grid[i][j].y = 0;
            board->cell_grid[i][j].size_cell = 0;
            if (entry == 0) {
                board->cell_grid[i][j].state = NORMAL;
            } else {
                board->cell_grid[i][j].state = BLOCKED;
            }
        }
    }

    return 1;
}

/**
 * Write a board in a file
 *
 * @param file the file to be written in
 * @param board sudoku board
 * @param max size of the sudoku
 * @return 1 if the file has been written, 0 if oppening error occured
 */
int write_board(const char *file, Board *board, int max) {
    FILE *f;
    int i, j;

    f = fopen(file, "w");
    if (f == NULL) {
        fprintf(stderr, "Erreur d'écriture du fichier, oups%s\n", file);
        return 0;
    }

    printf("%s", file);
    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            fprintf(f, "%d", board->cell_grid[i][j].number);
            fprintf(f, " ");
        }
        fprintf(f, "\n");
    }


    return 1;
}

/**
 * Check if a file exist
 *
 * @param file_name The name of the file
 * @return 1 if the file exist, 0 otherwise
 */
int is_file_name_ok(const char *file_name) {
    FILE *file;
    file = fopen(file_name, "r");
    if (file) {
        fclose(file);
        return 0;
    }
    return 1;
}


