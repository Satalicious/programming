

/* main.c */
// create at least two different circuits (one parallel and one serial)
// and use both draw_circuit(.) and print_circuit(.) on each of them


#include "circuit.h"
#include "ui.h"

int main() {
    Circuit one = {};
    Circuit two = {};
    one = read_circuit(one);
    two = read_circuit(two);
    calc_circuit_resistance(one);
    calc_circuit_resistance(two);
    draw_circuit(one);
    draw_circuit(two);
    print_circuit(one);
    print_circuit(two);
    return 0;
}
