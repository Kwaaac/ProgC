#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cell.h"

/* The maximum length for a word */
#define MAX_WORD_SIZE 100

int main(int argc, char const *argv[])
{
    Cell *c =  NULL;
    FILE *f;
    List l = NULL;
    char first_name[MAX_WORD_SIZE];
    char last_name[MAX_WORD_SIZE];
    int age;

    f =  fopen("liste_nom.txt", "r");

    if (f == NULL)
        exit(1);
    
    while (!feof(f))
    {
        /* Reafing the file */
        fscanf(f, " %s %s %d", first_name, last_name, &age);

        /* Creating a cell */
        c = allocate_cell(first_name, last_name, age);

        /* adding the cell to the list */
        ordered_insertion(&l, c, name_order);

    }

    print_list(l);
    free_list(l);
    fclose(f);

    return 0;
}
