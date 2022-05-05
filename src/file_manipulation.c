#include <stdio.h>
#include <stdlib.h>
#include "file_manipulation.h"

void read_numbers_from_file(int * buf, int buf_size, char * inputFileName){
    
    // Attempt to open input file, exit if fail
    FILE *input_file;
    if ((input_file = fopen(inputFileName, "r")) == NULL) {                 // Open a file and return file pointer to the file
        exit(EXIT_FAILURE);
    }

    // Read the entire file and put the values in the buffer
    for(int i = 0; i < buf_size; i++){
        fscanf(input_file, "%d", &buf[i]);
    }

    // Close input file
    fclose(input_file);

}

void test_read_numbers_from_file(){
    // Create test data buffer
    int buf_size = 1000;
    int * buf = malloc(buf_size * sizeof(int));

    // Path of input file
    char path[] = "input/1000_numbers.txt";

    // Get the numbers
    read_numbers_from_file(buf, buf_size, path);

    // Print the numbers
    for(int i = 0; i < buf_size; i++){
        printf("%d\n", buf[i]);
    }
}