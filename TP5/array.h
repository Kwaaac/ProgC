#ifndef TP5_ARRAY_H
#define TP5_ARRAY_H

/* Allocate memory for an array which can contain `size`
   integers. The returned C array has memory for an extra last
   integer labelling the end of the array. */
int *allocate_integer_array(int size);

/* Free an integer array */
void free_integer_array(int *tab);

/* Return the size of an array */
int array_size(int *array);

/* Print an array on the standard output*/
void print_array(int *array);

int are_arrays_equal(int *first, int *second);

int *copy_array(int *array);

int *fill_array(void);

int *random_array(int size, int max_entry);

int *concat_array(int *first, int *second);

int* merge_sorted_arrays(int *first, int *second);

void split_arrays(int* array, int** first, int** second);

int* merge_sort(int* array);

#endif /* TP5_ARRAY_H */

