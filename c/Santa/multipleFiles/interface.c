
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

    printf("\n=> Enter component type(resistor, capacitor, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", i.type);

    printf("\n=> Amount of devices: ");
    fgets(input, 100, stdin);
    sscanf(input, "%u", &i.quantity);

    printf("\n=> Enter value(resistance, capacity, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%lf", &i.value);

    printf("\n=> Enter the unit(Ω, MΩ, µF, ...): ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", i.unit);
    
    items[count] = i;
    count++;
    return count;
}

// print given item to stdout
void print_item(Item i) {
    printf("=> Type: %s Quantity: %u  Value: %lf Unit: %s\n",i.type, i.quantity,i.value,i.unit);
}

// print all items, one per line
void print_items(Item items[], size_t count) {
    for (size_t i = 0; i < count; i++) {
        printf("=> Type: %s Quantity: %u  Value: %lf Unit: %s\n",items[i].type, items[i].quantity,items[i].value,items[i].unit);
    }
}

// command-line interface to create and manage an inventory
void cli() {
    char input[10];
    char cmd;
    Item items[100];
    size_t count = 0, n = 0;
    printf("\n===================================================\n");
    printf("\nWelcome to the Command Line Interface! Enter your command: ");
    while (fgets(input, sizeof input, stdin)) {
        sscanf(input,"%c %lu",&cmd,&n);
        switch (cmd) {
            case 'a':
                count = add_item(items,count);
                break;
            case 'c':
                printf("=> total number of capacitors: %lu\n",count_capacitors(items,count));
                break;
            case 'e':
                exit(EXIT_SUCCESS);
            case 'i':
                if (n > count) {
                    printf("=> not enough items in array! only %lu items in array.\n",n-1);
                    break;
                } else if (n == 0) {
                    printf("you just found an easteregg. there is nothing at index 0!\n");
                    break;
                } else {
                    print_item(items[n-1]);
                    break;
                }
            //case 'h':
                // helptext is set to default
            case 'l':
                print_items(items,count);
                break;
            case 'r':
                printf("=> total number of resistors: %lu\n",count_resistors(items,count));
                break;
            default:
                printf("\n`a` -> create a new item\n`c` -> show the number of capacitors\n`e` -> exit the program\n`i n` -> show the n-th item (0-indexed) of the inventory array\n`h` -> show this help text\n`l` -> show the list of items\n`r` -> show the number of resistors\n");
                break;
        }
    }
}