#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "in_out.h"

int fread_board(const char *file, Board *board, int max) {
    FILE *f;
    int i, j;
    int entry;
    Cell cell;

    f = fopen(file, "r");
    if (f == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier %s\n", file);
        return 0;
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < max; j++) {
            fscanf(f, "%d", &entry);
            if (entry == 0) {
                cell = init_cell(entry, NORMAL);
            } else {
                cell = init_cell(entry, BLOCKED);
            }

            board->cell_grid[i][j] = cell;
        }
    }


    return 1;
}

int write_board(const char *file, Board *board, int max) {
    FILE *f;
    int i, j;

    f = fopen(file, "w");
    if (f == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier, oups%s\n", file);
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

int is_file_name_ok(const char *file_name) {
    FILE *file;
    file = fopen(file_name, "r");
    if (file) {
        fclose(file);
        return 0;
    }
    return 1;
}


