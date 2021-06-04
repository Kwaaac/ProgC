#ifndef TP10_LISTORDER_H
#define TP10_LISTORDER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct cell{
    char* first_name;
    char* last_name;
    int age;
    struct cell* next;
}Cell;

/**
 * Allocate a new cell
 */
Cell* allocate_cell(char* first, char* last, int age);

/*
 * Cell age comparator
 */
int age_order(Cell* p1, Cell* p2);

/**
 * Cell names comparator
 * @param p1
 * @param p2
 * @return
 */
int name_order(Cell*p1, Cell* p2);

Cell *ordered_insertion(Cell *list, Cell* new, int order_func(Cell*, Cell*));

int compare_age_then_name(Cell *p1, Cell *p2);

int compare_name_then_age(Cell *p1, Cell *p2);

/* Prints every cell of the list */
void print_list(Cell* list);

/* Print the cell */
void print_cell(Cell* cell);

/* Free the whole list */
void free_list(Cell* list);

#endif /*TP10_LISTORDER_H*/
