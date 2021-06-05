#include <stdio.h>
#include "in_out.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Missing file arguments\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");

    /*list *lst = read_text_linked_list(f);*/
    hashtable *hash = read_text_hashtable(f);

    printf("%d words found in %s.\n", hash->size, argv[1]);


    printf("%d different words found in %s.\n", count_distinc_word(hash), argv[1]);

    fclose(f);
    free_hash_table(hash);
    return 0;
}
