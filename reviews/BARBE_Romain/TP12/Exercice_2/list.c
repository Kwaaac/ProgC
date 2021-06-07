#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

Node *create_link(char *word)
{
    Node *node = malloc(sizeof(Node));
    node->word = malloc(strlen(word) + 1);
    strcpy(node->word, word);
    node->next = NULL;
    return node;
}

Node *search_link(List l, char *word)
{
    Node *tmp = l;
    while (tmp != NULL)
    {
        if (strcmp(word, tmp->word) == 0)
        {
            /*printf("%s dans la liste\n", word);*/
            return tmp;
        }
        tmp = tmp->next;
    }
    /*printf("%s pas dans la liste\n", word);*/
    return NULL;
}

void insert_link(List *l, Node *node)
{
    node->next = *l;
    *l = node;
}

int size_list(List l)
{
    int size = 0;
    Node *tmp = l;

    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void print_list(List l)
{
    Node *tmp = l;
    while (tmp != NULL)
    {
        printf("%s ", tmp->word);
        tmp = tmp->next;
    }
}

void free_list(List *l)
{
    Node *tmp = *l;
    while (tmp != NULL)
    {
        Node *tmp2 = tmp;
        tmp = tmp->next;
        free(tmp2->word);
        free(tmp2);
    }
}

int size_hashtable(List hashtable[], int size_hashtable)
{
    int total_size = 0;
    int i;
    for (i = 0; i < size_hashtable; i++)
    {
        total_size += size_list(hashtable[i]);
    }
    return total_size;
}

void print_hashtable(List hashtable[], int size_hashtable)
{
    int i;
    for (i = 0; i < size_hashtable; i++)
    {
        if (hashtable[i] != NULL)
        {
            printf("Hashtable[%d] : ", i);
            print_list(hashtable[i]);
            printf("\n");
        }
    }
}

void free_hashtable(List hashtable[], int size_hashtable)
{
    int i;
    for (i = 0; i < size_hashtable; i++)
    {
        free_list(&hashtable[i]);
    }
}
