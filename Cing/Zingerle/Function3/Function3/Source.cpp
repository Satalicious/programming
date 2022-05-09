




#include <stdio.h>
#include <conio.h>
#include "Header.h"

void main()

{
	int z1, x, y;
	char zeichen;

	printf("Griaﬂ di\n");
	hallo(); // Aufruf der Funktion hallo()
	printf("------------------------\n");
	hallo(3);
	printf("------------------------\n");
	z1 = summe(34, 78);
	printf("------------------------\n");
	printf("Doppelte Summe: %d\n", z1 * 2);

}