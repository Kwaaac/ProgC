
#include "in_out.h"
#include "hash.h"

list *read_text_linked_list(FILE *infile) {
    list *lst = allocate_list();
    char *word = (char *) malloc(MAX_LENGTH_WORD * sizeof(char));
    while (fscanf(infile, "%s ", word) != -1) {
        if (find_word(lst, word) == NULL) {
            lst = insert_first_list(lst, word);
        }
    }

    free(word);
    return lst;
}

hashtable *read_text_hashtable(FILE *infile) {
    hashtable *hash = allocate_hash_table();
    char *word = (char *) malloc(MAX_LENGTH_WORD * sizeof(char));
    while (fscanf(infile, "%s ", word) != -1) {
        add_word_table(hash, word);
    }

    free(word);
    return hash;
}


