/*
 * Created by maxro on 08/11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

#include "read.h"

/* function that clear the stdin buffer */
void clear_buffer() {
    int c = 0;

    /* iteration on the buffer */
    while (c != '\n' && c != EOF) {
        c = getchar();
    }
}

/**
 * @param input array to store the input
 * @param size size of the array
 * @return Return 0 if the function doesn't have any errors, 1 otherwise
 */
int read_input(char *input, int size) {

    if (fgets(input, size, stdin) != NULL) {
        if (strchr(input, '\n') == NULL) {
            clear_buffer();
        }

        return 0;
    } else {
        clear_buffer();
        return 1;
    }
}

/**
 *  Read the standard input and convert it to an integer
 *
 * @param res pointer pointing to the result
 * @return 1 if no errors, 0 otherwise
 */
int read_int(int *res) {
    long verif;
    char *endptr;
    char input[100];

    if (read_input(input, 100) == 0) {
        errno = 0;
        verif = strtol(input, &endptr, 10);

        /*
         * ERANGE && (LONG_MAX || LONG_MIN) --> The user's input is creating an overflow or an underflow
         * errno != 0 && verif == 0 --> verif == 0 if an error happen during the reading,
         *                              the errno make sure it's an error and not the user who put '0'
         * strlen(endptr) != 0 --> We do not want any char inside the input
         */
        if ((errno == ERANGE && (verif == INT_MAX || verif == INT_MIN)) || (errno != 0 && verif == 0) ||
            strlen(endptr) != 0) {
            return 0;
        }

        *res = (int) verif;

        return 1;
    }
    return 1;
}
