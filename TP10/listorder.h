/*! \file listorder.h
    \brief File that contains the methods associated with the chained list and the comparison of it's elements
*/

#ifndef TP10_LISTORDER_H
#define TP10_LISTORDER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct cell {
    char *first_name;
    char *last_name;
    int age;
    struct cell *next;
} Cell, *List;

/**
 * Allocate a new cell
 *
 * @param first Fist name of the cell
 * @param last Last name of the cell
 * @param age Age of the cell
 * @return A new allocation cell
 */
Cell *allocate_cell(char *first, char *last, int age);

/**
 * Compare the age between two cells
 * @param p1 The first cell
 * @param p2 The second cell
 * @return -1 if p1 is inferior to p2 <br >
 *          0 if p1 is equal to p2 <br >
 *          1 if p1 is superior to p2 <br >
 */
int age_order(Cell *p1, Cell *p2);

/**
 * Compare the names between two cells
 * @param p1 The first cell
 * @param p2 The second cell
 * @return -1 if p1 is inferior to p2 <br >
 *          0 if p1 is equal to p2 <br >
 *          1 if p1 is superior to p2 <br >
 */
int name_order(Cell *p1, Cell *p2);

/**
 * Insert the new cell is the list depending of the odering funcion
 *
 * @param list A list of cells
 * @param new The new cell to be added
 * @param order_func The comparison function between two cells
 */
void ordered_insertion(List *list, Cell *new, int order_func(Cell *, Cell *));

/**
 * Comparison function, compare the age then the name of a cell
 *
 * @param p1 The first cell
 * @param p2 The second cell
 * @return -1 if p1 is inferior to p2 <br >
 *          0 if p1 is equal to p2 <br >
 *          1 if p1 is superior to p2 <br >
 */
int compare_age_then_name(Cell *p1, Cell *p2);

/**
 * Comparison function, compare the name then the age of a cell
 *
 * @param p1 The first cell
 * @param p2 The second cell
 * @return -1 if p1 is inferior to p2 <br >
 *          0 if p1 is equal to p2 <br >
 *          1 if p1 is superior to p2 <br >
 */
int compare_name_then_age(Cell *p1, Cell *p2);


/**
 * Prints every cell of the list
 *
 * @param list The given list
 */
void print_list(List list);

/**
 * Print a cell
 *
 * @param cell The given cell
 */
void print_cell(Cell *cell);

/**
 * Free the whole list
 *
 * @param list The list to be freed
 */
void free_list(List list);

#endif /*TP10_LISTORDER_H*/
