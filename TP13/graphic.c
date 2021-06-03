#include "graphic.h"
#include "bit.h"
#include <MLV/MLV_all.h>

int in_array(int tab[], int elt, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (tab[i] == elt) {
            return 1;
        }
    }

    return 0;
}

void draw_board(unsigned long int n, int queens[], int queen_size, int cell_size) {
    int i, j, position;
    MLV_Color color;
    MLV_Image *image = MLV_load_image("queen.png");
    MLV_resize_image(image, cell_size, cell_size);

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            position = (7-i) * 8 + (7-j);
            if (bit_value_ULI(n, position)) {
                if ((i + j) % 2 == 0) {
                    color = MLV_COLOR_RED4;
                } else {
                    color = MLV_COLOR_RED1;
                }
            } else {
                if ((i + j) % 2 == 0) {
                    color = MLV_COLOR_BLACK;
                } else {
                    color = MLV_COLOR_GRAY;
                }
            }

            MLV_draw_filled_rectangle(i * cell_size, j * cell_size, i * cell_size + cell_size,
                                      j * cell_size + cell_size, color);

            if (in_array(queens, position, queen_size)) {
                MLV_draw_image(image, i * cell_size, j * cell_size);
            }


        }


    }
    MLV_actualise_window();
}

/**
 * The function gives the row and the column of the cell of the grid the player clicked on.
 * The function does not change x and y if the player is not on a cell.
 *
 * @warning This function must be used after the player clicked on the board
 * @param x x coordinate (not row)
 * @param y y coordinate (not column)
 * @return 1 if the player clicked in a cell, 0 otherwise
 */
int from_coordinates_to_cell_index(int *x, int *y) {
    int inter_x, inter_y;


    /* coordinates not inside the board */
    if (!((0 <= *x && *x <= 640) &&
          (0 <= *y && *y <= 640))) {
        return 0;
    }

    inter_x = 7 - (*x / (640 / 8));
    inter_y = 7 - (*y / (640 / 8));


    /* If inside the p, double check if the row and column are correct for the grid's array */
    if (!((0 <= inter_x && inter_x < 8) &&
          (0 <= inter_y && inter_y < 8))) {
        return 0;
    }

    *x = inter_x;
    *y = inter_y;

    return 1;
}
