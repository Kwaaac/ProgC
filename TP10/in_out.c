#define MAX_READ 100

#include "in_out.h"

int fread_list(const char *file, List *list, const char *delimiter) {
    FILE *f;
    Cell *cell;

    char str[MAX_READ];

    char *first, *last;
    int age;

    f = fopen(file, "r");
    if (f == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier %s\n", file);
        exit(0);
    }

    while (fgets(str, MAX_READ, f) != NULL) {

        first = strtok(str, delimiter);
        last = strtok(NULL, delimiter);
        age = atoi(strtok(NULL, delimiter));

        cell = allocate_cell(first, last, age);

        ordered_insertion(list, cell, compare_age_then_name);
    }
    fclose(f);
    return 0;
}
