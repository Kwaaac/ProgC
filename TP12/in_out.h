/*!
 * \file in_out.h
 * \brief File that contains function to read a file a count the number of word and distinct word inside for
 *
 */

#ifndef TP12_IN_OUT_H
#define TP12_IN_OUT_H
#define MAX_LENGTH_WORD 100

#include "hash.h"

/**
 *  First iteration of the first exercice to read the file and stock them in a linked list
 *
 * @param infile File to be read
 * @return A list containing the every distinct word of the text
 */
list *read_text_linked_list(FILE *infile);


/**
 * Exercice to read the file and stock them in a hashtable
 *
 * @param infile File to be read
 * @return A hashtable containing every word and distinct word of the text.
 */
hashtable *read_text_hashtable(FILE *infile);

#endif /* TP12_IN_OUT_H */
