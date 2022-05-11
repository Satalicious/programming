
#include "circuit.h"


double calc_circuit_resistance(Circuit c) {
    double result = 0.0;

    if (c.isSerial) {
        for (int i = 0; i < 3 ; i++) {
            result = c.resistors[i];
        }
        return result;
    } else {
        for (int i = 0; i < 3 ; i++) {
            result = 1/c.resistors[i];
        }
        return 1/result;
    }
}
