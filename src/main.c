#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "sorting.h"

int main(){
    // int sorting_test_array[];
    int MAX_BUF = 200;
    char path[MAX_BUF];

    getcwd(path, MAX_BUF);
    printf(path);

    return 0;
}