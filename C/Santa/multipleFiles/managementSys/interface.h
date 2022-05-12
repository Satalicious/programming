
#ifndef INTERFACE_H
#define INTERFACE_H
#include "inventory.h"

size_t add_item(Item items[], size_t count);

void print_item(Item i);

void print_items(Item items[], size_t count);

void cli();
#endif