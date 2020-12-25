#include <stdio.h>
#include <stdlib.h>
#include "array.h"

/**
 * Allocate memory for an array which can contain `size`
   integers. The returned C array has memory for an extra last
   integer labelling the end of the array.
 *
 * @param size Size of the allocated array
 * @return An empty array or NULL in case of an error
 * @error If the size of the array is negative or the malloc fail, an error is raised and return value is NULL
 */
int *allocate_integer_array(int size) {
    int i = 0;
    int *new_tab;

    if (size <= 0) {
        fprintf(stderr, "The size of an array should not be negative nor empty\n");
        return NULL;
    }

    new_tab = (int *) malloc((size) * sizeof(int));
    if (new_tab == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return NULL;
    }

    for (i = 0; i < size; i++) {
        new_tab[i] = 0;
    }

    return new_tab;
}

/**
 * Free an integer array
 * @param tab Array
 */
void free_integer_array(int *tab) {
    free(tab);
}

void print_array_permutation(int array[], int current, int size) {
    int i;

    /* When we are permuting we indent depending of the current index */
    for (i = 0; i < current; i++) {
        printf("\t");
    }

    /* if not printing the original array, we print an arrow to specify it */
    if (i != 0) { printf("--> ["); }
    else { printf("["); }

    /* Printing the array */
    for (i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d]\n", array[i]);
            return;
        }

        printf("%d, ", array[i]);
    }
}

/**
 * Gives every permutations of an array recursively
 *
 * @warning Needs an array which every element is 0
 * @param buffer An array
 * @param current The current element of the array
 * @param max The max element of the permutations
 */
void permutations(int buffer[], int current, int max) {
    int i;
    if (current > max) {
        print_array_permutation(buffer, 1, max);
        return;
    }

    for (i = 0; i < max; i++) {
        if(buffer[i] == 0){
            buffer[i] = current;
            /*Print every permutation*/
            /*print_array_permutation(buffer, current, max);*/
            permutations(buffer, current + 1, max);
            buffer[i] = 0;
        }
    }
}

int main() {
    int *t;

    t = allocate_integer_array(9);
    print_array_permutation(t, 0, 9);

    permutations(t, 1, 9);

    free_integer_array(t);

    return 0;
}
