#include <stdio.h>

#include "sudoku.h"
#include "in_out.h"

int main(int argc, char *argv[]) {
    Board B;
    int res;

    res = 0;

    fread_board(argv[1], B);

    print_board(B);
    solve_grid(B, 9);
    number_of_solving_grid(B, 9, &res);
    printf("For grid %s, there is %d solutions\n", argv[1], res);


    return 0;
}
