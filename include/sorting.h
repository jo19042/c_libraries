#ifndef SORTING_H
#define SORTING_H

/**
 * @brief Implements Quicksort algorithm to sort array of integers. Better than
 *        insertion sort for larger, not almost sorted, arrays.
 * 
 * @param buf array of integers
 * @param buf_size size of the array of integers
 */
void array_quicksort(int * buf, int buf_size);

/**
 * @brief Implements Intertion Sort algorithm to sort array of integers. Best
 *        for almost sorted arrays.
 * 
 * @param buf array of integers
 * @param buf_size size of the array of integers
 */
void array_insertion_sort(int * buf, int buf_size);

#endif