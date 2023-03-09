
#include <stdio.h>
#include "Header.h"

void main()
{
	/*Erstellen Sie einen Taschenrechner, welcher die Grundfunktionen Addition,Substraktion,
	Multiplikation, Division zweier Zahlen beherrscht. Wählen Sie nach der EIngabe der biden Zahlen durch eingabe des
	betreffenden Zeichens (+ - * /) die jeweilige Grundfunktion aus, worauf das Ergebnis ausgegebne wird.*/
	
	bool flag = false;
	double z1 = 0, z2 = 0;
	char op;

	printf("Geben Sie zwei Zahlen ein, mit denen Sie Rechnungen durchführen wollen: ");
	scanf("%lf %lf",&z1,&z2);
	printf("\nSie haben %.2lf & %.2lf ausgewählt.",z1, z2);

	do
	{
		printf("\nGeben Sie nun die gewünschte Rechenoperation ein: + - * oder /: ");
		scanf(" %c",&op);

		if (op == '+')
		{
			addition(z1, z2);
			flag = true;
		}

		if (op == '-')
		{
			substraction(z1, z2);
			flag = true;
		}

		if (op == '*')
		{
			multiplication(z1, z2);
			flag = true;
		}

		if (op == '/')
		{
			division(z1, z2);
			flag = true;
		}


	} while (flag == false);
}