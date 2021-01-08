#include <search.h>
#include "model.h"


int equals_tokens(Tokens *first, Tokens *second) {
    return first == second &&
           first->couleur == second->couleur &&
           first->forme == second->forme &&
           first->suivant_couleur == second->suivant_couleur &&
           first->suivant_forme == second->suivant_forme &&
           first->precedent_couleur == second->precedent_couleur &&
           first->precedent_forme == second->precedent_forme;
}

void print_liste(Liste liste) {
    Tokens *token;

    if (liste.length <= 0) {
        return;
    }

    token = liste.last_element->suivant;


    while (!equals_tokens(token, liste.last_element)) {
        printf("%s, %s --> ", get_form_name_from_enum(token->forme), get_color_name_from_enum(token->couleur));

        token = token->suivant;
    }
    printf("%s, %s.\n", get_form_name_from_enum(liste.last_element->forme),
           get_color_name_from_enum(liste.last_element->couleur));
}

Tokens *allouer_token(Couleur couleur, Forme forme) {
    Tokens *tokens = (Tokens *) malloc(sizeof(Tokens));
    if (tokens == NULL) {
        fprintf(stderr, "Erreur de mémoire");
        return tokens;
    }

    tokens->couleur = couleur;
    tokens->forme = forme;
    tokens->suivant = NULL;
    tokens->suivant_forme = NULL;
    tokens->suivant_couleur = NULL;
    tokens->precedent_forme = NULL;
    tokens->precedent_couleur = NULL;

    return tokens;
}

void free_token(Tokens *token) {
    token->suivant = NULL;
    token->suivant_couleur = NULL;
    token->suivant_forme = NULL;
    token->precedent_couleur = NULL;
    token->precedent_forme = NULL;

    free(token);
}


Liste *allouer_liste() {
    Liste *l = (Liste *) malloc(sizeof(Liste));

    if (l == NULL) {
        fprintf(stderr, "Erreur de mémoire");
        return l;
    }

    l->length = 0;
    l->last_element = NULL;

    return l;
}

void free_liste_rec(Liste* liste){
    if(liste->length == 0){
        return;
    }

    pop_and_free(liste);
    free_liste_rec(liste);
}

void free_liste(Liste* liste){
    free_liste_rec(liste);
    free(liste);
}

/**
 * Push a new token before the first element of the token given
 *
 * @param token
 * @param couleur
 * @param forme
 */
int push(Liste *liste, Couleur couleur, Forme forme) {
    Tokens *token = allouer_token(couleur, forme);
    if (token == NULL) { return 0; }
    liste->length += 1;

    if (liste->last_element == NULL) {
        token->suivant = token;
        liste->last_element = token;
        return 1;
    }

    /* Add next part where you push on being the next colo or form */

    token->suivant = liste->last_element->suivant;
    liste->last_element->suivant = token;

    return 1;
}

/**
 * Append a new token as the last element of the given list
 *
 * @param token
 * @param couleur
 * @param forme
 */
int append(Liste *liste, Couleur couleur, Forme forme) {
    Tokens *token = allouer_token(couleur, forme);
    if (token == NULL) { return 0; }
    liste->length += 1;

    if (liste->last_element == NULL) {
        liste->last_element = token;
        token->suivant = token;
        return 1;
    }

    /* Add next part where you push on being the next colo or form */

    token->suivant = liste->last_element->suivant;
    liste->last_element->suivant = token;

    liste->last_element = token;

    return 1;
}

Tokens *pop(Liste *liste) {
    Tokens *token;

    if (liste->length == 1) {
        token = liste->last_element;
        liste->last_element = NULL;
        return token;
    }

    token = liste->last_element->suivant;
    liste->last_element->suivant = liste->last_element->suivant->suivant;

    return token;

}

void pop_and_free(Liste *liste) {
    if (liste->length == 0) {
        return;
    }

    free_token(pop(liste));

    liste->length -= 1;
}

Tokens *remove_token(Liste *liste) {
    Tokens *token, *res;

    if (liste->length == 1) {
        token = liste->last_element;
        liste->last_element = NULL;
        return token;
    }

    token = liste->last_element->suivant;

    while (!equals_tokens(token->suivant, liste->last_element)) {
        token = token->suivant;
    }

    token->suivant = liste->last_element->suivant;

    res = liste->last_element;

    liste->last_element = token;

    return res;
}

void remove_and_free(Liste *liste) {
    if (liste->length == 0) {
        return;
    }

    free_token(remove_token(liste));

    liste->length -= 1;
}

int check_pop(Liste *liste) {
    int i;
    if (liste->length < 3) {
        return 0;
    }

    if ((liste->last_element->couleur == liste->last_element->suivant->couleur) && liste->last_element->couleur ==
                                                                                   liste->last_element->suivant->suivant->couleur) {
        for (i = 0; i < 3; i++) {
            pop_and_free(liste);
        }
        return 1;
    }

    if ((liste->last_element->forme == liste->last_element->suivant->forme) &&
        liste->last_element->forme == liste->last_element->suivant->suivant->forme) {
        for (i = 0; i < 3; i++) {
            pop_and_free(liste);
        }
        return 2;
    }

    return 0;
}

int check_remove(Liste *liste) {
    Tokens *token;
    int i;
    if (liste->length < 3) {
        return 0;
    }

    for (i = liste->length, token = liste->last_element->suivant; i > 3; i--) {
        token = token->suivant;
    }

    if ((token->couleur == token->suivant->couleur) && token->couleur == token->suivant->suivant->couleur) {
        for (i = 0; i < 3; i++) {
            remove_and_free(liste);
        }
        return 1;
    }

    if ((token->forme == token->suivant->forme) && token->forme == token->suivant->suivant->forme) {
        for (i = 0; i < 3; i++) {
            remove_and_free(liste);
        }
        return 2;
    }

    return 0;
}

char *get_form_name_from_enum(Forme forme) {
    switch (forme) {
        case CERCLE:
            return "Cercle";

        case CARRE:
            return "Carre";

        case TRIANGLE:
            return "Triangle";

        case DIAMANT:
            return "Diamant";

        default:
            return "Undefined Form";
    }
}

char *get_color_name_from_enum(Couleur couleur) {
    switch (couleur) {
        case ROUGE:
            return "Rouge";
        case VERT:
            return "Vert";
        case BLEU:
            return "Bleu";
        case JAUNE:
            return "Jaune";

        default:
            return "Undefined Color";

    }
}
