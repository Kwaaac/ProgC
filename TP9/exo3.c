#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(const char *str) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}

/**
 * allocate a 2D array
 *
 * @param size
 * @return
 */
char **allocate_and_fill_2D_array(int argc, char *argv[]) {
    int i;
    size_t size;
    char **tab = (char **) malloc(argc * sizeof(char *));

    if (tab == NULL) {
        fprintf(stderr, "Memory allocation error");
        return NULL;
    }

    for (i = 0; i < argc; i++) {
        size = len(argv[i]) * sizeof(char);
        tab[i] = (char *) malloc(size);

        if (tab[i] == NULL) {
            fprintf(stderr, "Memory allocation error, %d", i);
            return NULL;
        }

        memcpy(tab[i], argv[i], size);
    }

    return tab;
}

/**
 * Print the given array
 *
 * @param array
 * @param size
 */
void print_2D_array(char *array[], int size_row) {
    int i;
    for (i = 0; i < size_row; i++) {
        printf("arg[%d] : %s ", i, array[i]);
        printf("\n");
    }
}

void fill_array(char *tab[], int argc, char *argv[]) {
    int i;
    for (i = 0; i < argc; i++) {
        tab[i] = argv[i];
    }
}

/**
 * free a 2d array
 *
 * @param array
 */
void free_2D_array(char **array, int size) {
    int i;

    for (i = 0; i < size; i++) {
        free(array[i]);
    }

    free(array);
}


int main(int argc, char *argv[]) {
    char **tab = allocate_and_fill_2D_array(argc, argv);

    print_2D_array(tab, argc);

    free_2D_array(tab, argc);

    return 0;
}
