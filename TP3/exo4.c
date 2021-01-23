#include <stdio.h>
#include <unistd.h>

int exo4(int elt, int *tab, int lo, int hi) {
    int m = (hi + lo) / 2;

    if (lo > hi) {
        return -1;
    }

    if (tab[m] == elt) {
        return m;
    }

    if (tab[m] > elt) {
        return exo4(elt, tab, lo, m - 1);
    } else {
        return exo4(elt, tab, m + 1, hi);
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
    int tab3[5] = {1, 2, 3, 4, 5};

    printf("%d\n", exo4(4, tab3, 0, 4));
    printf("%d\n", exo4(18, tab3, 0, 4));
    printf("%d\n", exo4(5, tab3, 0, 4));

    return 0;
}


