#ifndef __LIST_H__
#define __LIST_H__

typedef struct node
{
    char *word;
    struct node *next;
}

Node, *List;

Node *create_link(char *word);

Node *search_link(List l, char *word);

void insert_link(List *l, Node *node);

int size_list(List l);

void print_list(List l);

void free_list(List *l);

#endif
