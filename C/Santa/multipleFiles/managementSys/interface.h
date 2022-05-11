
#ifndef INTERFACE_H
#define INTERFACE_H
#include <stdio.h>
#include "inventory.h"

/* interface.c, interface.h */
// ask the user to enter a new item on the command-line;
// add the new item to the given list and return the count increased by one
// (since there is one more element in the inventory array)
size_t add_item(Item items[], size_t count);

// print given item to stdout
void print_item(Item i);

// print all items, one per line
void print_items(Item items[], size_t count);
#endif