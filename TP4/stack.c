#include <stdio.h>
#include "stack.h"

static Stack stack;

/* Initialize correctly the stack. */
void stack_init(void) {
    stack.size = 0;
}

/* Returns the current size of the stack. */
int stack_size(void) {
    if (stack.size < 0)
        return 0;

    if (stack.size >= MAX_SIZE)
        return MAX_SIZE - 1;

    return stack.size;
}

/* Returns 1 if the stack is empty, returns 0 otherwise. */
int stack_is_empty(void) {
    return stack.size <= 0;
}

/* Returns the element at the top of the stack. */
int stack_top(void) {
    return stack.values[stack.size];
}

/* Pops the element at the top of the stack and returns it. */
int stack_pop(void) {
    int res;
    /* erreur, on ne peut pas pop une pile vide */
    if (stack_size() == 0) {
        return -1;
    }

    res = stack_top();
    stack.size--;

    return res;
}

/* Pushes a given integer `n` at the top of the stack. */
void stack_push(int n) {
    int size = stack_size();

    if (size == MAX_SIZE) {
        return;
    }

    stack.size++;
    stack.values[size] = n;
}

/* Displays the content of the stack on the standard output. */
void stack_display(void) {
    int i;
    printf("display\n");

    for (i = stack.size; i > 0; i--) {
        printf("%d ", stack.values[i]);
    }

    printf("\n");
}

/* Returns the element at index `index` inside the stack. The user is
   responsible of the use of this function. The answers may be not
   relevant if a call is done outside the current size of the
   stack. */
int stack_get_element(int index) {
    return stack.values[index];
}

int main(int argc, char *argv[]) {
    stack_init();
    printf("size: %d\n", stack_size());
    printf("is empty: %d\n", stack_is_empty());

    stack_push(5);
    stack_push(6);
    stack_push(2);
    stack_push(102);

    printf("size: %d\n", stack_size());
    printf("is empty: %d\n", stack_is_empty());

    printf("top: %d\n", stack_top());

    printf("pop: %d\n", stack_pop());

    printf("size: %d\n", stack_size());
    printf("is empty: %d\n", stack_is_empty());
    printf("top: %d\n", stack_top());

    stack_display();

    return 0;
}
