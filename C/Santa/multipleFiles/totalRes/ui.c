
#include "ui.h"
#include "circuit.h"

/* in ui.c, ui.h */
// read the resistances from stdin
// also ask the user whether a parallel or series connection is used
// return a new circuit struct containing the above data
Circuit read_circuit() {
    Circuit res;
    char resistance[100];
    char connection;
    int temp;
    for (int i = 0; i < 3; i++) {
        printf("Enter resistance of Resistor %d: ",i);
        fgets(resistance, 100, stdin);
        sscanf(resistance, "%lf", &res.resistors[i]);
    }
    printf("\nSerial? (y) Parallel? (n)");
    fgets(connection, 100, stdin);
    scanf("%d",&temp);
    if (temp == 'y')
        res.isSerial = true;
    else
        res.isSerial = false;

    return res;
}
// print a visual representation of the struct; this can be something like
// -[220Ω]-[330Ω]-[220Ω]- and
//
//  ┌[220Ω]┐
// ─┼[330Ω]┼─
//  └[220Ω]┘
void draw_circuit(Circuit c) {
    printf(" ┌[%lfΩ]┐",c.resistors[0]);
    printf("─┼[%lfΩ]┼─",c.resistors[1]);
    printf(" └[%lfΩ]┘",c.resistors[2]);
}
// print the values of the resistors, whether a parallel or series connection
// is used and the total resistance
void print_circuit(Circuit c);



