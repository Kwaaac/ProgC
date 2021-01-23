#include "model.h"


int equals_tokens(Tokens *first, Tokens *second) {
    return first == second &&
           first->color == second->color &&
           first->form == second->form &&
           first->next_color == second->next_color &&
           first->next_form == second->next_form &&
           first->previous_color == second->previous_color &&
           first->previous_form == second->previous_form;
}

void print_liste(List list) {
    Tokens *token;

    if (list.length <= 0) {
        return;
    }

    token = list.last_element->next;


    while (!equals_tokens(token, list.last_element)) {

        token = token->next;
    }
}

/**
 * Create and allocate a token with a color and a form given
 *
 * @param color Color of the token
 * @param form Form of the token
 * @return Pointer to the new token
 */
Tokens *allocate_token(Color color, Form form) {
    Tokens *tokens = (Tokens *) malloc(sizeof(Tokens));
    if (tokens == NULL) {
        fprintf(stderr, "Erreur de mémoire");
        return tokens;
    }

    tokens->color = color;
    tokens->form = form;
    tokens->next = NULL;
    tokens->next_form = NULL;
    tokens->next_color = NULL;
    tokens->previous_form = NULL;
    tokens->previous_color = NULL;

    return tokens;
}

void free_token(Tokens *token) {
    token->next = NULL;
    token->next_color = NULL;
    token->next_form = NULL;
    token->previous_color = NULL;
    token->previous_form = NULL;

    free(token);
}

/**
 * Create and allocate a new list
 *
 * @return Pointer to the list
 */
List *allocate_list() {
    List *l = (List *) malloc(sizeof(List));

    if (l == NULL) {
        fprintf(stderr, "Erreur de mémoire");
        return l;
    }

    l->length = 0;
    l->last_element = NULL;

    return l;
}

/**
 * Remove the first token of the list and returns it
 *
 * @param list List of token
 * @return Token the token removed
 */
Tokens *pop(List *list) {
    Tokens *token;

    if (list->length == 1) {
        token = list->last_element;
        list->last_element = NULL;
        list->length -= 1;
        return token;
    }

    list->length -= 1;
    token = list->last_element->next;
    list->last_element->next = list->last_element->next->next;

    return token;

}

/**
 * Uses the pop function to free the removed token
 *
 * @param list List of tokens
 */
void pop_and_free(List *list) {
    if (list->length == 0) {
        return;
    }

    free_token(pop(list));
}

/**
 * Recursively free every token from the given list
 *
 * @param list List of token
 */
void free_liste_rec(List *list) {
    if (list->length == 0) {
        return;
    }

    pop_and_free(list);
    free_liste_rec(list);
}

/**
 * Free the List and every token from the list
 *
 * @param list List of tokens
 */
void free_liste(List *list) {
    free_liste_rec(list);
    free(list);
}

/**
 * Push a new token before the first element of the token given
 *
 * @param list List of tokens
 * @param token New token to be pushed
 */
int push(List *list, Tokens *token) {
    if (token == NULL) { return 0; }
    list->length += 1;

    if (list->last_element == NULL) {
        token->next = token;
        list->last_element = token;
        return 1;
    }

    /* Add next part where you push on being the next colo or form */

    token->next = list->last_element->next;
    list->last_element->next = token;

    return 1;
}

/**
 * Append a new token as the last element of the given list
 *
 * @param list List of tokens
 * @param token New token to be appened
 */
int append(List *list, Tokens *token) {
    if (token == NULL) { return 0; }
    list->length += 1;

    if (list->last_element == NULL) {
        list->last_element = token;
        token->next = token;
        return 1;
    }

    /* Add next part where you push on being the next colo or form */

    token->next = list->last_element->next;
    list->last_element->next = token;

    list->last_element = token;

    return 1;
}

/**
 * Remove the last token from the given list
 *
 * @param list List of tokens
 * @return Token the removed token
 */
