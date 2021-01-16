#include <stdio.h>
#include <stdlib.h>

/**
 * allocate a 2D array
 *
 * @param size
 * @return
 */
int **allocate_2D_array(int size_row, int size_column) {
    int i;
    int **tab = (int **) malloc(size_row * sizeof(int*));

    if (tab == NULL) {
        fprintf(stderr, "Memory allocation error");
        return NULL;
    }

    for (i = 0; i < size_row; i++) {
        tab[i] = (int *) malloc(size_column * sizeof(int));

        if (tab[i] == NULL) {
            fprintf(stderr, "Memory allocation error");
            return NULL;
        }
    }

    return tab;
}

/**
 * Fill the given array
 *
 * @param array
 * @param size
 */
void fill_2D_array(int **array, int size_row, int size_column) {
    int i, j;
    for(i = 0; i < size_row; i++){
        for(j = 0; j < size_column; j++){
            array[i][j] = (j + i) % 26 + 'a';
        }
    }
}

/**
 * Print the given array
 *
 * @param array
 * @param size
 */
void print_2D_array(int *array[], int size_row, int size_column) {
    int i, j;
    for (i = 0; i < size_row; i++) {
        for (j = 0; j < size_column; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

/**
 * free a 2d array
 *
 * @param array
 */
void free_2D_array(int *array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        free(array[i]);
    }

    free(array);
}

int main(int argc, char *argv[]) {
    int input, size_row, size_column;

    printf("Donner la taille des lignes du tableau: ");
    scanf("%d", &input);
    size_row = input;

    printf("\nDonner la taille des colonnes du tableau: ");
    scanf("%d", &input);
    size_column = input;

    int **tab = allocate_2D_array(size_row, size_column);

    fill_2D_array(tab, size_row, size_column);

    print_2D_array(tab, size_row, size_column);

    free_2D_array(tab, size_row);
    return 0;
}
