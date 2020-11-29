#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include "read.h"
#include "library.h"

/* Allocate memory for an array which can contain `size`
   integers. The returned C array has memory for an extra last
   integer labelling the end of the array. */
int *allocate_integer_array(int size) {
    int *new_tab;

    new_tab = (int *) malloc((size + 1) * sizeof(int));
    if (new_tab == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return NULL;
    }
    return new_tab;
}

/* Free an integer array */
void free_integer_array(int *tab) {
    free(tab);
}

/* Return the size of an array */
int array_size(int *array) {
    int res = 0;
    while (array[res] != -1) {
        res++;
    }
    return res;
}

/* Print an array on the standard output*/
void print_array(int *array) {
    int i;
    int size = array_size(array);

    for (i = 0; i < size; i++) {
        if(i == (size - 1)){
            printf("%d.", array[i]);
        } else{
            printf("%d-", array[i]);
        }

    }

    printf("\n");
}

int are_arrays_equal(int *first, int *second) {
    int i;
    int size_first = array_size(first);
    int size_second = array_size(second);

    if (size_first != size_second) return 0;

    for (i = 0; i < size_first; i++) {
        if (first[i] != second[i]) return 0;
    }

    return 1;
}

int *copy_array(int *array) {
    int size = array_size(array);
    int *copy = allocate_integer_array(size);

    int i;
    for (i = 0; i < size; i++) {
        copy[i] = array[i];
    }

    return copy;
}

int *fill_array(void) {

    int *array;
    int size;
    int input;

    int i = 0;


    do {
        printf("Veuillez donner la taille de votre tableaux: ");
    } while (read_int(&size));

    array = allocate_integer_array(size);

    while (i < size) {
        printf("Donnez un nombre à ajouter: ");

        if (read_int(&input)) {
            printf("Erreur de saisie, veuillez réitérer.\n");
            continue;
        }

        array[i] = input;

        i++;
    }

    array[i] = -1;

    return array;
}

int *random_array(int size, int max_entry) {
    int i;
    int *array = allocate_integer_array(size + 1);

    for (i = 0; i < size; i++) {
        array[i] = (rand() % (max_entry + 1));
    }

    array[size] = -1;

    return array;
}

int *concat_array(int *first, int *second) {
    int size_first = array_size(first);
    int size_second = array_size(second);

    int size_res = size_first + size_second;
    int *array_res = allocate_integer_array(size_res);

    int i = 0, j;
    for (; i < size_first; i++) {
        array_res[i] = first[i];
    }

    for (j = 0; i < size_res; i++, j++) {
        array_res[i] = second[j];
    }
    array_res[i] = -1;

    return array_res;
}

/**
 * Push the second array into the first
 *
 * @param first First array
 * @param second Second array
 * @param first_index Starting index to fill the first array
 * @param second_index Starting index to push from the second array
 * @param size_second Size of the second array
 */
void push_array(int *first, int *second, int first_index, int second_index, int size_second) {
    int i;
    for (i = second_index; i < size_second; i++, first_index++) {
        first[first_index] = second[i];
    }

    first[first_index] = -1;
}

int *merge_sorted_arrays(int *first, int *second) {
    int size_first = array_size(first);
    int size_second = array_size(second);

    int size_res = size_first + size_second;
    int *array_res = allocate_integer_array(size_res);

    int firstIndex = 0, secondIndex = 0, i = 0;

    if(size_first == 3 && size_second == 3){
        printf("\n check \n");
    }
    printf("\nMerging: \n");
    print_array(first);
    print_array(second);

    while (first[firstIndex] != -1 && second[secondIndex] != -1) {

        if (first[firstIndex] < second[secondIndex]) {
            array_res[i] = first[firstIndex];
            firstIndex++;
        } else {
            array_res[i] = second[secondIndex];
            secondIndex++;
        }

        i++;
    }

    if (first[firstIndex] == -1) {
        push_array(array_res, second, i, secondIndex, size_second);

    } else {
        push_array(array_res, first, i, firstIndex, size_first);

    }



    print_array(array_res);

    return array_res;
}

void split_arrays(int *array, int **first, int **second) {
    int i, j;
    int size_array = array_size(array);
    int size_second = size_array / 2;
    int size_first = size_array - size_second;

    int *first_copy = allocate_integer_array(size_first);
    int *second_copy = allocate_integer_array(size_second);

    for (i = 0; i < size_first; i++) {
        first_copy[i] = array[i];

    }
    first_copy[i] = -1;

    push_array(second_copy, array, 0, i, size_array);

    *first = first_copy;
    *second = second_copy;

}

int *merge_sort(int *array) {
    int *first;
    int *second;

    if (array_size(array) <= 1)return array;

    printf("Array: ");
    print_array(array);

    split_arrays(array, &first, &second);

    printf("First Array: ");
    print_array(first);
    printf("Second Array: ");
    print_array(second);

    printf("\n");

    return merge_sorted_arrays(merge_sort(first), merge_sort(second));

}
