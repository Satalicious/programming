
#include <stdio.h>

void main()
{
	int z2, z1;

	printf("Geben Sie die erste Zahl ein: ");
	scanf_s("%d", &z1);

	printf("Geben Sie die zweite Zahl ein: ");
	scanf_s("%d", &z2);

	if (z1 == z2)
		printf("KGT ist %d", z1);
	while (z1 != z2)
	{
		if (z1 > z2)
			z1 -= z2;
		else
			z2 -= z1;
	}
	printf("KGT ist %d\n", z1);

}








	/* 	printf("\nMIT FOR ==================================\n\n");

	 	if (z1 > z2)
	{
		for (z2; z1 == z2; z1-=z2)
			printf("KGT ist %d\n", z1);

	}

	else if (z2 > z1)
	{
		for (z1; z2 == z1; z2-=z1)
			printf("KGT ist %d\n", z2);

	}*/

