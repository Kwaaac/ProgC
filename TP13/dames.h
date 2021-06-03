#ifndef TP13_DAMES_H
#define TP13_DAMES_H
#define BOARD_LENGTH CHAR_BIT * 8 - 1

void print_bord_command_line(unsigned long int n);

void set_cells_queen(unsigned long int *n, int queens[], int *queen_size, int x, int y);

int is_bord_full(unsigned long int n);

/**
 * Inform if the queen can be placed at the given coordinates
 *
 * @param n The board
 * @param x The row of the coordinates
 * @param y The column of the coordinates
 * @return 1 if the queen can be placed, 0 otherwise
 */
int is_queen_placeable(unsigned long int n, int x, int y);


#endif /*TP13_DAMES_H*/
