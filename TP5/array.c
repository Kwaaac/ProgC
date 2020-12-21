#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include "../lib/read.h"
#include "array.h"

/**
 * Allocate memory for an array which can contain `size`
   integers. The returned C array has memory for an extra last
   integer labelling the end of the array.
 *
 * @param size Size of the allocated array
 * @return An empty array
 */
int *allocate_integer_array(int size) {
    int *new_tab;

    new_tab = (int *) malloc((size + 1) * sizeof(int));
    if (new_tab == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return NULL;
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

/**
 * Return the size of an array
 *
 * @param array An array
 * @return Size of the array
 */
int array_size(int *array) {
    int res = 0;
    while (array[res] != -1) {
        res++;
    }
    return res;
}

/**
 * Print an array on the standard output
 *
 * @param array An array to be printed
 */
void print_array(int *array) {
    int i;
    int size = array_size(array);

    for (i = 0; i < size; i++) {
        if (i == (size - 1)) {
            printf("%d.", array[i]);
        } else {
            printf("%d-", array[i]);
        }

    }

    printf("\n");
}

/**
 * Check if the arrays are equals
 *
 * @param first First array
 * @param second Second array
 * @return 1 if the arrays are equals, 0 otherwise
 */
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

/**
 * Copy an array into a new allocated array
 *
 * @param array The array to be copied
 * @return A new allocated array with the elements of the parameter's array
 */
int *copy_array(int *array) {
    int size = array_size(array);
    int *copy = allocate_integer_array(size);

    int i;
    for (i = 0; i < size; i++) {
        copy[i] = array[i];
    }

    return copy;
}

/**
 * User base array creation.
 * Ask the user the size of the array, then ask for elements
 * to fill the array until the size is complete
 *
 * @return A new allocated array with the size and elements given
 * @error If the user gives a wrong type input (not int) for the size or the elements,
 * the program will ask the user to put an other input
 */
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

/**
 * Use pseudo-random generated numbers to fill an array of a delimited size and a delimited range of element between 0 and the given max element.
 *
 * @Warning Be sure to use srand before the use of this function
 * @param size Size of the array
 * @param max_entry Max element that can be generated
 * @return A new allocated array with the size given and pseudo-random elements
 *
 */
int *random_array(int size, int max_entry) {
    int i;
    int *array = allocate_integer_array(size + 1);

    for (i = 0; i < size; i++) {
        array[i] = (rand() % (max_entry + 1));
    }

    array[size] = -1;

    return array;
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

/**
 * Concat two arrays, first array's elements will be the first elements of the new array
 *
 * @param first First array
 * @param second Second array
 * @return A new allocated array being the concatenation of the two parameters
 */
int *concat_array(int *first, int *second) {
    int size_first = array_size(first);
    int size_second = array_size(second);

    int size_res = size_first + size_second;
    int *array_res = allocate_integer_array(size_res);

    /* I push the first array into the res array from 0 to size first*/
    push_array(array_res, first, 0, 0, size_first);

    /* I push the second array into the res array, however,
     * I start at size_first since it's the actual size of the res array*/
    push_array(array_res, second, size_first, 0, size_second);

    return array_res;
}

/**
 * Merge two sorted arrays
 *
 * @warning If your arrays are not sorted, it's your problem
 * @param first First array
 * @param second Second array
 * @return A new allocated array containing every element of the first and second array, sorted.
 */
int *merge_sorted_arrays(int *first, int *second) {
    int size_first = array_size(first);
    int size_second = array_size(second);

    int size_res = size_first + size_second;
    int *array_res = allocate_integer_array(size_res);

    int firstIndex = 0, secondIndex = 0, i = 0;

    /* Debug (defined var in array.h)*/
    if(DEBUG){
        printf("\nMerging: \n");
        print_array(first);
        print_array(second);
    }


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

    /* Debug (defined var in array.h)*/
    if(DEBUG) {
        print_array(array_res);
    }
    return array_res;
}

void split_arrays(int *array, int **first, int **second) {
    int size_array = array_size(array);
    int size_second = size_array / 2;
    int size_first = size_array - size_second;

    int *first_copy = allocate_integer_array(size_first);
    int *second_copy = allocate_integer_array(size_second);

    push_array(first_copy, array, 0, 0, size_first);
    push_array(second_copy, array, 0, size_first, size_array);

    *first = first_copy;
    *second = second_copy;

}

int *merge_sort(int *array) {
    int *first;
    int *second;

    if (array_size(array) <= 1)return array;

    /* Debug (defined var in array.h)*/
    if(DEBUG) {
        printf("Array: ");
        print_array(array);
    }

    split_arrays(array, &first, &second);

    /* Debug (defined var in array.h)*/
    if(DEBUG) {
        printf("First Array: ");
        print_array(first);
        printf("Second Array: ");
        print_array(second);

        printf("\n");
    }

    return merge_sorted_arrays(merge_sort(first), merge_sort(second));

}
