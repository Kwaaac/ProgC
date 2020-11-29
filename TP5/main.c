#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"

/* An empty main to test the compilation of the allocation and free
   functions. */
int main(int argc, char *argv[]) {
    int *res;
    srand(time(NULL));

    res = random_array(20, 100);

    print_array(res);

    res = merge_sort(res);

    printf(" \n\n");
    print_array(res);
    printf("%d", array_size(res));

    free_integer_array(res);

    return 0;
}
