#ifndef TP11_BOARD_H
#define TP11_BOARD_H
#define MOVE_NBR 120

#include <MLV/MLV_all.h>

typedef struct carre {
    int lig;
    int col;
    int weight;

    MLV_Image *image_bloc;
} Carre;

typedef struct plateau {
    int width;
    int height;

    Carre **bloc;
    Carre *black_bloc;

    MLV_Image* solution;
} Plateau;

Plateau *allocate_plateau(int height, int width);

void init_plateau(Plateau *p);

void free_plateau(Plateau *p);

/**
 * Check if the board is completed
 *
 * @param p the board
 * @return 1 if the played won, 0 otherwise
 */
int check_win(Plateau *p);

Carre* swap_blocs(Carre *black_bloc, Carre *c2);

void randomize_plateau(Plateau *p);

#endif /*TP11_BOARD_H*/
