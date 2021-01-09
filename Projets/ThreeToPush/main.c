#include <stdio.h>
#include <MLV/MLV_all.h>
#include "model.h"
#include "draw.h"

int main(int argc, char* argv[]) {
    Liste *liste = allouer_liste();

    push(liste, TRIANGLE, ROUGE);
    push(liste, CERCLE, JAUNE);
    push(liste, DIAMANT, VERT);
    push(liste, CARRE, BLEU);

    print_liste(*liste);

    MLV_create_window("ThreeToGo", "ThreeToGo", WINDOW_WIDTH, WINDOW_HEIGHT);

    draw_liste(*liste, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);

    MLV_wait_seconds(60);

    MLV_free_window();
    free_liste(liste);
    return 0;
}
