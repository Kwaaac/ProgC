#include "display.h"

void print_board_command_line(Plateau *p) {
    int i, j;

    for (i = 0; i < p->height; i++) {
        for (j = 0; j < p->width; j++) {
            print_carre_command_line(&p->bloc[i][j]);
        }
        printf("\n");
    }
}


void print_carre_command_line(Carre *c) {
    printf("(%d, %d) : %d,  ", c->lig, c->col, c->weight);
}
