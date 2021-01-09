#include <MLV/MLV_all.h>
#include "model.h"

#ifndef THREETOPUSH_DRAW_H
#define THREETOPUSH_DRAW_H

#define WINDOW_WIDTH 1200
#define WINDOW_HEIGHT 800
#define FORM_SCALE 60
#define SPACING 10

void draw_liste(Liste liste, int x, int y);

void redraw_window(Liste liste, Liste liste_player);


#endif /*THREETOPUSH_DRAW_H*/
