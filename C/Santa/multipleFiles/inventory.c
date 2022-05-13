
#include <stddef.h>
#include "inventory.h"
#include <string.h>

// Return the total number of resistors in the inventory.
// Eg. there are 100 resistors with 330 ohm, 50 with 5600 ohm and 10 with
// 2 megaohm, the total number is 160.
size_t count_resistors(Item items[], size_t count) {
    size_t total = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(items[i].type, "resistor") == 0)
            total += items[i].quantity;
    }
    return total;
}

// Return the total number of capacitors in the inventory.
size_t count_capacitors(Item items[], size_t count) {
    size_t total = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(items[i].type, "capacitor") == 0)
            total += items[i].quantity;
    }
    return total;
}