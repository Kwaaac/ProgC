#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "../../lib/read.h"

/**
 * If an error is given (0), print a message for the user
 */
int read_error_handler(int err) {
    if (err == 0) {
        printf("Il y a une erreur de saisie, veuillez recommencer.\n");
    }

    return err;
}

/**
 * Read user input and tell the user if anything failed
 *
 * @param number Pointer by reference to the number
 */
void read_user_input(int *number) {
    int check;
    do {
        check = read_error_handler(read_int(number));
    } while (check == 0);
}

/**
 * Check if the number given is correct and give info to the user
 *
 * @param p_nsecret secret number
 * @param p_nuser user number
 * @return 1 if the user found the number, 0 otherwise
 */
int is_number_found(int p_nsecret, int p_nuser) {
    if (p_nsecret < p_nuser) {
        printf("Votre nombre est trop grand\n");
        return 0;
    } else if (p_nsecret > p_nuser) {
        printf("Votre nombre est trop petit\n");
        return 0;
    }

    printf("Bravo vous avez gagné !\n");
    return 1;
}

/**
 * Première ébauche de mon utilisation horrible des pointeur, au moins, je sais que j'ai progressé
 * Mais à quel prix...
 */
int old_main_horrible(int argc, char *argv[]) {
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
    printf("ALED\n");

    *p_nsecret = rand() % (*p_max_limit)++;

    printf("Essayer de le retrouver: ");
    do {
        read_user_input(p_nuser);
        win = is_number_found(*p_nsecret, *p_nuser);
    } while (win == 0);

    return 0;
}


int main(int argc, char *argv[]) {
    int win;

    int *number_secret = (int *) malloc(sizeof(int));
    int *max_limit = (int *) malloc(sizeof(int));
    int *number_user = (int *) malloc(sizeof(int));

    /* Init random number generator */
    srand(time(NULL));

    printf("Entrez la limite maximale du nombre secret : ");
    read_user_input(max_limit);

    *number_secret = rand() % (*max_limit)++;

    printf("\nEssayez de le retrouver: ");
    do {
        read_user_input(number_user);
        win = is_number_found(*number_secret, *number_user);
    } while (win == 0);

    free(number_secret);
    free(max_limit);
    free(number_user);

    return 0;
}