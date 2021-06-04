#include <stdlib.h>


void swap_memory(void *z1, void *z2, size_t size) {
    char tmp;
    size_t i;

    char *mem1 = z1;
    char *mem2 = z2;

    for (i = 0; i < size; i++) {
        tmp = mem1[i];
        mem1[i] = mem2[i];
        mem2[i] = tmp;
    }
}

