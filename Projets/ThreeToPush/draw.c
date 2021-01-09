#include "draw.h"


MLV_Color get_mlv_color_from_enum(Couleur couleur) {
    switch (couleur) {
        case ROUGE:
            return MLV_COLOR_RED;
        case VERT:
            return MLV_COLOR_GREEN;
        case BLEU:
            return MLV_COLOR_BLUE;
        case JAUNE:
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
    switch (tokens->forme) {
        case CERCLE:
            draw_cercle(x, y, get_mlv_color_from_enum(tokens->couleur));
            break;
        case CARRE:
            draw_carre(x, y, get_mlv_color_from_enum(tokens->couleur));
            break;
        case TRIANGLE:
            draw_triangle(x, y, get_mlv_color_from_enum(tokens->couleur));
            break;
        case DIAMANT:
            draw_diamant(x, y, get_mlv_color_from_enum(tokens->couleur));
            break;
    }

    MLV_actualise_window();
}

void draw_liste(Liste liste, int x, int y) {
    int i;
    Tokens *token;
    if (liste.length == 0) { return; }

    x = x - (liste.length / 2) * (FORM_SCALE + SPACING);
    token = liste.last_element;

    for (i = 0; i < liste.length; i++, x = x + FORM_SCALE + SPACING, token = token->suivant) {
        draw_token(token, x, y);
    }
}
