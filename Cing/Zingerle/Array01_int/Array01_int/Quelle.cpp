#include <stdio.h>

int main()
{
	int i;
	int zahlen[10];		// Definition eines Feldes (Array) namens zahlen mit 10 Integer Werter
	int sum = 0;

	for (i = 0; i < 11; i++)
		zahlen[i] = 10-i;
		
	//for (i = 10; i = 0; i++)
		//zahlen[i] = i;


	for (i = 0; i < 10; i++)
	{
		printf("%d.Zahl: %d\n", i + 1, zahlen[i]);
		sum += zahlen[i];
	}


	printf("%d", sum);
	return 0;
}