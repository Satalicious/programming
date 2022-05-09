
#include <stdio.h>

void main()

{
	int zahl;

	//Fuß gesteuert, wird gegenüber der Kopfgesteuerten 1x durchgelaufen, bevor Bedingung abgefragt wird!
	do
	{
		printf("Zahl:");
		scanf("%d", &zahl);

	}while (zahl < 0);
	printf("Zahl %d ist eine positive zahl!", zahl)

















}