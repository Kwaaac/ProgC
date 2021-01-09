#ifndef THREETOPUSH_MODEL_H
#define THREETOPUSH_MODEL_H

#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

typedef enum couleur {
    ROUGE,
    VERT,
    BLEU,
    JAUNE
} Couleur;
typedef enum forme {
    CERCLE,
    CARRE,
    TRIANGLE,
    DIAMANT
} Forme;

typedef struct token {
    Couleur couleur;
    Forme forme;

    struct token *suivant;

    struct token *suivant_couleur;
    struct token *precedent_couleur;
    struct token *suivant_forme;
    struct token *precedent_forme;
} Tokens;

typedef struct list_token {
    int length;
    Tokens *last_element;
} Liste;


void print_liste(Liste liste);

int equals_tokens(Tokens *first, Tokens *second);

Tokens *pop(Liste *liste);

void pop_and_free(Liste *liste);

Tokens *remove_token(Liste *liste);

void remove_and_free(Liste *liste);

int check_pop(Liste* liste);

int check_remove(Liste* liste);

char *get_color_name_from_enum(Couleur couleur);

char *get_form_name_from_enum(Forme forme);

Tokens *allouer_token(Couleur couleur, Forme forme);

void free_liste(Liste* liste);

int push(Liste *liste, Tokens *token);

int append(Liste *liste, Tokens *token);

Liste *allouer_liste();

Tokens *get_random_token();

#endif /*THREETOPUSH_MODEL_H*/
