#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"


void test_concat_array(){
    printf("\n\n========= TEST CONCAT ARRAY========= \n\n");
    int* array1;
    int* array2;

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

void test_merge_sort(){
    printf("\n\n========= TEST MERGE SORT========= \n\n");

    int *res;

    res = random_array(20, 100);

    print_array(res);

    res = merge_sort(res);

    printf(" \n\n");
    print_array(res);
    printf("%d", array_size(res));

    free_integer_array(res);
}

/* An empty main to test the compilation of the allocation and free
   functions. */
int main(int argc, char *argv[]) {
    srand(time(NULL));

    test_concat_array();

    test_merge_sort();

    return 0;
}
