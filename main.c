#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "file_manipulation.h"
#include "sorting.h"
#include "general_functions.h"

/**
 * @brief Tests reading numbers from file function.
 * 
 */
void test_read_numbers_from_file(){
    
    // Path of input file
    char path[] = "input/1000_numbers.txt";
    
    // Create test data buffer and ensure creation
    int buf_size = 1000;
    int * buf = malloc(buf_size * sizeof(int));

    if (buf == NULL) {
        perror("malloc");
        return;
    }

    // Get the numbers
    read_numbers_from_file(buf, buf_size, path);

    // Print the numbers
    array_print_10_at_a_time(buf, buf_size);

    // Ensure freeing of buf, even though should be free'd no matter what
    // because we will exit scope
    free(buf);

}

void test_insertion_sort(){
    // Path of input file
    char path[] = "input/1000_numbers.txt";
    
    // Create test data buffer and ensure creation
    int buf_size = 1000;
    int * buf = malloc(buf_size * sizeof(int));

    if (buf == NULL) {
        perror("malloc");
        return;
    }

    // Get the numbers
    read_numbers_from_file(buf, buf_size, path);

    // Print the unsorted numbers
    array_print_10_at_a_time(buf, buf_size);

    // Sort the array
    array_quicksort(buf, buf_size);

    // Print the sorted numbers
    array_print_10_at_a_time(buf, buf_size);

    // Ensure freeing of buf, even though should be free'd no matter what
    // because we will exit scope
    free(buf);
}

int main(){    

    test_read_numbers_from_file();

    return 0;
}