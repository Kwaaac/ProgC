#define MAX_READ 100

#include "in_out.h"

int fread_list(const char *file, List *list) {
    FILE *f;
    Cell *cell;

    char str[MAX_READ];
    char tmp[MAX_READ];

    char *first, *last;
    int age;

    f = fopen(file, "r");
    if (f == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier %s\n", file);
        return 0;
    }

    while (fgets(str, MAX_READ, f) != NULL) {
        strcpy(tmp, str);

        first = strtok(tmp, " ");
        last = strtok(NULL, " ");
        age = atoi(strtok(NULL, " "));

        cell = allocate_cell(first, last, age);

        ordered_insertion(list, cell, compare_age_then_name);
    }
    fclose(f);
    return 0;
}
