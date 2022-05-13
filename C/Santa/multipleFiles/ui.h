
#ifndef UI_H
#define UI_H
#include "circuit.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Circuit read_circuit();

void draw_circuit(Circuit c);

void print_circuit(Circuit c);
#endif