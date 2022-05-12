
#ifndef INVENTORY_H
#define INVENTORY_H
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char type[80];
    unsigned int quantity;
    double value;
    char unit[20];
} Item;

/* inventory.c, inventory.h */
// Return the total number of resistors in the inventory.
// Eg. there are 100 resistors with 330 ohm, 50 with 5600 ohm and 10 with
// 2 megaohm, the total number is 160.
size_t count_resistors(Item items[], size_t count);

// Return the total number of capacitors in the inventory.
size_t count_capacitors(Item items[], size_t count);

#endif