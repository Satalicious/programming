
#include <stdio.h>
#include <conio.h>

void isPrimzahl(int zahl) {

	char Frage;
	do
	{
		int isPrim = 1;

		for (int i = 2; i < zahl; i++)
		{
			if (zahl % i == 0)
			{
				isPrim = 0;
				break;
			}
		}

		if (isPrim == 1 && zahl != 1)
			printf("\n%d ist eine Primzahl!", zahl);
		else
			printf("\n%d ist eine Primzahl!", zahl);

		printf("\n Wollen Sie erneut durchführen?");
		Frage = getch();

	} while (Frage == 'y');
}