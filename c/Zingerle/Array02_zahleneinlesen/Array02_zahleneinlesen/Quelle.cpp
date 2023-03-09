#include <stdio.h>
#define MAX 10 //Pr�prozessoranweisung: MAX wird im Main durch 10 ersetzt

int main()
{
	int i;
	int zahlen[MAX] = {12,34,566,1234,45,2,-76,10};		// Definition eines Feldes (Array) namens zahlen mit 10 Integer Werter
	int sum = 0;
	float mittelwert;
	int min = 0;
	int max = 0;
	/*for (i = 0; i < 10; i++)
	{
		printf("%d.Zahl ", i+1);
		scanf("%d", &zahlen[i]);
		sum += zahlen[i];
	}*/
	for (i = 0; i < MAX; i++)
		sum += zahlen[i];

	min = zahlen[0];
	max = zahlen[0];

	for (i = 0; i < MAX; i++)
	{
		if (zahlen[i] > max)
			max = zahlen[i];
		if (zahlen[i] < min)
			min = zahlen[i];
	}


	mittelwert = (double)sum / 10;

	printf("Summe der Zahlen: %d\n", sum);
	printf("Mittwelwert betr�gt: %.2lf\n", mittelwert);
	printf("Kleinste Zahl: %d\n", min);
	printf("Gr��te Zahl: %d\n", max);
	





	for (i = 0; i < MAX; i++)
	{
		printf("%d.Zahl ", i+1);
		scanf("%d", &zahlen[i]);
		sum += zahlen[i];
	}

	min = max = 0;

	for (i = 0; i < MAX; i++)
	{
		if (zahlen[i] > zahlen[max])
			max = i;
		if (zahlen[i] < zahlen[min])
			min = i;
	}


	mittelwert = (double)sum / 10;

	printf("Summe der Zahlen: %d\n", sum);
	printf("Mittwelwert betr�gt: %.2lf\n", mittelwert);
	printf("Index der kleinsten Zahl ist: %d, mit dem Wert: %d\n", min+1, zahlen[min]);
	printf("Index der gr��ten Zahl ist: %d, mit dem Wert: %d\n", max+1, zahlen[max]);

	return 0;	
}