#include <stdio.h>
#include "int_array.h"
#include "create_arrays.h"
#include <stdlib.h>


// create new empty IntArray for 100 elements
IntArray* ia_create() {
  IntArray* dummy = malloc(sizeof(IntArray));
  dummy->reserved = 100;
  dummy->elements = 0;
  dummy->array = malloc(100 * sizeof(int));
  if (dummy->array == NULL) {
    fprintf(stderr, "malloc %d bytes failed\n", 100);
    exit(EXIT_FAILURE);
  }
  return dummy;
}

// create new array with `count` zeros
IntArray* ia_zeros(size_t count) {
  IntArray* dummy = malloc(sizeof(IntArray));
  dummy->reserved = count;
  dummy->elements = count;
  dummy->array = malloc(count * sizeof(int));
  if (dummy->array == NULL) {
    fprintf(stderr, "malloc %d bytes failed\n", 100);
    exit(EXIT_FAILURE);
  }
  for (int i=0; i < count; i++) {
    dummy->array[i] = 0;
  }
  return dummy;
}

// create new array with `count` ones
IntArray* ia_ones(size_t count) {
  IntArray* dummy = malloc(sizeof(IntArray));
  dummy->reserved = count;
  dummy->elements = count;
  dummy->array = malloc(count * sizeof(int));
  if (dummy->array == NULL) {
    fprintf(stderr, "malloc %d bytes failed\n", 100);
    exit(EXIT_FAILURE);
  }
  for (int i=0; i < count; i++) {
    dummy->array[i] = 1;
  }
  return dummy;
}

// create new array with stop-start elements: start ... stop-1
IntArray* ia_range(int start, int stop) {
  IntArray* dummy = malloc(sizeof(IntArray));
  dummy->reserved = stop-start;
  dummy->elements = stop-start;
  dummy->array = malloc((stop-start)* sizeof(int));
  if (dummy->array == NULL) {
    fprintf(stderr, "malloc %d bytes failed\n", stop-start);
    exit(EXIT_FAILURE);
  }
  for (int i=start; i < stop; i++) {
    dummy->array[i] = i;
  }
  return dummy;
}

// free the array and the intarray struct; return NULL
IntArray* ia_free(IntArray* ia) {
  free(ia);
  return NULL;
}

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
