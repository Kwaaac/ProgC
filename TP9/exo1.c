#include <stdio.h>
#include <stdlib.h>

/**
 * allocate an array
 *
 * @param size
 * @return
 */
int *allocate_array(int size) {
    int *tab = (int *) malloc(size * sizeof(int));

    if (tab == NULL) {
        fprintf(stderr, "Memory allocation error");
        return NULL;
    }

    return tab;
}

/**
 * Fill the given array
 *
 * @param array
 * @param size
 */
void fill_array(int *array, int size) {
    int i;
    for (i = 1; i <= size; i++) {
        array[i-1] = i;
    }
}

/**
 * Print the given array
 *
 * @param array
 * @param size
 */
void print_array(int *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d\n", array[i]);
        } else {
            printf("%d ", array[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    int size = atoi(argv[1]);
    int *tab = allocate_array(size);

    fill_array(tab, size);

    print_array(tab, size);

    free(tab);
    return 0;
}
