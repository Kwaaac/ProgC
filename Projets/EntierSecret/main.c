#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "read.h"

/**
 * Use this function with 
 */
int read_error_handler(int err) {
    if (err != 0) {
        printf("Il y a une erreur de saisie, veuillez recommencer.\n");
    }

    return err;
}

void read_user_input(int *number) {
    int check;
    do {
        check = read_error_handler(read_int(number));
    } while (check != 0);
}

int is_number_found(int *p_nsecret, int *p_nuser) {
    if (*p_nsecret < *p_nuser) {
        printf("Votre nombre est trop grand\n");
        return 1;
    } else if (*p_nsecret > *p_nuser) {
        printf("Votre nombre est trop petit\n");
        return 1;
    }

    printf("Bravo vous avez gagné !\n");
    return 0;
}


int main(int argc, char *argv[]) {
    int number_secret;
    int *p_nsecret = &number_secret;

    int max_limit;
    int *p_max_limit = &max_limit;

    int number_user;
    int *p_nuser = &number_user;

    int win;

    /* Init random number generator */
    srand(0);

    printf("Entrez la limite maximale du nombre secret : ");
    read_user_input(p_max_limit);

    *p_nsecret = rand() % (*p_max_limit)++;

    printf("Essayer de le retrouver: ");
    do {
        read_user_input(p_nuser);
        win = is_number_found(p_nsecret, p_nuser);
    } while (win != 0);

    return 0;
}