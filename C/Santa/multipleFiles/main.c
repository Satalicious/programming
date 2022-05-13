
#include "inventory.h"
#include "interface.h"
#include "circuit.h"
#include "ui.h"

int main() {
    Circuit one = {};
    Circuit two = {};
    one = read_circuit(one);
    two = read_circuit(two);
    calc_circuit_resistance(one);
    calc_circuit_resistance(two);
    print_circuit(one);
    draw_circuit(one);
    print_circuit(two);
    draw_circuit(two);
    cli();
    return 0;
}