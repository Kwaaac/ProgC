#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"
#include "display.h"
#include "image.h"

int main() {
    int row, column;
    int mouse_x, mouse_y;
    MLV_Image *image;
    Plateau *p;
    srand(time(NULL));
    image = MLV_load_image("data/panda.png");
    p = allocate_plateau(image, 4, 4);

    MLV_create_window("viv", "bob", 512, 512);

    update_board(p);

    while (1) {
        MLV_wait_mouse(&mouse_x, &mouse_y);

        if (from_coordinates_to_cell_index(p, &mouse_x, &mouse_y) &&
            can_swap_blocs(p->bloc[mouse_y][mouse_y], p->black_bloc)) {
            p->black_bloc = swap_blocs(p->black_bloc, &p->bloc[mouse_y][mouse_y]);

            update_board(p);
            if (check_win(p)) {
                break;
            }
        }
    }


    free(p);
    return 0;
}
