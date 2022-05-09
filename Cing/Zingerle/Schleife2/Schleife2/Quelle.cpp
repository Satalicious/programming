
#include <stdio.h>

void main()
{
	int zahl= 0;

	while (zahl < 200)
	{
		zahl = zahl + 10;
		printf("%d, ", zahl);


	}
	zahl = 2;
	printf("\n\n BEGINN DER 2ten SCHLEIFE, ZAHL * 2 \n\n");

	while (zahl < 600)
	{
		printf("%d, ", zahl);
		zahl = zahl * 2;
	}

	//for (Initialiesierung; Bedingung; Re-Initialisierung)
	//Zählschleife
	for (zahl = 10; zahl <= 20; zahl++)
		printf("%d, ", zahl);







}