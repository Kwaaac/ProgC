#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

static Stack stack;

/* Initialize correctly the stack. */
void stack_init(void) {
    stack.max_size = MAX_SIZE;
    stack.current_size = 0;
}

/* Returns the current size of the stack. */
int stack_size(void) {
    return stack.current_size;
}

/* Returns 1 if the stack is empty, returns 0 otherwise. */
int stack_is_empty(void) {
    return stack.current_size == 0;
}

/* Returns the element at the top of the stack. */
int stack_top(void) {
    return stack.values[stack.current_size];
}

/* Pops the element at the top of the stack and returns it. */
int stack_pop(void) {
    /* On ne veut pas depasser la taille minimale de la pile */
    if (stack.current_size == 0) {
        printf("NAN MAIS CA VA PAS LA TETE\n Depassement inf de la pil");
        exit(1);
    }

    int res = stack.values[stack.current_size];
    stack.current_size--;
    return res;
}

/* Pushes a given integer `n` at the top of the stack. */
void stack_push(int n) {
    /* On ne veut pas depasser la taille de la pile */
    if (stack.current_size == stack.max_size) {
        printf("NAN MAIS CA VA PAS LA TETE\n Depassement sup de la pile");
        exit(1);
    }

    stack.current_size++;
    stack.values[stack.current_size] = n;
}

/* Displays the content of the stack on the standard output. */
void stack_display(void) {
    printf(">>>Affichage de la pile\n");

    int i;
    for (i = stack.current_size; i > 0; i--) {
        if (i != 1)
            printf("%d, ", stack.values[i]);
        else
            printf("%d.", stack.values[i]);
    }
}

/* Returns the element at index `index` inside the stack. The user is
   responsible of the use of this function. The answers may be not
   relevant if a call is done outside the current size of the
   stack. */
int stack_get_element(int index) {
    return stack.values[index];
}

int main(int arg, char *argv[]) {

    stack_init();
    printf("size %d\n", stack_size()); /* 0 */
    printf("is empty %d\n", stack_is_empty()); /* 1 */

    stack_push(5);
    stack_push(4);
    stack_push(3);
    stack_push(2);
    stack_push(1);

    printf("size %d\n", stack_size()); /* 5 */
    printf("is empty %d\n", stack_is_empty()); /* 0 */

    stack_display();
    printf("\ntop %d\n", stack_top()); /* 1 */

    printf("pop %d\n", stack_pop()); /* 1 */
    printf("pop %d\n", stack_pop()); /* 2 */

    printf("size %d\n", stack_size()); /* 3 */
    printf("is empty %d\n", stack_is_empty()); /* 0 */

    stack_display();


    return 0;
}
