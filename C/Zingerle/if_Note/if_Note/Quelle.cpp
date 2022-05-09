#include <stdio.h>

void main()

{
	int note;
	int z;

	printf("Note 1 bis 5: ");
	scanf("%d", &note);

	if (note == 1)
		printf("Sehr gut");

	if (note == 2)
		printf("gut");

	if (note == 3)
		printf("befriedigend");

	if (note == 4)
		printf("genuegend");

	if (note == 5)
		printf("nicht genuegend");

	else if (note < 1 || note > 5)
	{
		printf("try again");

	switch (z) // Befehl switch - case
	{
		case 1: printf("Sehr gut"); break;
		case 2: printf("Gut"); break;
		case 3: printf("Befriedigend"); break;
		case 4: printf("Genuegend"); break;
		case 5: printf("Nicht genuegend");

		}

	}
}