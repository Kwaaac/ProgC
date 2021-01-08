#include <stdio.h>
#include "model.h"

int main() {

    Liste *l = allouer_liste();

    print_liste(*l);

    append(l, ROUGE, TRIANGLE);

    print_liste(*l);

    append(l, VERT, DIAMANT);

    print_liste(*l);

    append(l, JAUNE, CERCLE);

    print_liste(*l);

    append(l, BLEU, TRIANGLE);

    print_liste(*l);

    append(l, VERT, TRIANGLE);

    print_liste(*l);

    append(l, BLEU, TRIANGLE);

    print_liste(*l);

    check_pop(l);
    check_remove(l);

    print_liste(*l);

    free_liste(l);

    return 0;
}
