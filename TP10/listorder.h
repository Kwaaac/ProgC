#ifndef TP10_LISTORDER_H
#define TP10_LISTORDER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    char* first_name;
    char* last_name;
    int age;
    struct cell* next;
}Cell, *List;

Cell* allocate_cell(char* first, char* last, int age);

int age_order(Cell* p1, Cell* p2);

int name_order(Cell*p1, Cell* p2);

void ordered_insertion(List* list, Cell* new, int order_func(Cell*, Cell*));

void print_list(List list);

void print_cell(Cell* cell);

void free_list(List list);

#endif //TP10_LISTORDER_H
