#include "listorder.h"
#include "in_out.h"

Cell *allocate_cell(char *first, char *last, int age) {
    Cell *cell = (Cell *) malloc(sizeof(Cell));

    cell->first_name = first;
    cell->last_name = last;
    cell->age = age;

    printf("%s, %s, %d\n", first, last, age);

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

    if (*list == NULL) {
        *list = new;
        return;
    }

    pred = *list;

    if (pred->next == NULL) {
        if (order_func(pred, new) < 0) {
            new->next = pred;
            *list = new;
        } else {
            pred->next = new;
        }
    } else {
        ordered_insertion(list, new, order_func);
    }
}

void free_list(List list) {
    if (list->next != NULL) {
        free_list(list->next);
    }
    free(list);
}

void print_cell(Cell *cell) {
    printf("Last Name: %s, ", cell->last_name);
    printf("First Name: %s, ", cell->first_name);
    printf("Age: %d yrs\n", cell->age);
}

void print_list(List list) {
    if (list != NULL) {
        print_cell(list);
    }

    if (list->next != NULL) {
        print_list(list->next);
    }
}

int main() {
    List list = NULL;

    fread_list("../liste_nom.txt", list);

    return 0;
}
