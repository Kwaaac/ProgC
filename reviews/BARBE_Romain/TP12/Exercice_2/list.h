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

int size_hashtable(List hashtable[], int size_hashtable);

void print_hashtable(List hashtable[], int size_hashtable);

void free_hashtable(List hashtable[], int size_hashtable);

#endif
