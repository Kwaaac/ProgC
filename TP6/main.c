#include <stdio.h>
#include <stdlib.h>
#include "stack_height.h"

int main(int argc, char *argv[]) {
    int i;

    if (argc != 2) {
        fprintf(stderr, "Nope, I need one positive integer in argument to work properly.\n");
    }

    stack_adr(atoi(argv[1]), &i, &i);

    return 0;
}
