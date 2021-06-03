#include <stdio.h>
#include "in_out.h"
#include "hash.h"

int main() {
    int i, count = 0;

    FILE *f = fopen("Germinal.txt", "r");

    /*list *lst = read_text_linked_list(f);*/
    hashtable *hash = read_text_hashtable(f);

    printf("%d words found in Germinal.\n", hash->size);


    printf("%d different words found in Germinal.\n", count_distinc_word(hash));

    fclose(f);
    free_hash_table(hash);
    return 0;
}
