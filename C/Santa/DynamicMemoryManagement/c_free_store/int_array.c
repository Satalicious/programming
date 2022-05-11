#include <stdio.h>
#include "int_array.h"
#include "create_arrays.h"

// gehört gelöscht 
typedef struct intarray IntArray;
struct intarray {
  size_t reserved;  // available storage
  size_t elements;  // current number of elements
  int* array;
}; 

// create new empty IntArray for 100 elements
IntArray* ia_create() {
    //IntArray array = array[100];
}
// create new array with `count` zeros
IntArray* ia_zeros(size_t count) {}
// create new array with `count` ones
IntArray* ia_ones(size_t count) {}
// create new array with stop-start elements: start ... stop-1
IntArray* ia_range(int start, int stop) {}
// free the array and the intarray struct; return NULL
IntArray* ia_free(IntArray* ia) {}

// remove and return last element of `ia`
int ia_pop_back(IntArray* ia) {}
/*
 * add `elem` to `ia`
 * if that would exceed the available reserved memory, double the size of
 * the array using `reallocarray`
 */
void ia_push_back(IntArray* ia, int elem) {}

// return the number of occurrences of `elem` in `ia`
size_t ia_count(IntArray* ia, int elem) {}
/*
 * Return element at index.
 * If the index is out of bounds, write "IndexError" and some useful context
 * to stderr and terminate the execution of the program.
 */
int ia_index(IntArray* ia, size_t index) {}
// print a representation of the array to stdout
void ia_print(IntArray* ia) {}
// return the current number of elements
size_t ia_size(IntArray* ia) {}
// return the sum of all elements
long int ia_sum(IntArray* ia) {}

/*
 * Return new `IntArray*` where all elements are the pairwise sum of the
 * elements of the given two arrays. If one array is shorter,
 * solely use the elements of the longer array for the higher indices.
 */
IntArray* ia_add(IntArray* first, IntArray* second) {}
/*
 * Return new `IntArray*` where all elements are the pairwise product of the
 * elements of the given two arrays. If one array is shorter,
 * solely use the elements of the longer array for the higher indices.
 */
IntArray* ia_mul(IntArray* first, IntArray* second) {}
