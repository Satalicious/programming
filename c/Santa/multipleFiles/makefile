

# typing 'make' will invoke the first target entry in the file 

main: circuit.c main.c circuit.c ui.c inventory.c interface.c
	gcc -std=c99 main.c circuit.c ui.c inventory.c interface.c -o main.o

interface: interface.c
	gcc -std=c99 -c interface.c -o interface.o

inventory: inventory.c
	gcc -std=c99 -c inventory.c -o inventory.o

ui: ui.c circuit.c
	gcc -std=c99 -c ui.c circuit.c -o ui.o

circuit: circuit.c
	gcc -std=c99 -c circuit.c -o circuit.o

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object files
.PHONY: clean

clean:
	rm *.o