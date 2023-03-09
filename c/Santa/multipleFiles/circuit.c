
#include "circuit.h"

/* circuit.c, circuit.h */
// return the total resistance of the circuit
double calc_circuit_resistance(Circuit c) {
    double result = 0.0;

    if (c.isSerial) {
        for (int i = 0; i < 3 ; i++) {
            result += c.resistor[i];
        }
        return result;
    } 
    else {
        for (int i = 0; i < 3 ; i++) {
            result += 1/c.resistor[i];
        }
        return 1/result;
    }
}
