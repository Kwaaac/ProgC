#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"

/* An empty main to test the compilation of the allocation and free
   functions. */
int main(int argc, char *argv[]) {

    srand(time(NULL));

    /*
    int* first = allocate_integer_array(4);
    int* second = allocate_integer_array(4);

    first[0] = 1;
    first[1] = 2;
    first[2] = 3;
    first[3] = 3;
    first[4] = -1;

    second[0] = 3;
    second[1] = 4;
    second[2] = 5;
    second[3] = 5;
    second[4] = -1;

    int* res;

    print_array(first);
    print_array(second);

    res = merge_sorted_arrays(first, second);

    print_array(res);

    */

    int *res = random_array(20, 100);

    print_array(res);

    res = merge_sort(res);

    printf(" \n\n");
    print_array(res);
    printf("%d", array_size(res));

    free_integer_array(res);

    return 0;
}
