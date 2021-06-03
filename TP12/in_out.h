
#ifndef TP12_IN_OUT_H
#define TP12_IN_OUT_H
#define MAX_LENGTH_WORD 100

#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

list *read_text_linked_list(FILE *infile);

hashtable *read_text_hashtable(FILE *infile);

#endif /* TP12_IN_OUT_H */
