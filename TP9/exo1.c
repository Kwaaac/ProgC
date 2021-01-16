#include <stdio.h>
#include <stdlib.h>

/**
 * allocate an array
 *
 * @param size
 * @return
 */
int *allocate_array(int size) {
    int *tab = (int *) malloc(size * sizeof(int));

    if (tab == NULL) {
        fprintf(stderr, "Memory allocation error");
        return NULL;
    }

    return tab;
}

/**
 * Fill the given array
 *
 * @param array
 * @param size
 */
void fill_array(int *array, int size) {
    int i;
    for (i = 1; i <= size; i++) {
        array[i-1] = i;
    }
}

/**
 * Print the given array
 *
 * @param array
 * @param size
 */
void print_array(int *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d\n", array[i]);
        } else {
            printf("%d ", array[i]);
        }
    }
}

void print_info_zone(void *adr) {
    size_t* info_adr = (size_t *)adr;

    printf("Zone a l'adresse hexa : %p\n", adr);

    printf("%lu \n", info_adr[-1]);

    printf("%lu \n", info_adr[-2]);
}

int main(int argc, char *argv[]) {
    int size = atoi(argv[1]);
    int *tab = allocate_array(size);
    int *tab2 = allocate_array(size + 5);

    fill_array(tab, size);
    fill_array(tab2, size + 5);

    print_array(tab, size);
    print_array(tab2, size + 5);

    print_info_zone(tab);
    print_info_zone(tab2);

    free(tab);
    print_info_zone(tab2);

    print_info_zone(tab);
    print_info_zone(tab2);

    return 0;
}
