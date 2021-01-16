#ifndef THREETOPUSH_MODEL_H
#define THREETOPUSH_MODEL_H

#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

/**
 * Enumeration of the defined colors
 */
typedef enum color {
    RED,
    GREEN,
    BLUE,
    YELLOW
} Color;

/**
 * Enumeration of the defined forms
 */
typedef enum form {
    CIRCLE,
    SQUARE,
    TRIANGLE,
    DIAMOND
} Form;

/**
 * token structure
 *
 * color: color of the token
 * form: form of the token
 *
 * *next: next token
 * *next_color: next token matching the same color
 * *previous_color: previous token matching the same color
 * *next_form: next token matching the same color
 * *previous_form: previous token matching the same color
 */
typedef struct token {
    Color color;
    Form form;

    struct token *next;

    struct token *next_color;
    struct token *previous_color;
    struct token *next_form;
    struct token *previous_form;
} Tokens;

/**
 * structure of a list of tokens
 * @var length length of the list
 * @var *last_element last element of the list
 */
typedef struct list_token {
    int length;
    Tokens *last_element;
} List;


/**
 * print every token from the given list
 *
 * @param list list of tokens
 */
void print_liste(List list);

/**
 * Compare two tokens and return if they are equals
 *
 * @param first First token to be compared
 * @param second Second token to be compared
 * @return 1 if the tokens are equals, 0 otherwise
 */
int equals_tokens(Tokens *first, Tokens *second);





/**
 * Remove the last token from the given list
 *
 * @param list List of tokens
 * @return Token the removed token
 */
Tokens *remove_token(List *list);


/**
 * Verify if the list can pop 3 tokens from the beginning of the list
 *
 * @param list List of token
 * @return 1 if 3 tokens can be popped, 0 otherwise
 */
int check_pop(List* list);

/**
 * Verify if the list can remove 3 tokens from the ending of the list
 *
 * @param list List of token
 * @return 1 if 3 tokens can be removed, 0 otherwise
 */
int check_remove(List* list);

/**
 * Get a char of the color's name from the Color enum
 *
 * @remark Deprecated, was used for the level 1 of the project to print the lists
 * @param color Enum color
 * @return Char of the color's name
 */
char *get_color_name_from_enum(Color color);

/**
 * Get a char of the form's name from the Form enum
 *
 * @remark Deprecated, was used for the level 1 of the project to print the lists
 * @param color Enum form
 * @return Char of the form's name
 */
char *get_form_name_from_enum(Form form);

/**
 * Free the List and every token from the list
 *
 * @param list List of tokens
 */
void free_liste(List* list);

/**
 * Push a new token before the first element of the token given
 *
 * @param list List of tokens
 * @param token New token to be pushed
 */
int push(List *list, Tokens *token);

/**
 * Append a new token as the last element of the given list
 *
 * @param list List of tokens
 * @param token New token to be appened
 */
int append(List *list, Tokens *token);

/**
 * Create and allocate a new list
 *
 * @return Pointer to the list
 */
List *allocate_list(void);

/**
 * Randomly create a new token
 *
 * @return Pointer to the new token
 */
Tokens *get_random_token(void);

#endif /*THREETOPUSH_MODEL_H*/
