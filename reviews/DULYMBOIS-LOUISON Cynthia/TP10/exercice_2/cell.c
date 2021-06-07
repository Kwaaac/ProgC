#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cell.h"

int age_order(Cell *p1, Cell *p2)
{
    if (p1->age < p2->age ||
        (p1->age == p2->age && strcmp(p1->last_name, p2->last_name) < 0) ||
        (p1->age == p2->age && strcmp(p1->last_name, p2->last_name) == 0 && strcmp(p1->first_name, p2->first_name) < 0))
        return -1;
    else if (p1->age > p2->age ||
             (p1->age == p2->age && strcmp(p1->last_name, p2->last_name) > 0) ||
             (p1->age == p2->age && strcmp(p1->last_name, p2->last_name) == 0 && strcmp(p1->first_name, p2->first_name) > 0))
        return 1;

    return 0;
}

Cell *allocate_cell(char *first, char *last, int age)
{
    Cell *cell = malloc(sizeof(Cell));

    cell->first_name =  (char *) malloc((strlen(first) + 1) * sizeof(char));
    strcpy(cell->first_name, first);

    cell->last_name =  (char *) malloc((strlen(last) + 1) * sizeof(char));
    strcpy(cell->last_name, last);

    cell->age = age;
    cell->next = NULL;

    return cell;
}

void free_list(List l)
{
    if (l != NULL) {
        free_list(l->next);
        if (l->first_name != NULL)
            free(l->first_name);
        if (l->last_name != NULL)
            free(l->last_name);
        free(l);
    }
}

int name_order(Cell *p1, Cell *p2)
{
    if (strcmp(p1->last_name, p2->last_name) < 0 ||
        (strcmp(p1->last_name, p2->last_name) == 0 && strcmp(p1->first_name, p2->first_name) < 0) ||
        (strcmp(p1->last_name, p2->last_name) == 0 && strcmp(p1->first_name, p2->first_name) == 0 && p1->age < p2->age))
        return -1;
    else if (strcmp(p1->last_name, p2->last_name) > 0 ||
             (strcmp(p1->last_name, p2->last_name) == 0 && strcmp(p1->first_name, p2->first_name) > 0) ||
             (strcmp(p1->last_name, p2->last_name) == 0 && strcmp(p1->first_name, p2->first_name) == 0 && p1->age > p2->age))
        return 1;

    return 0;
}

void ordered_insertion(List *l, Cell *new_cell, int order_func(Cell *, Cell *))
{
    Cell *ptr = *l;
    Cell *before = NULL;

    if (*l == NULL)
        *l = new_cell;
    else
    {
        while (ptr != NULL && order_func(ptr, new_cell) <= 0)
        {
            before = ptr;
            ptr = ptr->next;
        }

        if (before == NULL)
        {
            new_cell->next = ptr;
            *l = new_cell;
        }
        else
        {
            before->next = new_cell;
            new_cell->next = ptr;
        }
    }
}

void print_cell(Cell *c)
{
    printf("%s %s : %d ans\n", c->last_name, c->first_name, c->age);
}

void print_list(List l)
{
    if (l == NULL)
        return;
    print_cell(l);

    print_list(l->next);
}