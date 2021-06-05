#include <stdio.h>
#include "in_out.h"

int main(int argc, char *argv[]) {
    FILE *f;
    hashtable *hash;

    if (argc == 1) {
        printf("Missing file arguments\n");
        return 1;
    }

    f = fopen(argv[1], "r");

    /*list *lst = read_text_linked_list(f);*/
    hash = read_text_hashtable(f);

    printf("%d words found in %s.\n", hash->size, argv[1]);


    printf("%d different words found in %s.\n", count_distinc_word(hash), argv[1]);

    fclose(f);
    free_hash_table(hash);
    return 0;
}
