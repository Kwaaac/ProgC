#ifndef TP10_IN_OUT_H
#define TP10_IN_OUT_H

#include "listorder.h"
#include <string.h>

/**
 * Read the given file line per line and fetch every person in the list
 *
 * @param file The path of the file to be read
 * @param list The list for every person to be added
 * @return
 */
int fread_list(const char *file, Cell **list);

#endif /*TP10_IN_OUT_H*/
