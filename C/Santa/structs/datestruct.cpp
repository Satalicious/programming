#include <stdio.h>
typedef struct{ //struct definition
    int year;
    int month;
    int day;
  } Date;

void print_date(Date *datum);//function protoype
void print_no_pointer(Date datum);

int main(void) {
  Date datum = {1999, 1, 13};
  Date* dptr = &datum; // a pointer to pass to the function
  print_date(dptr);
  print_no_pointer(datum);
}

void print_date(Date *datum){
  printf("My date of Birth %d.%d.%d\n", datum->day, datum->month, datum->year); // syntactic sugar to access the struct members
}

void print_no_pointer(Date datum){
  printf("My date of Birth without pointers %d.%d.%d\n", datum.day, datum.month, datum.year);
}