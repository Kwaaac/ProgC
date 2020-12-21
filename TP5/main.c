#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "array.h"

void test_create_negative_and_empty_array() {
    int *array;

    printf("\n\n========= TEST NEGATIVE ARRAY ========= \n\n");

    array = allocate_integer_array(-5);

    if (array == NULL) {
        printf("Exception relevée");
    }

    array = allocate_integer_array(0);
}

void test_fill_array() {
    int *array;

    printf("\n\n========= TEST FILL ARRAY ========= \n\n");

    array = fill_array();

    printf("Voici l'array que vous venez de créer: ");
    print_array(array);
    free_integer_array(array);
}

/**
 * Test method for equals arrays
 */
void test_arrays_equals() {
    int *array1;
    int *array2;

    printf("Donnez manuellement deux tableaux afin de comparer si ils sont égaux ou non.\n");

    array1 = fill_array();
    array2 = fill_array();

    printf("%s", are_arrays_equal(array1, array1) ? "Les tableaux sont egaux\n" : "Les tableaux ne sont pas égaux\n");

    free_integer_array(array1);
    free_integer_array(array2);
}

/**
 * Test method for an copied array
 */
void test_copy_array() {
    int *array;
    int *copy;
    int i;

    printf("\n\n========= TEST COPY ARRAY ========= \n\n");

    for (i = 0; i < 5; i++) {
        array = random_array(10, 50);
        copy = copy_array(array);

        printf("\narray: ");
        print_array(array);

        printf("\ncopy: ");
        print_array(copy);
        printf("\n");

        printf("%s", are_arrays_equal(array, copy) ? "Les tableaux sont egaux\n" : "Les tableaux ne sont pas égaux\n");
    }

    free_integer_array(array);
    free_integer_array(copy);
}

/*
 * Test method for the concatenations
 */
void test_concat_array() {
    int *array1;
    int *array2;

    printf("\n\n========= TEST CONCAT ARRAY ========= \n\n");

    array1 = random_array(5, 20);
    array2 = random_array(8, 15);

    printf("array1: ");
    print_array(array1);

    printf("\narray2: ");
    print_array(array2);
    printf("\n");

    print_array(concat_array(array1, array2));

    free_integer_array(array1);
    free_integer_array(array2);
}

/**
 * Test method of the merge sort
 */
void test_merge_sort() {
    int *res;

    printf("\n\n========= TEST MERGE SORT ========= \n\n");

    res = random_array(20, 100);


    print_array(res);

    printf("Size of the array %d\n", array_size(res));

    res = merge_sort(res);

    printf(" \n\n");
    print_array(res);
    printf("Size of the final array %d\n", array_size(res));

    free_integer_array(res);
}

/* An empty main to test the compilation of the allocation and free
   functions. */
int main(int argc, char *argv[]) {
    srand(time(NULL));

    printf("=============================");
    printf("\n========= TP5 TESTS =========\n");
    printf("=============================");

    test_create_negative_and_empty_array();

    test_copy_array();

    test_concat_array();

    test_merge_sort();

    if (argc > 1 && strcmp(argv[1], "-u") == 0) {
        test_arrays_equals();
    }

    return 0;
}
