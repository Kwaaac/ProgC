#include "listorder.h"

Cell* allocate_cell(char* first, char* last, int age){
    Cell* cell = (Cell*) malloc(sizeof(Cell));

    cell->first_name = first;
    cell->last_name = last;
    cell->age = age;

    return cell;
}

void free_list(List list){

}

void print_cell(Cell* cell){
    printf("Last Name: %s, ", cell->last_name);
    printf("First Name: %s, ", cell->first_name);
    printf("Age: %d yrs\n", cell->age);
}

void print_list(List list){
    if(list->next == NULL){
        print_cell(list);
    }

    print_list(list->next);
}


int main() {
    printf("Hello, World!\n");
    return 0;
}
