#include "general_functions.h"
#include <stdio.h>

void array_print_10_at_a_time(int * buf, int buf_size){
    
    // Print the numbers in columns of 10
    int remainder = buf_size % 10;

    for(int i = 0; i < (buf_size - remainder); i+=10){
        
        // Print 10 values on a line
        for(int j = i; j < i + 10; j++){
            printf("%d    ", buf[j]);
        }
        printf("\n");
            
    }

    // Print the remaining values from the array
    for(int i = (buf_size - remainder); i < buf_size; i++){
        printf("%d    ", buf[i]);
    }

    printf("\n");

}