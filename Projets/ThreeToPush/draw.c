#include "draw.h"


MLV_Color get_mlv_color_from_enum(Color couleur) {
    switch (couleur) {
        case RED:
            return MLV_COLOR_RED;
        case GREEN:
            return MLV_COLOR_GREEN;
        case BLUE:
            return MLV_COLOR_BLUE;
        case YELLOW:
            return MLV_COLOR_YELLOW;
        default:
            return MLV_COLOR_WHITE;
    }
}

void draw_carre(int x, int y, MLV_Color color) {
    MLV_draw_filled_rectangle(x, y, FORM_SCALE, FORM_SCALE, color);
}

void draw_cercle(int x, int y, MLV_Color color) {
    x += FORM_SCALE / 2;
    y += FORM_SCALE / 2;
    MLV_draw_filled_circle(x, y, FORM_SCALE / 2, color);
}

void draw_diamant(int x, int y, MLV_Color color) {
    int coord_x[4];
    int coord_y[4];

    /* J'initialise mes tableaux cette manière afin d'éviter un warning
     * warning: initializer element is not computable at load time [-Wpedantic]
     * */
    coord_x[0] = x + FORM_SCALE / 2;
    coord_x[1] = x + FORM_SCALE;
    coord_x[2] = x + FORM_SCALE / 2;
    coord_x[3] = x;

    coord_y[0] = y;
    coord_y[1] = y + FORM_SCALE / 2;
    coord_y[2] = y + FORM_SCALE;
    coord_y[3] = y + FORM_SCALE / 2;

    MLV_draw_filled_polygon(coord_x, coord_y, 4, color);
}

void draw_triangle(int x, int y, MLV_Color color) {
    int coord_x[3];
    int coord_y[3];

    /* J'initialise mes tableaux cette manière afin d'éviter un warning
     * warning: initializer element is not computable at load time [-Wpedantic]
     * */
    coord_x[0] = x + FORM_SCALE / 2;
    coord_x[1] = x + FORM_SCALE;
    coord_x[2] = x;

    coord_y[0] = y;
    coord_y[1] = y + FORM_SCALE;
    coord_y[2] = y + FORM_SCALE;

    MLV_draw_filled_polygon(coord_x, coord_y, 3, color);
}

void draw_token(Tokens *tokens, int x, int y) {
    switch (tokens->form) {
        case CIRCLE:
            draw_cercle(x, y, get_mlv_color_from_enum(tokens->color));
            break;
        case SQUARE:
            draw_carre(x, y, get_mlv_color_from_enum(tokens->color));
            break;
        case TRIANGLE:
            draw_triangle(x, y, get_mlv_color_from_enum(tokens->color));
            break;
        case DIAMOND:
            draw_diamant(x, y, get_mlv_color_from_enum(tokens->color));
            break;
    }

    MLV_actualise_window();
}

void draw_liste(List liste, int x, int y) {
    Tokens *token;
    if (liste.length == 0) { return; }

    x = x - (liste.length / 2) * (FORM_SCALE + SPACING);
    token = liste.last_element->next;

    while (!equals_tokens(token, liste.last_element)) {
        draw_token(token, x, y);

        token = token->next;
        x = x + FORM_SCALE + SPACING;
    }

    draw_token(token, x, y);
}

void redraw_window(List liste, List liste_player){
    MLV_draw_filled_rectangle(0, 0, WINDOW_WIDTH - 1, WINDOW_HEIGHT - 1, MLV_COLOR_BLACK);
    draw_liste(liste, WINDOW_WIDTH / 3, WINDOW_HEIGHT / 4);
    draw_liste(liste_player, WINDOW_WIDTH / 2, (WINDOW_HEIGHT / 4) * 3);
    MLV_actualise_window();
}
