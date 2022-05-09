#include <stdio.h>

/*
	author: ms
	usage: Variablen Grundlagen
	date: 2021-11-15
*/

void main()
{
	int zahl;	// Definition der Variablen Zahl vom Typ Integer
	int zahl2;

	printf("Zahl ist 124\n\n");  // ist Text, also ein String

	printf("12 + 36 = \n");	// wird nicht berechnet, weil String!
	zahl = 233;
	zahl = 23 + 455 - 12;	// funktioniert auch

	zahl2 = zahl + 25;

	printf("Inhalt von Zahl: %d\n\n", zahl);	// %d = Platzhalter für die Variable zahl
	printf("Inhalt von Zahl 2: %d", zahl2);
}


