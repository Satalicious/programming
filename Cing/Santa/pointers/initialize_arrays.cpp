
/*
https://bulme.find-santa.eu/exercises/c/exercise_pointers/
It should set each element to zero. ones(.) does the same as zeros, 
but sets each value to one. range(.) sets the array to 0, 1, 2, 3, ..., count-1
Implement main(.) to initizlize an array, call each of the above functions 
and print the array right after each function call. */
#include <stdio.h>

void zeroes(int* array, int count) {
    while (count--) {
        array[count] = 0;
        printf("%d ", array[count]);
    }
    printf("\n");
}

void ones (int* array, int count) {
    while (count--) {
        array[count] = 1;
        printf("%d ", array[count]);
    }
    printf("\n");
}

void range (int* array, int count) {
    for (int i = 0; i < count; i++) {
        array[i] = i;
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int array[] = {0,1,2,3,4,5};
    int count = sizeof(array) / sizeof(array[0]);       // super for INT arrays
    printf("sizeof: %d\n",sizeof(array[0]));
    zeroes(array,count);
    ones(array,count);
    range(array,count);
    return 0;
}