#include "board.h"
#include <stdlib.h>
#include <assert.h>

Carre *init_bloc(int col, int lig) {
    Carre *new_bloc = (Carre *) malloc(sizeof(Carre));

    new_bloc->col = col;
    new_bloc->lig = lig;

    return new_bloc;
}

void free_bloc(Carre *c) {
    free(c);
}

void free_bloc_array(Carre **c, int size) {
    int i;
    for (i = 0; i < size; i++) {
        free_bloc(c[i]);
    }
    free(c);
}

/**
 * Allocate, initialise and return a new board
 *
 * @return A new Board
 */
Plateau *allocate_plateau(int height, int width) {
    int i, j;

    Plateau *p = (Plateau *) malloc(sizeof(Plateau));
    assert(p != NULL);

    p->width = width;
    p->height = height;

    p->bloc = (Carre **) malloc(sizeof(Carre *) * height);

    for (i = 0; i < height; i++) {
        p->bloc[i] = (Carre *) malloc(sizeof(Carre) * width);
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            p->bloc[i][j].lig = i;
            p->bloc[i][j].col = j;
            p->bloc[i][j].weight = i * width + j;
        }
    }

    p->black_bloc = &p->bloc[i - 1][j - 1];

    return p;
}

/**
 * Free the board
 *
 * @param p the board
 */
void free_plateau(Plateau *p) {
    free_bloc_array(p->bloc, p->width);
    free_bloc(p->black_bloc);
    free(p);
}


/**
 * Compare two blocs
 *
 * @param c1 first bloc
 * @param c2 second bloc
 * @return 1 if they are equals, 0 otherwise
 */
int compare_bloc_position(Carre c1, Carre c2) {
    return (c1.col == c2.col) && (c1.lig == c2.lig);
}

/**
 * Check if the board is completed
 *
 * @param p the board
 * @return 1 if the played won, 0 otherwise
 */
int check_win(Plateau *p) {
    int i, j;

    for (i = 0; i < p->height; i++) {
        for (j = 0; j < p->width; j++) {
            if (p->bloc[i][j].weight != i * p->width + j) {
                return 0;
            }
        }
    }

    return 1;
}

/**
 * Check if the selected bloc is adjacent to the black bloc
 * being adjacent means being on the same line or column and next to each other
 *
 * @param c selected bloc
 * @param black_bloc black_bloc
 * @return 1 if the they are adjacent can occur, 0 otherwise
 */
int can_swap_blocs(Carre c, Carre *black_bloc) {
    int line = c.lig - black_bloc->lig;
    int col = c.col - black_bloc->col;

    /*close to a 3x3 grid*/
    if ((line <= 1 && line >= -1) && (col <= 1 && col >= -1)) {
        /* exclude the diagonals */
        return (line != 0 && col == 0) || (col != 0 && line == 0);
    }

    return 0;
}

Carre *swap_blocs(Carre *black_bloc, Carre *c2) {
    int weight;
    MLV_Image *tmp;

    weight = black_bloc->weight;
    tmp = black_bloc->image_bloc;

    black_bloc->weight = c2->weight;
    black_bloc->image_bloc = c2->image_bloc;

    c2->weight = weight;
    c2->image_bloc = tmp;

    return c2;
}

int is_out_of_bound(Plateau *p, int lig, int col) {
    return lig < p->height && lig > 0 && col < p->width && col > 0;
}

void associate_move_to_bloc(Carre *black_bloc, int move, int *move_lig, int *move_col) {
    switch (move) {

        case 0: /* UP */
            *move_lig = -1 + black_bloc->lig;
            *move_col = 0 + black_bloc->col;
            break;


        case 1: /* DOWN */
            *move_lig = 1 + black_bloc->lig;
            *move_col = 0 + black_bloc->col;
            break;

        case 2: /* LEFT */
            *move_lig = 0 + black_bloc->lig;
            *move_col = -1 + black_bloc->col;
            break;

        case 3: /* RIGHT */
            *move_lig = 0 + black_bloc->lig;
            *move_col = 1 + black_bloc->col;
            break;

        default:;
    }
}

void randomize_plateau(Plateau *p) {
    int i, move, move_lig, move_col;
    for (i = 0; i < MOVE_NBR; i++) {

        do {
            move = rand() % 4;
            associate_move_to_bloc(p->black_bloc, move, &move_lig, &move_col);

        } while (!is_out_of_bound(p, move_lig, move_col));

        p->black_bloc = swap_blocs(p->black_bloc, &p->bloc[move_lig][move_col]);

    }

}
