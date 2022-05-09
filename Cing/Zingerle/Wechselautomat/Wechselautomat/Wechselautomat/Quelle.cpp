#include <stdio.h>
#include <conio.h>
#include "Header.h"
/*
	author:	ms
	usage:	Modulo
	date:	2021-11-29
*/


int main()
{
	char Frage;
	do
	{
	int z1=0;
	
	printf("\n\n==============\nRechner\n==============\n\n");
	printf("zu wechselnder Betrag: ");
	scanf("%d", &z1);

	ausgabe(z1);

	printf("\nWollen Sie den Test erneut durchf�hren? y / n");
	Frage = getch();
	} while (Frage == 'y');

	return 0;
}
