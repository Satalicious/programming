
#include "ui.h"
#include "circuit.h"

/* in ui.c, ui.h */
// read the resistances from stdin
// also ask the user whether a parallel or series connection is used
// return a new circuit struct containing the above data
Circuit read_circuit(Circuit c) {
    char temp;
    for (int i = 0; i < 3; i++) {
        printf("Enter resistance of Resistor %d.: ",i+1);
        scanf(" %lf", &c.resistor[i]);
    }
    printf("\nSerial? (y) or Parallel? (n): ");
    scanf(" %c",&temp);
    if (temp == 'y')
        c.isSerial = true;
    else
        c.isSerial = false;

    return c;
}
// print a visual representation of the struct; this can be something like
// -[220Ω]-[330Ω]-[220Ω]- and
//
//  ┌[220Ω]┐
// ─┼[330Ω]┼─
//  └[220Ω]┘
void draw_circuit(Circuit c) {
    if (c.isSerial) {
        printf("\n-[%lfΩ]-[%lfΩ]-[%lfΩ]-",c.resistor[0],c.resistor[1],c.resistor[2]);
    } else {
        printf("\n ┌[%.0lfΩ]┐\n",c.resistor[0]);
        printf("─┼[%.0lfΩ]┼─\n",c.resistor[1]);
        printf(" └[%.0lfΩ]┘\n",c.resistor[2]);
    }
}
// print the values of the resistors, whether a parallel or series connection
// is used and the total resistance
void print_circuit(Circuit c) {
    if (c.isSerial)
        printf("\n ===================================\nSerial Circuit\n");
    else
        printf("\n ===================================\nParallel Circuit\n");

    for (int i = 0; i < 3 ; i++) {
            printf("\n%d. resistor: %.3lfΩ",i+1,c.resistor[i]);
    }
    printf("\n==> total resistance: %.4lfΩ\n",calc_circuit_resistance(c));
}



