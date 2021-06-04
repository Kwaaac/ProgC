/*! \file listorder.h
    \brief File that implement \headerfile listorder.h
*/
#include <assert.h>
#include "listorder.h"
#include "in_out.h"

Cell *allocate_cell(char *first, char *last, int age) {
    Cell *cell = (Cell *) calloc(1, sizeof(Cell));
    assert(cell != NULL);

    cell->first_name = (char *) malloc((strlen(first) + 1) * sizeof(char));
    strcpy(cell->first_name, first);

    cell->last_name = (char *) malloc((strlen(last) + 1) * sizeof(char));
    strcpy(cell->last_name, last);

    cell->age = age;

    return cell;
}

int age_order(Cell *p1, Cell *p2) {
    if (p1->age < p2->age) {
        return -1;
    } else if (p1->age > p2->age) {
        return 1;
    }

    return 0;
}

int name_order(Cell *p1, Cell *p2) {
    int res = strcmp(p1->last_name, p2->last_name);

    if (!res) {
        return strcmp(p1->first_name, p2->first_name);
    }

    return res;
}

int compare_age_then_name(Cell *p1, Cell *p2) {
    int res = age_order(p1, p2);

    if (!res) {
        return name_order(p1, p2);
    }

    return res;
}

int compare_name_then_age(Cell *p1, Cell *p2) {
    int res = name_order(p1, p2);

    if (!res) {
        return age_order(p1, p2);
    }

    return res;
}


void ordered_insertion(List *list, Cell *new, int order_func(Cell *, Cell *)) {
    Cell *pred;

    if ((*list) == NULL) {
        *list = new;
        return;
    }

    if (order_func((*list), new) > 0) {
        new->next = (*list);
        (*list) = new;
        return;
    }

    /* We catch the the good position of our new element in the list */
    for (pred = (*list);
         pred->next != NULL && !(order_func(pred, new) <= 0 && order_func(pred->next, new) >= 0); pred = pred->next);

    new->next = pred->next;
    pred->next = new;
}

void free_list(List list) {
    if (list->next != NULL) {
        free_list(list->next);
    }

    free(list->last_name);
    free(list->first_name);
    free(list);
}

void print_cell(Cell *cell) {
    printf("Last Name: %s, ", cell->last_name);
    printf("First Name: %s, ", cell->first_name);
    printf("Age: %d yrs\n", cell->age);
}

void print_list(List list) {
    Cell *ptr = list;

    if (ptr == NULL) {
        return;
    }

    print_cell(ptr);

    if (ptr->next != NULL) {
        print_list(ptr->next);
    }
}

int main(int argc, char *argv[]) {
    List list = NULL;

    if(argc < 1){
        printf("Missing file arguments");
        return 1;
    }

    fread_list(argv[1], &list);

    print_list(list);

    free_list(list);

    return 0;
}
