#ifndef TP5_ARRAY_H
#define TP5_ARRAY_H

/**
 * Allocate memory for an array which can contain `size`
   integers. The returned C array has memory for an extra last
   integer labelling the end of the array.
 *
 * @param size Size of the allocated array
 * @return An empty array
 */
int *allocate_integer_array(int size);

/**
 * Free an integer array
 * @param tab Array
 */
void free_integer_array(int *tab);

/**
 * Return the size of an array
 *
 * @param array An array
 * @return Size of the array
 */
int array_size(int *array);

/**
 * Print an array on the standard output
 *
 * @param array An array to be printed
 */
void print_array(int *array);

/**
 * Push the second array into the first
 *
 * @param first First array
 * @param second Second array
 * @param first_index Starting index to fill the first array
 * @param second_index Starting index to push from the second array
 * @param size_second Size of the second array
 */
void push_array(int *first, int *second, int first_index, int second_index, int size_second);

/**
 * Check if the arrays are equals
 *
 * @param first First array
 * @param second Second array
 * @return 1 if the arrays are equals, 0 otherwise
 */
int are_arrays_equal(int *first, int *second);

/**
 * Copy an array into a new allocated array
 *
 * @param array The array to be copied
 * @return A new allocated array with the elements of the parameter's array
 */
int *copy_array(int *array);

/**
 * User base array creation.
 * Ask the user the size of the array, then ask for elements
 * to fill the array until the size is complete
 *
 * @return A new allocated array with the size and elements given
 * @error If the user gives a wrong type input (not int) for the size or the elements,
 * the program will ask the user to put an other input
 */
int *fill_array(void);

/**
 * Use pseudo-random generated numbers to fill an array of a delimited size and a delimited range of element between 0 and the given max element.
 *
 * @Warning Be sure to use srand before the use of this function
 * @param size Size of the array
 * @param max_entry Max element that can be generated
 * @return A new allocated array with the size given and pseudo-random elements
 *
 */
int *random_array(int size, int max_entry);

/**
 * Concat two arrays, first array's elements will be the first elements of the new array
 *
 * @param first First array
 * @param second Second array
 * @return A new allocated array being the concatenation of the two parameters
 */
int *concat_array(int *first, int *second);

/**
 * Merge two sorted arrays
 *
 * @warning If your arrays are not sorted, it's your problem
 * @param first First array
 * @param second Second array
 * @return A new allocated array containing every element of the first and second array, sorted.
 */
int* merge_sorted_arrays(int *first, int *second);

/**
 * Split an array into two different arrays.
 * Note that on an odd array, the first array will be larger
 *
 * @param array The array you want to split
 * @param first The first array
 * @param second The second array
 */
void split_arrays(int* array, int** first, int** second);

/**
 * Apply the recursive merge sort algorithm to sort the given array.
 * Uses a debug mode
 *
 * @param array The array you need to sort
 * @return The array sorted
 */
int* merge_sort(int* array);

#endif /* TP5_ARRAY_H */

