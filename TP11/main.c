#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"
#include "display.h"

int main(int argc, char *argv[]) {
    int mouse_x, mouse_y;
    MLV_Image *image;
    MLV_Keyboard_button button;
    MLV_Button_state button_state;
    MLV_Mouse_button mouse_state;
    Plateau *p;
    srand(time(NULL));

    if (argc == 1) {
        printf("Missing file arguments\n");
        return 1;
    }

    MLV_create_window("Taquin", "Taquin", 512, 512);

    image = MLV_load_image(argv[1]);
    p = allocate_plateau(image, 4, 4);

    randomize_plateau(p);

    update_board(p);

    while (1) {
        MLV_flush_event_queue();
        button = MLV_KEYBOARD_NONE;
        mouse_state = MLV_BUTTON_RIGHT;
        MLV_wait_event_or_seconds(&button, NULL, NULL, NULL, NULL, &mouse_x, &mouse_y, &mouse_state, &button_state,
                                  1500);
        if (button == MLV_KEYBOARD_m) {
            MLV_clear_window(MLV_COLOR_BLACK);
            MLV_draw_image(p->solution, 0, 0);
            MLV_actualise_window();
            MLV_wait_seconds(1);
            update_board(p);
            break;
        }

        if (mouse_state == MLV_BUTTON_LEFT && from_coordinates_to_cell_index(p, &mouse_x, &mouse_y) &&
            can_swap_blocs(p->bloc[mouse_y][mouse_x], p->black_bloc)) {

            p->black_bloc = swap_blocs(p->black_bloc, &p->bloc[mouse_y][mouse_x]);

            update_board(p);
            if (check_win(p)) {
                break;
            }
        }

    }

    printf("%s\n", "Et c'est gagné !");

    free_plateau(p);
    return 0;
}
