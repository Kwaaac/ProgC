#ifndef CELL_H
#define CELL_H

typedef struct _cell {
    char* first_name;
    char* last_name;
    int age;
    struct _cell* next;
} Cell, *List;

/**
 * Return the age order between two cells
 * @param p1 a cell
 * @param p2 another cell
 * @return -1 if p1 is younger than p2, 1 if p2 is younger than p1, 0 otherwhise 
*/
int age_order(Cell* p1, Cell* p2);

/**
 * Create a cell and allocate it
 * @param first the first name of the cell
 * @param lasr the lasr name of the cell
 * @param age the age of the cell
 * @return the cell
*/
Cell* allocate_cell(char* first, char* last, int age);

/**
 * Free the memory allocated by a list
 * @param l the list to free
*/
void free_list(List l);

/**
 * Return the alphabetical order between two cells
 * @param p1 a cell
 * @param p2 another cell
 * @return -1 if p1 is before p2 on the alphaber, 1 if p2 is before p1, 0 otherwhise 
*/
int name_order(Cell* p1, Cell* p2);

/**
 * Insert a cell in a list with a specific function
 * @param l a pointer to a list
 * @param new_cell the cell to add 
 * @param order_func the comparing function
*/
void ordered_insertion(List* l, Cell* new_cell, int order_func(Cell*, Cell*));

/**
 * Print a cell
 * @param c a cell to print
*/
void print_cell(Cell* c);

/**
 * Print a list
 * @param l a list to print
 */
void print_list(List l);

#endif