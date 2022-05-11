
#include "interface.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


size_t add_item(Item items[], size_t count) {
    Item i;
    char input[100];
    printf("Enter comp. type: ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &i.type);

    printf("Count: ");
    fgets(input, 100, stdin);
    sscanf(input, "%zu", &i.type);
    
    printf("Enter unit: ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &i.type);
    
    printf("Enter value: ");
    fgets(input, 100, stdin);
    sscanf(input, "%lf", &i.type);
    
}

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