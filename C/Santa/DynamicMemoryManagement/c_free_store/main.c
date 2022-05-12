

#include "create_arrays.h"
#include "int_array.h"

void printThis(int* array, int count) {
        for (int i = 0; i < count; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
}

int main() {
    int count = 5;
    int* zero = zeros(count);
    int* one = ones(count);
    int* rng = range(count);
    printThis(zero, count);
    printThis(one, count);
    printThis(rng,count);

    //IntArray* empty = ia_create();


    return 0;
}