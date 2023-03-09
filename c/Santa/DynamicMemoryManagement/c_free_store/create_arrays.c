
#include "create_arrays.h"
#include <stdio.h>
#include <stdlib.h>

int* zeros(int count) {
    int *array = (int*) calloc(count, sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "calloc %d bytes failed\n", count);
        exit(EXIT_FAILURE);
    }
    return array;
}

int* ones(int count) { 
    // malloc bcs it leaves the memory uninitialized
    int* array = (int*) malloc(count * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc %d bytes failed\n", count);
        exit(EXIT_FAILURE);
    }
    for (int i=0; i < count; i++) {
        array[i] = 1;
    }
    return array;
}

int* range(int count) {
    int* array = (int*) malloc(count * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc %d bytes failed\n", count);
        exit(EXIT_FAILURE);
    }
    for (int i=0; i < count; i++) {    
        array[i] = i;
    }
    return array;
}