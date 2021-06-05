#include "hash.h"


link *allocate_link(char *word) {
    link *lnk = (link *) malloc(sizeof(link));
    lnk->word = malloc(strlen(word) + 1);
    strcpy(lnk->word, word);
    lnk->next = NULL;
    return lnk;
}

hashtable *allocate_hash_table() {
    int i;
    hashtable *new_hashtable = (hashtable *) malloc(sizeof(hashtable));
    for (i = 0; i < NB_PACK; i++) {
        new_hashtable->bucket[i] = NULL;
    }
    new_hashtable->size = 0;

    return new_hashtable;
}

void free_hash_table(hashtable *hash_table) {
    int i;
    for (i = 0; i < NB_PACK; i++) {
        if (hash_table->bucket[i] != NULL) {
            free_list(hash_table->bucket[i]);
        }
    }
    free(hash_table);
}

void free_link(link *lnk) {
    link *tmp;
    while (lnk) {
        tmp = lnk;
        lnk = lnk->next;
        free(tmp->word);
        free(tmp);
    }
}

void free_list(list *list) {
    free_link(list->first);
    free(list);
}

list *allocate_list() {
    list *lst = (list *) malloc(sizeof(list));
    lst->size = 0;
    lst->first = NULL;

    return lst;
}


unsigned int hash(char *word) {
    int h = 0, i;

    for (i = 0; word[i] != '\0'; i++) {
        h += (i + 1) * word[i];
    }

    if (h < 0) h = 1;

    return h % NB_PACK;
}

void add_word_table(hashtable *tab, char word[]) {
    link *lst;
    unsigned hash_index = hash(word);
    lst = find_word(tab->bucket[hash_index], word);
    if (lst == NULL) {
        tab->bucket[hash_index] = insert_first_list(tab->bucket[hash_index], word);
    }

    tab->size++;
}

link *find_word(list *list, char *word) {
    link *ptr;

    if (list == NULL) {
        return NULL;
    }

    for (ptr = list->first; ptr != NULL; ptr = ptr->next) {
        if (strcmp(ptr->word, word) == 0) break;
    }

    return ptr;
}

list *insert_first_list(list *lst, char *word) {
    link *lnk;
    if (lst == NULL) {
        lst = allocate_list();
    }

    lnk = allocate_link(word);
    lnk->next = lst->first;
    lst->first = lnk;
    lst->size++;

    return lst;
}

int count_distinc_word(hashtable *hash) {
    int i, count = 0;
    for (i = 0; i < NB_PACK; i++) {
        if (hash->bucket[i] != NULL) {
            count += hash->bucket[i]->size;
        }
    }

    return count;
}
