#define MAX_READ 100

#include "in_out.h"


void read_line(char *line, char **first, char **last, int *age) {
    int i, j;
    char *first_copy = NULL;
    char *last_copy = NULL;
    char *age_copy = NULL;

    /* first name */
    for (i = 0; line[i] != ' '; i++) {
        first_copy[i] = line[i];
    }
    first_copy[i] = '\0';

    /* last name */
    for (j = 0; line[i] != ' '; i++) {
        last_copy[j] = line[i];
    }
    last_copy[i] = '\0';


    /* age */
    for (j = 0; line[i] != ' '; i++) {
        age_copy[j] = line[i];
    }
    age_copy[i] = '\0';

    *first = first_copy;
    *last = last_copy;
    *age = atoi(age_copy);

}

int fread_list(const char *file, List list) {
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

        print_cell(cell);

        ordered_insertion(&list, cell, compare_age_then_name);

        print_cell(cell);

    }


    return 0;
}
