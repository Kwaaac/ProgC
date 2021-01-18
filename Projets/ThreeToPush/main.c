#include <stdio.h>
#include <MLV/MLV_all.h>
#include "model.h"
#include "draw.h"

int main(int argc, char *argv[]) {
    /* Main game loop */
    int i;
    MLV_Event event;
    MLV_Keyboard_button key_button;
    MLV_Mouse_button mouse_button;
    MLV_Button_state mouse_state;
    int x_pixel, y_pixel;
    int game_over;

    List *liste = allocate_list();
    List *liste2 = allocate_list();

    for(i = 0; i < 5; i++){
        push(liste, get_random_token());
    }


    print_liste(*liste);

    MLV_create_window("ThreeToGo", "ThreeToGo", WINDOW_WIDTH, WINDOW_HEIGHT);

    draw_liste(*liste, WINDOW_WIDTH / 3, WINDOW_HEIGHT / 4);

    MLV_wait_seconds(1);

    game_over = 0;
    event = MLV_NONE;
    while (!(event == MLV_KEY && key_button == MLV_KEYBOARD_ESCAPE)) {

        event = MLV_wait_event(
                &key_button,
                NULL,
                NULL,
                NULL,
                NULL,
                &x_pixel,
                &y_pixel,
                &mouse_button,
                &mouse_state
        );

        if (!game_over && event == MLV_MOUSE_BUTTON && mouse_state == MLV_RELEASED) {

            /* The player has pressed a button */

            if (mouse_button == MLV_BUTTON_LEFT) {
                push(liste2, remove_token(liste));

            } else if (mouse_button == MLV_BUTTON_RIGHT) {
                append(liste2, remove_token(liste));

            }

            push(liste, get_random_token());
            redraw_window(*liste, *liste2);

            MLV_wait_milliseconds(300);

            while(check_remove(liste2) || check_pop(liste2)){
                redraw_window(*liste, *liste2);
                MLV_wait_milliseconds(300);
            }

        }
    }

    MLV_free_window();
    free_liste(liste);
    return 0;
}
