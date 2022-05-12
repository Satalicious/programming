
#include "interface.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* interface.c, interface.h */
// ask the user to enter a new item on the command-line;
// add the new item to the given list and return the count increased by one
// (since there is one more element in the inventory array)
size_t add_item(Item items[], size_t count) {
    Item i;
    char input[100];
    printf("\nEnter component type(resistor, capacitor, ...): ");
    fgets(input, 80, stdin);
    sscanf(input, "%s", &i.type);

    printf("\nAmount of devices: ");
    fgets(input, 100, stdin);
    sscanf(input, "%zu", &i.type);
    
    printf("\nEnter value(resistance, capacity, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%lf", &i.type);
    
    printf("\nEnter the unit(Ω, MΩ, µF, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &i.type);
    return count +1;
}
// print given item to stdout
void print_item(Item i) {
    printf("Type: %c Quantity: %d  Value: %lf Unit: %c\n",i.type, i.quantity,i.value,i.unit);
}



// command-line interface to create and manage an inventory
// start a loop that asks the user which action they want to perform
// `a` -> create a new item and add it to the inventory array
// `c` -> show the number of capacitors
// `e` -> exit the program
// `i n` -> show the n-th item (0-indexed) of the inventory array
// `h` -> show this help text
// `l` -> show the list of items
// `r` -> show the number of resistors
void cli() {
    char input;
    char irgendwas[4];

    while (1) {

        printf("which action?");
        fgets(irgendwas, 3 ,stdin);
        sscanf(irgendwas,"%c",&input);

        switch (input) {
            case 'h':
                printf("show this help text");
                break;
            case 'e':
                exit(EXIT_SUCCESS);
                break;
            default:
                exit(EXIT_FAILURE);
        }
    }
}