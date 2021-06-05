/*!
 * \file hash.h
 * \brief File that function
 *
 */

#ifndef TP12_HASH_H
#define TP12_HASH_H
#define NB_PACK 4096

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node {
    char *word;
    struct node *next;
} link;

typedef struct _list {
    link *first;
    int size;
} list;

typedef struct _hashtable {
    list *bucket[NB_PACK];
    int size;
} hashtable;

/**
 * Allocate a list
 *
 * @return An empty list
 */
list *allocate_list();

/**
 * Allocate a new hashtable
 *
 * @return A new allocated hash_table
 */
hashtable *allocate_hash_table();

/**
 * Free a hash_table
 *
 * @param hash_table The hash table to be freed
 */
void free_hash_table(hashtable *hash_table);

void add_word_table(hashtable *tab, char word[]);

/**
 * Free a list
 * @param list the list to be freed
 */
void free_list(list *list);


/**
 * Fetch the link in the list whose word equals the given word.
 *
 * @param list list of link
 * @param word the word to compare
 * @return The link that contains the word, null otherwise
 */
link *find_word(list *list, char *word);

/**
 * Insert a new link at the first position of the given list of nodes.
 *
 * @param lst link list
 * @param word word to create a new link
 */
list *insert_first_list(list *lst, char *word);

/**
 * Count every distinct word in the given hashtable
 *
 * @param hash The given hashtable
 * @return The count of the distinct words
 */
int count_distinc_word(hashtable *hash);


#endif /* TP12_HASH_H */
