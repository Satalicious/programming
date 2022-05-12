
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
    fgets(input, 100, stdin);
    sscanf(input, "%s", i.type);

    printf("\nAmount of devices: ");
    fgets(input, 100, stdin);
    sscanf(input, "%u", &i.quantity);

    printf("\nEnter value(resistance, capacity, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%lf", &i.value);

    printf("\nEnter the unit(Ω, MΩ, µF, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", i.unit);
    
    items[count] = i;
    count++;
    return count;
}

// print given item to stdout
void print_item(Item i) {
    printf("\n=> Type: %s Quantity: %u  Value: %lf Unit: %s\n",i.type, i.quantity,i.value,i.unit);
}

// print all items, one per line
void print_items(Item items[], size_t count) {
    for (int i = 0; i < count; i++) {
        printf("\n=>Type: %s Quantity: %u  Value: %lf Unit: %s\n",items[i].type, items[i].quantity,items[i].value,items[i].unit);
    }
}

// command-line interface to create and manage an inventory
void cli() {
    char input[10];
    char cmd;
    int n;
    Item items[1000];
    size_t count = 0;
    while (1) {
        printf("\n`a` -> create a new item\n`c` -> show the number of capacitors\n`e` -> exit the program\n`i n` -> show the n-th item (0-indexed) of the inventory array\n`h` -> show this help text\n`l` -> show the list of items\n`r` -> show the number of resistors\n");
        fgets(input,sizeof(input),stdin);
        sscanf(input,"%c %d",&cmd,&n);
        switch (cmd) {
            case 'a':
                count = add_item(items,count);
                break;
            case 'c':
                printf("\n=> total number of capacitors: %lu\n",count_capacitors(items,count));
                break;
            case 'e':
                exit(EXIT_SUCCESS);
            case 'i':
                print_item(items[n]);
                break;
            case 'h':
                printf("=> show this help text");
                break;
            case 'l':
                print_items(items,count);
                break;
            case 'r':
                printf("\n=> total number of resistors: %lu\n",count_resistors(items,count));
                break;
            default:
                exit(EXIT_FAILURE);
        }
    }
}