Tokens *remove_token(List *list) {
    Tokens *token, *res;

    if (list->length == 1) {
        token = list->last_element;
        list->last_element = NULL;
        list->length -= 1;
        return token;
    }
    list->length -= 1;

    token = list->last_element->next;

    while (!equals_tokens(token->next, list->last_element)) {
        token = token->next;
    }

    token->next = list->last_element->next;

    res = list->last_element;

    list->last_element = token;

    return res;
}

/**
 * Uses the remove_token function to free the removed token
 *
 * @param list List of tokens
 */
void remove_and_free(List *list) {
    if (list->length == 0) {
        return;
    }

    free_token(remove_token(list));
}

/**
 * Verify if the list can pop 3 tokens from the beginning of the list
 *
 * @param list List of token
 * @return 1 if 3 tokens can be popped, 0 otherwise
 */
int check_pop(List *list) {
    int i;
    if (list->length < 3) {
        return 0;
    }

    if ((list->last_element->next->color == list->last_element->next->next->color) && list->last_element->next->color ==
                                                                                      list->last_element->next->next->next->color) {

        for (i = 0; i < 3; i++) {
            pop_and_free(list);
        }
        return 1;
    }

    if ((list->last_element->next->form == list->last_element->next->next->form) && list->last_element->next->form ==
                                                                                    list->last_element->next->next->next->form) {

        for (i = 0; i < 3; i++) {
            pop_and_free(list);
        }

        return 2;
    }

    return 0;
}

/**
 * Verify if the list can remove 3 tokens from the ending of the list
 *
 * @param list List of token
 * @return 1 if 3 tokens can be removed, 0 otherwise
 */
int check_remove(List *list) {
    Tokens *token;
    int i;
    if (list->length < 3) {
        return 0;
    }

    for (i = list->length, token = list->last_element->next; i > 3; i--) {
        token = token->next;
    }


    if ((token->color == token->next->color) && token->color == token->next->next->color) {
        for (i = 0; i < 3; i++) {
            remove_and_free(list);
        }
        return 1;
    }

    if ((token->form == token->next->form) && token->form == token->next->next->form) {
        for (i = 0; i < 3; i++) {
            remove_and_free(list);
        }
        return 2;
    }

    return 0;
}

/**
 * Get a char of the form's name from the Form enum
 *
 * @remark Deprecated, was used for the level 1 of the project to print the lists
 * @param color Enum form
 * @return Char of the form's name
 */
char *get_form_name_from_enum(Form form) {
    switch (form) {
        case CIRCLE:
            return "Cercle";

        case SQUARE:
            return "Carre";

        case TRIANGLE:
            return "Triangle";

        case DIAMOND:
            return "Diamant";

        default:
            return "Undefined Form";
    }
}

/**
 * Get a char of the color's name from the Color enum
 *
 * @remark Deprecated, was used for the level 1 of the project to print the lists
 * @param color Enum color
 * @return Char of the color's name
 */
char *get_color_name_from_enum(Color color) {
    switch (color) {
        case RED:
            return "Rouge";
        case GREEN:
            return "Vert";
        case BLUE:
            return "Bleu";
        case YELLOW:
            return "Jaune";

        default:
            return "Undefined Color";

    }
}
/**
 * Return a enum color from an int
 *
 * @param nbr given integer
 * @return Color color
 */
Color get_color_from_int(int nbr) {
    switch (nbr) {
        case 1:
            return RED;
        case 2:
            return GREEN;
        case 3:
            return BLUE;
        case 4:
            return YELLOW;
        default:
            return RED;

    }
}

/**
 * Return a enum form from an int
 *
 * @param nbr given integer
 * @return Form form
 */
Form get_form_from_int(int nbr) {
    switch (nbr) {
        case 1:
            return CIRCLE;
        case 2:
            return SQUARE;
        case 3:
            return TRIANGLE;
        case 4:
            return DIAMOND;
        default:
            return CIRCLE;

    }
}

/**
 * Randomly create a new token
 *
 * @return Pointer to the new token
 */
Tokens *get_random_token() {

    return allocate_token(get_color_from_int(MLV_get_random_integer(1, 4)),
                          get_form_from_int(MLV_get_random_integer(1, 4)));
}
