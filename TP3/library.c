#include "library.h"

#include <stdio.h>


int exo4(int elt, int *tab, int size) {
    int m = size / 2;

    if (tab[m] == elt) {
        return m;
    }

    if (tab[m] > elt) {
        return exo4(elt, tab, m - 1);
    } else {
        return exo4(elt, tab, size * 2 - 1);
    }
}


/* Print an array on the standard output*/
void print_array(int *array, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}


int main(int agc, char *argv[]) {
    int tab[5] = {5, 4, 2, 3, 1};
    int tab2[10] = {5, 4, 2, 3, 1, 150, 201, 4, 6, 10};
    int tab3[5] = {1, 2, 3, 4, 5};

    printf("%d", exo4(4, tab3, 5));

    //print_array(tab, 5);
    //print_array(tab2, 10);

    return 0;
}


