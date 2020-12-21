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
 * @return An empty array or NULL in case of an error
 * @error If the size of the array is negative or the malloc fail, an error is raised and return value is NULL
 */
int *allocate_integer_array(int size) {
    int *new_tab;

    if (size <= 0) {
        fprintf(stderr, "The size of an array should not be negative nor empty\n");
        return NULL;
    }

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

    if(size == 0){
        printf("This array is empty");
        return;
    }

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

    push_array(copy, array, 0, 0, size);

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

    /* Ask for the user the size of the array.
         * If the user gives a non int input or the allocation causes an error,
         * the user must give a new number*/
    while (1) {
        printf("Write the size of the array: ");

        /* Input error handling */
        if (read_int(&size)) {
            printf("Input error, please reiterate\n");
            continue;
        }

        array = allocate_integer_array(size);

        /* allocation error handling */
        if (array == NULL) {
            printf("The previous error happened, please reiterate.\n");
            continue;
        }

        break;
    }


    while (i < size) {
        printf("Give an element to push into the array: ");

        if (read_int(&input)) {
            printf("Input error, please reiterate\n");
            continue;
        }

        if(input < 0){
            printf("The elements must be positive, please reiterate\n");
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
 * @error Return NULL if the size is lower or equal to 0
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

    /* Add elements in the array by sorting them by their size
     * Quit the loop when one the two arrays are empty          */
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

    /* Depending on which array is empty, we push the non-empty array into the result array */
    if (first[firstIndex] == -1) {
        push_array(array_res, second, i, secondIndex, size_second);

    } else {
        push_array(array_res, first, i, firstIndex, size_first);

    }

    return array_res;
}

/**
 * Split an array into two different arrays.
 * Note that on an odd array, the first array will be larger
 *
 * @param array The array you want to split
 * @param first The first array
 * @param second The second array
 */
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

/**
 * Apply the recursive merge sort algorithm to sort the given array.
 * Uses a debug mode
 *
 * @param array The array you need to sort
 * @return The array sorted
 */
int *merge_sort(int *array) {
    int *first;
    int *second;

    if (array_size(array) <= 1)return array;

    split_arrays(array, &first, &second);

    return merge_sorted_arrays(merge_sort(first), merge_sort(second));
}
