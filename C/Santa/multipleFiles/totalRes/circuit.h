
#ifndef CIRCUIT_H
#define CIRCUIT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    double resistors[3];
    bool isSerial;
} Circuit;

double calc_circuit_resistance(Circuit c);

#endif